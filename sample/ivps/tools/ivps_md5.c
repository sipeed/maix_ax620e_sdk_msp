/**************************************************************************************************
 *
 * Copyright (c) 2019-2024 Axera Semiconductor Co., Ltd. All Rights Reserved.
 *
 * This source file is the property of Axera Semiconductor Co., Ltd. and
 * may not be copied or distributed in any isomorphic form without the prior
 * written consent of Axera Semiconductor Co., Ltd.
 *
 **************************************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
#include <ivps_global.h>
#include <ivps_md5.h>

/* The generation function used in the MD5 compression function 4 cycles is different for each cycle */
#define F(b, c, d) (((b) & (c)) | ((~b) & (d)))
#define G(b, c, d) (((b) & (d)) | ((c) & (~d)))
#define H(b, c, d) ((b) ^ (c) ^ (d))
#define I(b, c, d) ((c) ^ ((b) | (~d)))

/* Cycle left */
#define LEFTROTATE(num, n) (((num) << n) | ((num >> (32 - n))))

/* T table, 32 bit word, 64 elements in total, corresponding to 64 iterations, also known as additive constant */
const uint32_t T[64] = {0xd76aa478, 0xe8c7b756, 0x242070db, 0xc1bdceee,
                        0xf57c0faf, 0x4787c62a, 0xa8304613, 0xfd469501,
                        0x698098d8, 0x8b44f7af, 0xffff5bb1, 0x895cd7be,
                        0x6b901122, 0xfd987193, 0xa679438e, 0x49b40821,
                        0xf61e2562, 0xc040b340, 0x265e5a51, 0xe9b6c7aa,
                        0xd62f105d, 0x02441453, 0xd8a1e681, 0xe7d3fbc8,
                        0x21e1cde6, 0xc33707d6, 0xf4d50d87, 0x455a14ed,
                        0xa9e3e905, 0xfcefa3f8, 0x676f02d9, 0x8d2a4c8a,
                        0xfffa3942, 0x8771f681, 0x6d9d6122, 0xfde5380c,
                        0xa4beea44, 0x4bdecfa9, 0xf6bb4b60, 0xbebfbc70,
                        0x289b7ec6, 0xeaa127fa, 0xd4ef3085, 0x04881d05,
                        0xd9d4d039, 0xe6db99e5, 0x1fa27cf8, 0xc4ac5665,
                        0xf4292244, 0x432aff97, 0xab9423a7, 0xfc93a039,
                        0x655b59c3, 0x8f0ccc92, 0xffeff47d, 0x85845dd1,
                        0x6fa87e4f, 0xfe2ce6e0, 0xa3014314, 0x4e0811a1,
                        0xf7537e82, 0xbd3af235, 0x2ad7d2bb, 0xeb86d391};

/* The s value of the left cyclic shift used in 64 iterations */
const uint32_t S[64] = {7, 12, 17, 22, 7, 12, 17, 22, 7, 12, 17, 22, 7, 12, 17, 22,
                        5, 9, 14, 20, 5, 9, 14, 20, 5, 9, 14, 20, 5, 9, 14, 20,
                        4, 11, 16, 23, 4, 11, 16, 23, 4, 11, 16, 23, 4, 11, 16, 23,
                        6, 10, 15, 21, 6, 10, 15, 21, 6, 10, 15, 21, 6, 10, 15, 21};

/* Two utility functions */
static void int2byte(uint32_t val, uint8_t *bytes)
{
    bytes[0] = (uint8_t)val;
    bytes[1] = (uint8_t)(val >> 8);
    bytes[2] = (uint8_t)(val >> 16);
    bytes[3] = (uint8_t)(val >> 24);
}

static uint32_t byte2int(const uint8_t *bytes)
{
    return (uint32_t)bytes[0] | ((uint32_t)bytes[1] << 8) | ((uint32_t)bytes[2] << 16) | ((uint32_t)bytes[3] << 24);
}

/* MD5 main function */
static int MD5_Core(const char *filepath, uint8_t *result)
{
    FILE *fp = NULL;
    uint8_t buffer[64];
    uint8_t *temp = NULL;
    size_t count = 0, offset, i; /* The count is used to record the total length, which is needed for filling */
    uint32_t X[16];
    int flag = 0;

    if ((fp = fopen(filepath, "rb+")) == NULL)
    {
        printf("ERROR: File in %s not found.", filepath);
        return 0;
    }

    /* MD buffer CV, iteration in buffer */
    uint32_t A, B, C, D;
    /* The initial vector IV uses small-end storage (Intel x86 series originally uses Little Endian storage) */
    A = 0x67452301;
    B = 0xEFCDAB89;
    C = 0x98BADCFE;
    D = 0X10325476;

    while (!feof(fp))
    {
        memset(buffer, 0, sizeof(buffer));
        /* The fread function returns the number of times to read. Set one character at a time to know the character length */
        int len = fread(buffer, 1, 64, fp);
        /* Total length of update file */
        count += len;
        /* When the file is read to the end, it means that the filling operation is needed. At this time, the len read may be less than 512bit, or just equal to 512bit */
        if (feof(fp))
        {
            flag = 1;

            /* Because it is exactly equal to 448 bit, so new_ Len is directly equal to len+1 */
            int new_len;
            for (new_len = len + 1; new_len % 64 != 56; new_len++)
                ;

            /* 64bit more */
            temp = (uint8_t *)malloc(new_len + 8);
            memcpy(temp, buffer, len);

            /* fill 1000...0 */
            temp[len] = 0x80;
            for (offset = len + 1; offset < new_len; offset++)
                temp[offset] = 0;

            /* Add the lower 64 bits of the total length count at the end. Since the count unit here is byte, it should be multiplied by 8 */
            int2byte(count * 8, temp + new_len);
            int2byte(count >> 29, temp + new_len + 4); /* Referring to other codes, count>>29 is equivalent to count * 8>>32, but value overflow can be avoided */
            len = new_len;
        }

        /*
        Although only 512bit is read each time, this method can prevent len>512bit from
        occurring in the last time due to bit filling (at this time, it will be divided into two times)
        */
        for (offset = 0; offset < len; offset += 64)
        {
            /* At the end of the reading, we store the data after filling in the temp. In order to unify the processing, we save the data in the temp to the buffer */
            if (flag == 1)
            {
                memcpy(buffer, temp + offset, 64);
            }

            /* Save every 32-bit packet of 512 bits, which will be used in X [k] */
            for (int i = 0; i < 16; i++)
            {
                X[i] = byte2int(buffer + i * 4);
            }

            uint32_t a, b, c, d, temp, g, k;
            a = A;
            b = B;
            c = C;
            d = D;

            /* Main cycle, four rounds in total, 16 iterations per round, 64 iterations in total */
            for (i = 0; i < 64; i++)
            {
                if (i < 16)
                {
                    g = F(b, c, d);
                    k = i;
                }
                else if (i < 32)
                {
                    g = G(b, c, d);
                    k = (1 + 5 * i) % 16;
                }
                else if (i < 48)
                {
                    g = H(b, c, d);
                    k = (5 + 3 * i) % 16;
                }
                else
                {
                    g = I(b, c, d);
                    k = (7 * i) % 16;
                }
                temp = d;
                d = c;
                c = b;
                b = b + LEFTROTATE((a + g + X[k] + T[i]), S[i]);
                a = temp;
            }

            A += a;
            B += b;
            C += c;
            D += d;
        }
    }

    /* End of file reading, free memory */
    free(temp);
    fclose(fp);
    /* Convert the 128-bit final result into byte form */
    int2byte(A, result);
    int2byte(B, result + 4);
    int2byte(C, result + 8);
    int2byte(D, result + 12);

    return 1;
}

static int IVPS_FileMD5Calc(const char *pFilePath, IVPS_MD5_RESULT_T *ptResult)
{

    /* 128 bit */
// ### SIPEED EDIT ###
    uint8_t result[16] = {0};
// ### SIPEED EDIT END ###
    int i;
    AX_U64 LowValue = 0, HighValue = 0;

    printf("\nCalc MD5: %s\n\n", pFilePath);

    if (MD5_Core(pFilePath, result) == 1)
    {
        printf("The result is:");

        for (i = 0; i < 16; i++)
        {
            printf("%2.2x", result[i]);
        }
        printf("\n");
    }

    for (i = 0; i < 8; i++)
    {
        LowValue = LowValue << 8;
        HighValue = HighValue << 8;
        LowValue |= result[i];
        HighValue |= result[i + 8];
    }
    printf("MD5 Low:%llx High:%llx\n", LowValue, HighValue);
    ptResult->nLow = LowValue;
    ptResult->nHigh = HighValue;
    return 0;
}

int IVPS_FileMD5Check(const char *pFilePath, char *pCaseId, int nGrpId, int nChnId)
{
    int i, total = sizeof(gMD5Info) / sizeof(gMD5Info[0]);
    IVPS_MD5_RESULT_T tResult;

    if (!pCaseId)
        return 0;

    printf("pCaseId:%s\n", pCaseId);
    IVPS_FileMD5Calc(pFilePath, &tResult);
    for (i = 0; i < total; i++)
    {
        if (!strcmp(gMD5Info[i].arrCaseId, pCaseId))
        {
            if (gMD5Info[i].nGrpId == nGrpId && gMD5Info[i].nChnId == nChnId)
            {
                break;
            }
        }
    }

    if (i >= total)
    {
        ALOGE("Don't find case ID (GRP%dCHN%d)!", nGrpId, nChnId);
        return -1;
    }

    if (gMD5Info[i].tMD5Result.nLow != tResult.nLow || gMD5Info[i].tMD5Result.nHigh != tResult.nHigh)
    {
            ALOGE("Case%d MD5 check fail!", i);
            return -3;
    }
    printf("Case%d MD5 check success\n", i);

    return 0;
}
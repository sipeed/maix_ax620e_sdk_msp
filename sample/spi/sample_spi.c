/**********************************************************************************
 *
 * Copyright (c) 2019-2020 Beijing AXera Technology Co., Ltd. All Rights
 *Reserved.
 *
 * This source file is the property of Beijing AXera Technology Co., Ltd. and
 * may not be copied or distributed in any isomorphic form without the prior
 * written consent of Beijing AXera Technology Co., Ltd.
 *
 **********************************************************************************/
#include "ax_base_type.h"
#include <fcntl.h>
#include <getopt.h>
#include <linux/spi/spidev.h>
#include <linux/types.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/ioctl.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>

AX_U8 mode;
AX_U8 bits;
AX_U32 speed;
AX_U8 lsb;

struct DataInfo {
  AX_U8 *ptr;
  AX_U32 len;
};

static AX_U8 txbuff[256] = {
    0xff, 0x55, 0x00, 0xff, 0x55, 0x00, 0xff, 0x55, 0x00, 0xff,
    0x55, 0x00, 0xff, 0x55, 0x00, 0xff, 0x55, 0x00, 0xff, 0x55,
    0x00, 0xff, 0x55, 0x00, 0xff, 0x55, 0x00, 0xff, 0x55, 0x00,
};

// static void memfill(AX_U8 *dst, AX_U32 len) {
//   AX_U32 i;
//   AX_U8 v;
//
//   if (!dst)
//     return;
//
//   v = 0;
//   for (i = 0; i < len; i++) {
//     dst[i] = v;
//     v++; /* 0xff 后自动回绕到 0x00 */
//   }
// }
//
static void memfill(AX_U8 *dst, AX_U32 len) {
  AX_U8 *p;
  AX_U8 *end;
  AX_U32 rem;

  if (!dst)
    return;

  /* end 指向最后一个完整 8 字节块之后的位置 */
  end = dst + (len & ~7U);
  p = dst;

  /* 写入每个完整的 8 字节块 */
  while (p < end) {
    p[0] = 0xC0;
    p[1] = 0xFC;
    p[2] = 0xFC;
    p[3] = 0xFC;
    p[4] = 0xFC;
    p[5] = 0xC0;
    p[6] = 0xFC;
    p[7] = 0xC0;
    p += 8;
  }

  /* 填充不足 8 字节的剩余部分为 0 */
  rem = len & 7U;
  while (rem--) {
    *p++ = 0x00;
  }
}

static struct DataInfo buffer1() {
#define BUFFER1_LEN 24
  static AX_U8 buffer[BUFFER1_LEN];
  struct DataInfo datai;

  memfill(buffer, BUFFER1_LEN);
  datai.ptr = buffer;
  datai.len = BUFFER1_LEN;

  return datai;
}

static struct DataInfo buffer2() {
#define BUFFER2_LEN 240
  static AX_U8 buffer[BUFFER2_LEN];
  struct DataInfo datai;

  memfill(buffer, BUFFER2_LEN);
  datai.ptr = buffer;
  datai.len = BUFFER2_LEN;

  return datai;
}

AX_S32 SPI_write(AX_S32 spi_fd, AX_U8 *tx_buff, AX_U16 tx_len) {
  AX_S32 ret;
  struct spi_ioc_transfer xfer[] = {
      {
          .tx_buf = (unsigned long)tx_buff,
          .len = tx_len,
      },
  };

  ret = ioctl(spi_fd, SPI_IOC_MESSAGE(1), &xfer);
  if (ret < 1)
    printf("%s, can't xfer spi message1\r\n", __func__);

  return 0;
}

AX_S32 SPI_read(AX_S32 spi_fd, AX_U8 *tx_buff, AX_U16 tx_len, AX_U8 *rx_buff,
                AX_U16 rx_len) {
  AX_S32 ret;

  struct spi_ioc_transfer xfer[] = {
      {
          .tx_buf = (unsigned long)tx_buff,
          .len = tx_len,
      },
      {
          .rx_buf = (unsigned long)rx_buff,
          .len = rx_len,
      },
  };

  ret = ioctl(spi_fd, SPI_IOC_MESSAGE(2), &xfer);

  return ret;
}

AX_S32 SPI_init(AX_U8 bus_num, AX_U8 cs) {
  AX_S32 ret;
  AX_S32 spi_fd = -1;
  char bus_index[8];
  char spi_cs[8];
  char device_name[64];

  sprintf(bus_index, "%d", bus_num);
  sprintf(spi_cs, "%d", cs);
  sprintf(device_name, "/dev/spidev%s.%s", bus_index, spi_cs);

  printf("%s: spi device is %s \r\n", __func__, device_name);

  spi_fd = open(device_name, O_RDWR);
  if (spi_fd < 0) {
    printf("Open /dev/%s failed!!!\r\n", device_name);
    return -1;
  }

  /*
   * read spi value
   */
  ret = ioctl(spi_fd, SPI_IOC_RD_MODE, &mode);
  if (ret < 0) {
    printf("%s: can't get spi mode \r\n", __func__);
  }
  ret = ioctl(spi_fd, SPI_IOC_RD_BITS_PER_WORD, &bits);
  if (ret < 0) {
    printf("%s: can't get bits per word \r\n", __func__);
  }
  ret = ioctl(spi_fd, SPI_IOC_RD_MAX_SPEED_HZ, &speed);
  if (ret < 0) {
    printf("%s: can't get max speed hz \r\n", __func__);
  }
  // ret = ioctl(spi_fd, SPI_IOC_RD_LSB_FIRST, &lsb);
  // if (ret < 0) {
  //   printf("%s: can't s get lsb hz \r\n", __func__);
  // }

  printf("%s: spi default value:\nmode:%d, bits:%d, speed:%d, lsb:%d\r\n",
         __func__, mode, bits, speed, lsb);

  mode = 0x0;
  bits = 8;
  speed = 8000000;
  // lsb = 0x8;
  ret = ioctl(spi_fd, SPI_IOC_WR_MODE, &mode);
  if (ret < 0) {
    printf("%s: can't set spi mode \r\n", __func__);
  }
  ret = ioctl(spi_fd, SPI_IOC_WR_BITS_PER_WORD, &bits);
  if (ret < 0) {
    printf("%s: can't set bits per word \r\n", __func__);
  }
  ret = ioctl(spi_fd, SPI_IOC_WR_MAX_SPEED_HZ, &speed);
  if (ret < 0) {
    printf("%s: can't set max speed hz \r\n", __func__);
  }
  // ret = ioctl(spi_fd, SPI_IOC_WR_LSB_FIRST, &lsb);
  // if (ret < 0) {
  //     printf("%s: can't set lsb %d \r\n", __func__, ret);
  // }
  printf("%s: set spi value:\nmode:%d, bits:%d, speed:%d, lsb:%d\r\n", __func__,
         mode, bits, speed, lsb);

  printf("Open spi dev 0x%x \r\n", spi_fd);

  return spi_fd;
}

int main(int argc, char **argv) {
  AX_S32 spi_fd = 0;
  struct DataInfo datai1;
  struct DataInfo datai2;
  AX_U32 i;

  spi_fd = SPI_init(1, 0);
  if (spi_fd < 0)
    printf("%s: SPI_init error. \r\n", __func__);

  // SPI_write(spi_fd, txbuff, 24);

  datai1 = buffer1();
  datai2 = buffer2();

  printf("write %d bytes:\n", datai1.len);
  for (i = 0; i < datai1.len; ++i) {
    printf("%02x ", datai1.ptr[i]);
  }
  printf("\n");
  SPI_write(spi_fd, datai1.ptr, datai1.len);

  sleep(3);

  printf("write %d bytes:\n", datai2.len);
  for (i = 0; i < datai2.len; ++i) {
    printf("%02x ", datai2.ptr[i]);
  }
  printf("\n");
  SPI_write(spi_fd, datai2.ptr, datai2.len);

  return 0;
}

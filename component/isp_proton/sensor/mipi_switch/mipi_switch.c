/**************************************************************************************************
 *
 * Copyright (c) 2019-2024 Axera Semiconductor Co., Ltd. All Rights Reserved.
 *
 * This source file is the property of Axera Semiconductor Co., Ltd. and
 * may not be copied or distributed in any isomorphic form without the prior
 * written consent of Axera Semiconductor Co., Ltd.
 *
 **************************************************************************************************/

#include <sys/types.h>
#include <sys/stat.h>
#include <sys/ioctl.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include "mipi_switch.h"

#define MIPI_SWITCH_NODE "/dev/ax_mipi_switch"

int ax_mipi_switch_init(AX_SWITCH_INFO_T *pSwitchInfo)
{
    int ret;
    int fd = -1;

    fd = open(MIPI_SWITCH_NODE, O_RDWR);
    if (fd < 0) {
        printf("Open ax_mipi_switch dev fail!\n");
        return -1;
    }

    ret = ioctl(fd, AX_MIPI_SWITCH_IOC_INIT, pSwitchInfo);
    if (ret < 0) {
        printf("CMD AX_MIPI_SWITCH_IOC_INIT error!\n");
    }

    close(fd);

    return ret;
}

int ax_mipi_switch_start(void)
{
    int ret;
    int fd = -1;

    fd = open(MIPI_SWITCH_NODE, O_RDWR);
    if (fd < 0) {
        printf("Open ax_mipi_switch dev fail!\n");
        return -1;
    }

    ret = ioctl(fd, AX_MIPI_SWITCH_IOC_START);
    if (ret < 0) {
        printf("CMD AX_MIPI_SWITCH_IOC_START error!\n");
    }

    close(fd);

    return ret;
}

int ax_mipi_switch_stop(void)
{
    int ret;
    int fd = -1;

    fd = open(MIPI_SWITCH_NODE, O_RDWR);
    if (fd < 0) {
        printf("Open ax_mipi_switch dev fail!\n");
        return -1;
    }

    ret = ioctl(fd, AX_MIPI_SWITCH_IOC_STOP);
    if (ret < 0) {
        printf("CMD AX_MIPI_SWITCH_IOC_STOP error!\n");
    }

    close(fd);

    return ret;
}

int ax_mipi_switch_change(int nSnsId)
{
    int ret;
    int fd = -1;

    fd = open(MIPI_SWITCH_NODE, O_RDWR);
    if (fd < 0) {
        printf("Open ax_mipi_switch dev fail!\n");
        return -1;
    }

    ret = ioctl(fd, AX_MIPI_SWITCH_IOC_CHANGE, &nSnsId);
    if (ret < 0) {
        printf("CMD AX_MIPI_SWITCH_IOC_CHANGE error!\n");
    }

    close(fd);

    return ret;
}

int ax_mipi_switch_set_fps(AX_VSYNC_INFO_T *pVsyncInfo)
{
    int ret;
    int fd = -1;

    fd = open(MIPI_SWITCH_NODE, O_RDWR);
    if (fd < 0) {
        printf("Open ax_mipi_switch dev fail!\n");
        return -1;
    }

    ret = ioctl(fd, AX_MIPI_SWITCH_IOC_SET_FPS, pVsyncInfo);
    if (ret < 0) {
        printf("CMD AX_MIPI_SWITCH_IOC_SET_FPS error!\n");
    }

    close(fd);

    return ret;
}

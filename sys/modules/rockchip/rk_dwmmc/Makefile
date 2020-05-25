# $FreeBSD: stable/12/sys/modules/rockchip/rk_dwmmc/Makefile 355626 2019-12-11 18:43:39Z manu $

.PATH: ${SRCTOP}/sys/dev/mmc/host/

KMOD=	rk_dwmmc
SRCS=	dwmmc.c dwmmc_rockchip.c

SRCS+=	\
	bus_if.h \
	clknode_if.h \
	device_if.h \
	ofw_bus_if.h

.include <bsd.kmod.mk>

# $FreeBSD: stable/12/sys/modules/rockchip/rk_spi/Makefile 356277 2020-01-02 17:44:41Z manu $

.PATH: ${SRCTOP}/sys/arm64/rockchip

KMOD=	rk_spi
SRCS=	rk_spi.c

SRCS+=	\
	bus_if.h \
	clknode_if.h \
	device_if.h \
	ofw_bus_if.h \
	spibus_if.h \

.include <bsd.kmod.mk>

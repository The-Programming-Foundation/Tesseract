# $FreeBSD: stable/12/sys/modules/i2c/ads111x/Makefile 356017 2019-12-22 18:11:57Z ian $

.PATH:		${SRCTOP}/sys/dev/iicbus

KMOD=	ads111x
SRCS=	ads111x.c

SRCS+=	\
	bus_if.h \
	device_if.h \
	iicbus_if.h \
	opt_platform.h \

.if !empty(OPT_FDT)
SRCS+=	ofw_bus_if.h
.endif

.include <bsd.kmod.mk>

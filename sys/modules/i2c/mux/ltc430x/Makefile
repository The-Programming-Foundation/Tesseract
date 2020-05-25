# $FreeBSD: stable/12/sys/modules/i2c/mux/ltc430x/Makefile 356278 2020-01-02 17:51:49Z ian $

.PATH:		${SRCTOP}/sys/dev/iicbus/mux

KMOD=	ltc430x
SRCS=	ltc430x.c

SRCS+=	\
	bus_if.h \
	device_if.h \
	iicbus_if.h \
	iicmux_if.h \
	opt_platform.h \

.if !empty(OPT_FDT)
SRCS+=	ofw_bus_if.h
.endif


.include <bsd.kmod.mk>

# $FreeBSD: stable/12/sys/modules/superio/Makefile 349580 2019-07-01 17:05:41Z avg $

.PATH: ${.CURDIR}/../../dev/superio

KMOD=	superio
SRCS=	superio.c
SRCS+=	device_if.h bus_if.h isa_if.h

.include <bsd.kmod.mk>

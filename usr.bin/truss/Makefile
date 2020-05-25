# $FreeBSD: stable/12/usr.bin/truss/Makefile 360468 2020-04-29 16:04:59Z jhb $

#NO_WERROR=
PROG=	truss
SRCS=	main.c setup.c syscalls.c

LIBADD=	sysdecode

#CFLAGS+= -I${.CURDIR} -I. -I${SRCTOP}/sys
CFLAGS+= -I${SRCTOP}/sys

.include <bsd.prog.mk>

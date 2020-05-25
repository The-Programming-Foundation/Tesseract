# $FreeBSD: stable/12/usr.bin/elfctl/Makefile 358512 2020-03-02 02:36:41Z emaste $

ELFTCDIR=	${SRCTOP}/contrib/elftoolchain

PROG=	elfctl

LIBADD=	elftc elf

CFLAGS+=-I${ELFTCDIR}/libelftc -I${ELFTCDIR}/common

.include <bsd.prog.mk>

# $FreeBSD: stable/12/libexec/rtld-elf/amd64/Makefile.inc 351779 2019-09-03 19:36:46Z kib $

CFLAGS+=	${CFLAGS_NO_SIMD} -msoft-float
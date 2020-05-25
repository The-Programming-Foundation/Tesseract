# $FreeBSD: stable/12/usr.bin/clang/Makefile.inc 356460 2020-01-07 18:08:09Z dim $

WARNS?=		0

.include <bsd.compiler.mk>

MK_PIE:=	no	# Explicit libXXX.a references

.if ${COMPILER_TYPE} == "clang"
DEBUG_FILES_CFLAGS= -gline-tables-only
.else
DEBUG_FILES_CFLAGS= -g1
.endif

.if ${MACHINE_ARCH:Mmips*} && ${MACHINE_ARCH:Mmips64*} == ""
CFLAGS+= -mxgot
CXXFLAGS+= -mxgot
.endif

.include "../Makefile.inc"

# $FreeBSD: stable/12/lib/clang/Makefile.inc 352754 2019-09-26 16:05:57Z emaste $

.include <bsd.compiler.mk>

MK_PIE:=	no	# Explicit libXXX.a references

.if ${COMPILER_TYPE} == "clang"
DEBUG_FILES_CFLAGS= -gline-tables-only
.else
DEBUG_FILES_CFLAGS= -g1
.endif

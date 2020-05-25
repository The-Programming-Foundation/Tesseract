# $FreeBSD: stable/12/usr.bin/clang/llvm-ar/Makefile 356462 2020-01-07 19:49:10Z dim $

PROG_CXX=	llvm-ar

SRCDIR=		llvm/tools/llvm-ar
SRCS+=		llvm-ar.cpp

LIBADD+=	z

LINKS+=		${BINDIR}/llvm-ar ${BINDIR}/llvm-ranlib

.include "../llvm.prog.mk"

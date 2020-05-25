# $FreeBSD: stable/12/lib/clang/clang.pre.mk 356462 2020-01-07 19:49:10Z dim $

.include "llvm.pre.mk"

CLANG_SRCS=	${LLVM_BASE}/clang

CLANG_TBLGEN?=	clang-tblgen

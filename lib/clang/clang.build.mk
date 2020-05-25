# $FreeBSD: stable/12/lib/clang/clang.build.mk 356462 2020-01-07 19:49:10Z dim $

.include <src.opts.mk>

.ifndef CLANG_SRCS
.error Please define CLANG_SRCS before including this file
.endif

CFLAGS+=	-I${CLANG_SRCS}/include

.if ${MK_CLANG_FULL} != "no"
CFLAGS+=	-DCLANG_ENABLE_ARCMT
CFLAGS+=	-DCLANG_ENABLE_STATIC_ANALYZER
.endif

.include "llvm.build.mk"

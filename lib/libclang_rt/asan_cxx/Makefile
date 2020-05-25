# $FreeBSD: stable/12/lib/libclang_rt/asan_cxx/Makefile 360545 2020-05-01 20:20:23Z dim $

.include <bsd.init.mk>

LIB=		clang_rt.asan_cxx-${CRTARCH}

CXXFLAGS+=	-frtti

SRCS+=		asan/asan_new_delete.cpp
SRCS+=		ubsan/ubsan_handlers_cxx.cpp
SRCS+=		ubsan/ubsan_type_hash.cpp
SRCS+=		ubsan/ubsan_type_hash_itanium.cpp

.include <bsd.lib.mk>

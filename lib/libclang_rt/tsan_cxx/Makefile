# $FreeBSD: stable/12/lib/libclang_rt/tsan_cxx/Makefile 360545 2020-05-01 20:20:23Z dim $

.include <bsd.init.mk>

LIB=		clang_rt.tsan_cxx-${CRTARCH}

SRCS+=		tsan/rtl/tsan_new_delete.cpp
SRCS+=		ubsan/ubsan_handlers_cxx.cpp
SRCS+=		ubsan/ubsan_type_hash.cpp
SRCS+=		ubsan/ubsan_type_hash_itanium.cpp

.include <bsd.lib.mk>

CXXFLAGS.ubsan_handlers_cxx.cpp=		-frtti
CXXFLAGS.ubsan_type_hash.cpp=		-frtti
CXXFLAGS.ubsan_type_hash_itanium.cpp=	-frtti

# $FreeBSD: stable/12/lib/libdevdctl/Makefile 356460 2020-01-07 18:08:09Z dim $

LIB_CXX=	devdctl
INCS=	consumer.h		\
	event.h			\
	event_factory.h		\
	exception.h		\
	guid.h
SRCS=	consumer.cc		\
	event.cc		\
	event_factory.cc	\
	exception.cc		\
	guid.cc

INCSDIR= ${INCLUDEDIR}/devdctl

WARNS?=	3
PRIVATELIB=	true
SHLIB_MAJOR=	0

# Silence warnings about usage of deprecated std::auto_ptr, and various
# deprecated function objects from <functional>
CXXWARNFLAGS+=	-Wno-deprecated-declarations

.include <bsd.lib.mk>

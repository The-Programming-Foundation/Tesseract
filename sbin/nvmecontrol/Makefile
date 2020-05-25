# $FreeBSD: stable/12/sbin/nvmecontrol/Makefile 359838 2020-04-12 22:11:29Z dab $

.include <src.opts.mk>

PACKAGE=runtime
PROG=	nvmecontrol
SRCS=	comnd.c nvmecontrol.c
SRCS+=	devlist.c firmware.c format.c identify.c logpage.c ns.c nsid.c
SRCS+=	perftest.c power.c reset.c resv.c sanitize.c
SRCS+=	passthru.c
SRCS+=	identify_ext.c nvme_util.c nc_util.c
MAN=	nvmecontrol.8
LDFLAGS+= -rdynamic
LIBADD+= util
SUBDIR=	modules
HAS_TESTS=
SUBDIR.${MK_TESTS}+= tests

.PATH:	${SRCTOP}/sys/dev/nvme

.include <bsd.prog.mk>
.include <bsd.subdir.mk>

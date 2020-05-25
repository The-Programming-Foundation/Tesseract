# $FreeBSD: stable/12/sys/modules/ipfw_nat64/Makefile 356093 2019-12-26 18:05:38Z ae $

.PATH: ${SRCTOP}/sys/netpfil/ipfw/nat64

KMOD=	ipfw_nat64
SRCS=	ip_fw_nat64.c nat64_translate.c
SRCS+=	nat64clat.c nat64clat_control.c
SRCS+=	nat64lsn.c nat64lsn_control.c
SRCS+=	nat64stl.c nat64stl_control.c
SRCS+=	opt_ipstealth.h

CFLAGS+= -I${SRCTOP}/sys/contrib/ck/include

.include <bsd.kmod.mk>

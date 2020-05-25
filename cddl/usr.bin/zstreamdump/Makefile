# $FreeBSD: stable/12/cddl/usr.bin/zstreamdump/Makefile 361383 2020-05-22 13:27:02Z avg $

.PATH: ${SRCTOP}/cddl/contrib/opensolaris/cmd/zstreamdump

PROG=	zstreamdump
MAN=	zstreamdump.1

WARNS?=	0
CFLAGS+= -I${SRCTOP}/sys/cddl/compat/opensolaris
CFLAGS+= -I${SRCTOP}/cddl/compat/opensolaris/include
CFLAGS+= -I${SRCTOP}/cddl/compat/opensolaris/lib/libumem
CFLAGS+= -I${SRCTOP}/cddl/contrib/opensolaris/lib/libzpool/common
CFLAGS+= -I${SRCTOP}/cddl/contrib/opensolaris/lib/libnvpair
CFLAGS+= -I${SRCTOP}/sys/cddl/contrib/opensolaris/common/zfs
CFLAGS+= -I${SRCTOP}/sys/cddl/contrib/opensolaris/uts/common/fs/zfs
CFLAGS+= -I${SRCTOP}/sys/cddl/contrib/opensolaris/uts/common
CFLAGS+= -I${SRCTOP}/cddl/contrib/opensolaris/head

LIBADD=	m nvpair umem zpool zfs pthread z avl

CSTD=	c99

.include <bsd.prog.mk>

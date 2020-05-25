#	$NetBSD: Makefile,v 1.6 1997/05/08 21:11:11 gwr Exp $
# $FreeBSD: stable/12/sbin/fsck_msdosfs/Makefile 359638 2020-04-05 02:45:54Z delphij $

FSCK=	${.CURDIR:H}/fsck
.PATH: ${FSCK}

PACKAGE=runtime
PROG=	fsck_msdosfs
MAN=	fsck_msdosfs.8
SRCS=	main.c check.c boot.c fat.c dir.c fsutil.c

CFLAGS+= -I${FSCK} -DHAVE_LIBUTIL_H
LIBADD=	util

.include <bsd.prog.mk>

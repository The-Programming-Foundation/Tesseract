#	@(#)Makefile	8.3 (Berkeley) 3/27/94
# $FreeBSD: stable/12/sbin/mount_nullfs/Makefile 314656 2017-03-04 11:33:01Z ngie $

PACKAGE=runtime
PROG=	mount_nullfs
SRCS=	mount_nullfs.c getmntopts.c
MAN=	mount_nullfs.8

MOUNT=	${.CURDIR:H}/mount
CFLAGS+=-I${MOUNT}

.PATH:	${MOUNT}

.include <bsd.prog.mk>

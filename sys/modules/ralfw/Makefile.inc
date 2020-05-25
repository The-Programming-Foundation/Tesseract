# $FreeBSD: stable/12/sys/modules/ralfw/Makefile.inc 351875 2019-09-05 17:20:20Z bdrewery $

#
# Common rules for building firmware.  Note this gets auto-included
# by the subdir Makefile's as a consequence of included bsd.kmod.mk.
#
KMOD=	${IMG}fw
_FIRM=	${IMG}.fw

CLEANFILES+=	${_FIRM}

FIRMWS=	${_FIRM}:${KMOD}

${_FIRM}: ${SRCTOP}/sys/contrib/dev/ral/${_FIRM}.uu
	uudecode -p ${.ALLSRC} > ${.TARGET}
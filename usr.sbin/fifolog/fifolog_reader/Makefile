# $FreeBSD: stable/12/usr.sbin/fifolog/fifolog_reader/Makefile 314479 2017-03-01 05:21:21Z ngie $

PROG=	fifolog_reader

CFLAGS+= -I${.CURDIR:H}/lib

MAN=

LIBADD=	fifolog

regress:
	./${PROG} /tmp/fifolog.0
	./${PROG} -t /tmp/fifolog.0
	./${PROG} /tmp/fifolog.1
	./${PROG} -B "00:00" /tmp/fifolog.1
	./${PROG} -T "%y%m%d-%H%M%S" /tmp/fifolog.1
	./${PROG} -T "" /tmp/fifolog.1

.include <bsd.prog.mk>

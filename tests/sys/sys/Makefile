# $FreeBSD: stable/12/tests/sys/sys/Makefile 356307 2020-01-02 23:18:43Z erj $

.include <bsd.compiler.mk>

TESTSDIR=	${TESTSBASE}/sys/sys

ATF_TESTS_C=	bitstring_test

WARNS?=	5

.if ${COMPILER_TYPE} == "gcc"
CFLAGS.bitstring_test=	-fno-strict-overflow
.endif

.include <bsd.test.mk>

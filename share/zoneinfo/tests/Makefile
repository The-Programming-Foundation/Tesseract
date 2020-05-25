# $FreeBSD: stable/12/share/zoneinfo/tests/Makefile 360214 2020-04-23 04:27:55Z delphij $

.include <src.opts.mk>

.PATH: ${SRCTOP}/contrib/tzdata

PACKAGE=	tests

FILESGROUPS+=	TESTFILES

ATF_TESTS_SH+=	backward_test
TESTFILES+=	backward

TESTFILES+=	zoneinfo_common.sh
TESTFILESPACKAGE= ${PACKAGE}
TESTFILESDIR=	${TESTSDIR}

.include <bsd.test.mk>

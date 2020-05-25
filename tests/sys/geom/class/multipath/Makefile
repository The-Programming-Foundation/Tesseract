# $FreeBSD: stable/12/tests/sys/geom/class/multipath/Makefile 355431 2019-12-06 00:12:14Z asomers $

PACKAGE=	tests

TESTSDIR=	${TESTSBASE}/sys/geom/class/${.CURDIR:T}

ATF_TESTS_SH+=	failloop
ATF_TESTS_SH+=	misc
TEST_METADATA.failloop+= is_exclusive=true

${PACKAGE}FILES+=		conf.sh

.include <bsd.test.mk>

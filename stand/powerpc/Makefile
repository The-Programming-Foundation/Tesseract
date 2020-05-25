# $FreeBSD: stable/12/stand/powerpc/Makefile 353983 2019-10-24 03:01:40Z kevans $

NO_OBJ=t

.include <bsd.init.mk>

SUBDIR.yes=		boot1.chrp ofw uboot

.if "${MACHINE_ARCH}" == "powerpc64"
SUBDIR.${MK_FDT}+=	kboot
.endif

.include <bsd.subdir.mk>

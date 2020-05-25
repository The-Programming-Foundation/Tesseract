# $FreeBSD: stable/12/sys/modules/i2c/mux/Makefile 356278 2020-01-02 17:51:49Z ian $

SUBDIR = \
	iicmux \
	ltc430x \

.if !empty(OPT_FDT)
SUBDIR+= iic_gpiomux
.endif

.include <bsd.subdir.mk>

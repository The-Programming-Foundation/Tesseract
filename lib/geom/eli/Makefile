# $FreeBSD: stable/12/lib/geom/eli/Makefile 357863 2020-02-13 18:26:07Z asomers $

PACKAGE=runtime
.PATH: ${.CURDIR:H:H}/misc ${SRCTOP}/sys/geom/eli ${SRCTOP}/sys/crypto/sha2

GEOM_CLASS=	eli
SRCS=	g_eli_crypto.c
SRCS+=	g_eli_hmac.c
SRCS+=	g_eli_key.c
SRCS+=	pkcs5v2.c
SRCS+=	sha256c.c
SRCS+=	sha512c.c

LIBADD=	md crypto

CFLAGS+=-I${SRCTOP}/sys

.include <bsd.lib.mk>

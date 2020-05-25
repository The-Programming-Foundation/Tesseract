# $FreeBSD: stable/12/stand/efi/loader/arch/i386/Makefile.inc 354004 2019-10-24 03:48:28Z kevans $

SRCS+=	start.S \
	elf32_freebsd.c \
	exec.c

.PATH:	${BOOTSRC}/i386/libi386
SRCS+=	nullconsole.c \
	comconsole.c \
	spinconsole.c

CFLAGS+=	-fPIC -DTERM_EMU
LDFLAGS+=	-Wl,-znocombreloc

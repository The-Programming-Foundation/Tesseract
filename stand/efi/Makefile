# $FreeBSD: stable/12/stand/efi/Makefile 353988 2019-10-24 03:16:23Z kevans $

NO_OBJ=t

.include <bsd.init.mk>

# In-tree GCC does not support __attribute__((ms_abi)), but gcc newer
# than 4.5 supports it.
.if ${COMPILER_TYPE} != "gcc" || ${COMPILER_VERSION} >= 40500

SUBDIR.${MK_FDT}+=	fdt
SUBDIR.yes+=	libefi boot1 gptboot
SUBDIR.${MK_FORTH}+= loader_4th
SUBDIR.${MK_LOADER_LUA}+= loader_lua
SUBDIR.yes+=	loader_simp

.endif # ${COMPILER_TYPE} != "gcc" || ${COMPILER_VERSION} >= 40500

.include <bsd.subdir.mk>

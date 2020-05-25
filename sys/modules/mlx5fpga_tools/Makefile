# $FreeBSD: stable/12/sys/modules/mlx5fpga_tools/Makefile 359378 2020-03-27 20:06:40Z kib $
.PATH:	${SRCTOP}/sys/dev/mlx5/mlx5_fpga_tools

KMOD=mlx5fpga_tools
SRCS= \
	mlx5fpga_tools_main.c \
	mlx5fpga_tools_char.c

SRCS+=	${LINUXKPI_GENSRCS}
SRCS+= 	opt_inet.h opt_inet6.h opt_rss.h opt_ratelimit.h

CFLAGS+= -I${SRCTOP}/sys/ofed/include
CFLAGS+= -I${SRCTOP}/sys/compat/linuxkpi/common/include

.include <bsd.kmod.mk>

CFLAGS+= -Wno-cast-qual -Wno-pointer-arith ${GCC_MS_EXTENSIONS}
CFLAGS+= -DCONFIG_MLX5_FPGA -DCONFIG_MLX5_ACCEL

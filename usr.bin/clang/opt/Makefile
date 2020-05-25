# $FreeBSD: stable/12/usr.bin/clang/opt/Makefile 360545 2020-05-01 20:20:23Z dim $

PROG_CXX=	opt

SRCDIR=		llvm/tools/opt
SRCS+=		AnalysisWrappers.cpp
SRCS+=		BreakpointPrinter.cpp
SRCS+=		GraphPrinters.cpp
SRCS+=		NewPMDriver.cpp
SRCS+=		PassPrinters.cpp
SRCS+=		PrintSCC.cpp
SRCS+=		opt.cpp

LIBADD+=	z

.include "../llvm.prog.mk"

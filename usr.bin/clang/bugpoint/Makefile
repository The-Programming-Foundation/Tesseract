# $FreeBSD: stable/12/usr.bin/clang/bugpoint/Makefile 356462 2020-01-07 19:49:10Z dim $

PROG_CXX=	bugpoint

SRCDIR=		llvm/tools/bugpoint
SRCS+=		BugDriver.cpp
SRCS+=		CrashDebugger.cpp
SRCS+=		ExecutionDriver.cpp
SRCS+=		ExtractFunction.cpp
SRCS+=		FindBugs.cpp
SRCS+=		Miscompilation.cpp
SRCS+=		OptimizerDriver.cpp
SRCS+=		ToolRunner.cpp
SRCS+=		bugpoint.cpp

LIBADD+=	z

.include "../llvm.prog.mk"

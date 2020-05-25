# $FreeBSD: stable/12/usr.bin/clang/llvm-mca/Makefile 356462 2020-01-07 19:49:10Z dim $

PROG_CXX=	llvm-mca

SRCDIR=		llvm/tools/llvm-mca
SRCS+=		CodeRegion.cpp
SRCS+=		CodeRegionGenerator.cpp
SRCS+=		PipelinePrinter.cpp
SRCS+=		Views/BottleneckAnalysis.cpp
SRCS+=		Views/DispatchStatistics.cpp
SRCS+=		Views/InstructionInfoView.cpp
SRCS+=		Views/RegisterFileStatistics.cpp
SRCS+=		Views/ResourcePressureView.cpp
SRCS+=		Views/RetireControlUnitStatistics.cpp
SRCS+=		Views/SchedulerStatistics.cpp
SRCS+=		Views/SummaryView.cpp
SRCS+=		Views/TimelineView.cpp
SRCS+=		Views/View.cpp
SRCS+=		llvm-mca.cpp

CFLAGS+=	-I${LLVM_BASE}/${SRCDIR}

LIBADD+=	z

.include "../llvm.prog.mk"

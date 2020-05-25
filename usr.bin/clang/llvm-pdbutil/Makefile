# $FreeBSD: stable/12/usr.bin/clang/llvm-pdbutil/Makefile 360545 2020-05-01 20:20:23Z dim $

PROG_CXX=	llvm-pdbutil

SRCDIR=		llvm/tools/llvm-pdbutil
SRCS+=		BytesOutputStyle.cpp
SRCS+=		DumpOutputStyle.cpp
SRCS+=		ExplainOutputStyle.cpp
SRCS+=		FormatUtil.cpp
SRCS+=		InputFile.cpp
SRCS+=		LinePrinter.cpp
SRCS+=		MinimalSymbolDumper.cpp
SRCS+=		MinimalTypeDumper.cpp
SRCS+=		PdbYaml.cpp
SRCS+=		PrettyBuiltinDumper.cpp
SRCS+=		PrettyClassDefinitionDumper.cpp
SRCS+=		PrettyClassLayoutGraphicalDumper.cpp
SRCS+=		PrettyCompilandDumper.cpp
SRCS+=		PrettyEnumDumper.cpp
SRCS+=		PrettyExternalSymbolDumper.cpp
SRCS+=		PrettyFunctionDumper.cpp
SRCS+=		PrettyTypeDumper.cpp
SRCS+=		PrettyTypedefDumper.cpp
SRCS+=		PrettyVariableDumper.cpp
SRCS+=		StreamUtil.cpp
SRCS+=		TypeReferenceTracker.cpp
SRCS+=		YAMLOutputStyle.cpp
SRCS+=		llvm-pdbutil.cpp

LIBADD+=	z

.include "../llvm.prog.mk"

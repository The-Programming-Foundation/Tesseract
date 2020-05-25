/* $FreeBSD: stable/12/lib/libelftc/elftc_version.c 358779 2020-03-08 20:40:38Z emaste $ */

#include <sys/types.h>
#include <libelftc.h>

const char *
elftc_version(void)
{
	return "elftoolchain r3769";
}

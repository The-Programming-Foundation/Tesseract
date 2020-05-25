/*-
 * Public domain.
 */

#include <sys/cdefs.h>
__FBSDID("$FreeBSD: stable/12/lib/libc/amd64/string/bcopy.c 339348 2018-10-13 21:17:28Z mjg $");

#include <string.h>

void
bcopy(const void *src, void *dst, size_t len)
{

	memmove(dst, src, len);
}

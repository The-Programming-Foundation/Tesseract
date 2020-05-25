/*-
 * Public domain.
 */

#include <sys/cdefs.h>
__FBSDID("$FreeBSD: stable/12/lib/libc/amd64/string/bzero.c 340684 2018-11-20 17:10:44Z mjg $");

#include <string.h>

void
bzero(void *b, size_t len)
{

	memset(b, 0, len);
}

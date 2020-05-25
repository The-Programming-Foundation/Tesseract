#!/bin/sh
# $FreeBSD: stable/12/tests/sys/geom/class/uzip/1_test.sh 307625 2016-10-19 10:01:04Z br $

testsdir=$(dirname $0)
. $testsdir/conf.sh

# Check host endianness
ret=$(echo I | tr -d "[:space:]" | od -to2 | head -n1 | awk '{print $2}' | cut -c6)
if [ "$ret" = "1" ]; then
	# Little endian
	UUE=$testsdir/1_endian_little.img.uzip.uue
elif [ "$ret" = "0" ]; then
	# Big endian
	UUE=$testsdir/1_endian_big.img.uzip.uue
else
	echo "Couldn't detect host endianness"
	exit 2
fi

echo "1..1"

uudecode $UUE
us0=$(attach_md -f $(basename $UUE .uue)) || exit 1
sleep 1

mount -o ro /dev/${us0}.uzip "${mntpoint}" || exit 1

#cat "${mntpoint}/etalon.txt"
diff -I '\$FreeBSD.*\$' -u $testsdir/etalon/etalon.txt "${mntpoint}/etalon.txt"
if [ $? -eq 0 ]; then
	echo "ok 1"
else
	echo "not ok 1"
fi
#! /usr/local/bin/ksh93 -p

# $FreeBSD: stable/12/tests/sys/cddl/zfs/bin/groupdel.ksh 329867 2018-02-23 16:31:00Z asomers $

a=
g=
for i in $*
do
	a="$a $g"
	g=$i
done
	
/usr/sbin/pw groupdel $a $g
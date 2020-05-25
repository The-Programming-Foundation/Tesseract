#!/usr/local/bin/ksh93 -p
#
# CDDL HEADER START
#
# The contents of this file are subject to the terms of the
# Common Development and Distribution License (the "License").
# You may not use this file except in compliance with the License.
#
# You can obtain a copy of the license at usr/src/OPENSOLARIS.LICENSE
# or http://www.opensolaris.org/os/licensing.
# See the License for the specific language governing permissions
# and limitations under the License.
#
# When distributing Covered Code, include this CDDL HEADER in each
# file and include the License file at usr/src/OPENSOLARIS.LICENSE.
# If applicable, add the following below this CDDL HEADER, with the
# fields enclosed by brackets "[]" replaced with your own identifying
# information: Portions Copyright [yyyy] [name of copyright owner]
#
# CDDL HEADER END
#

# $FreeBSD: stable/12/tests/sys/cddl/zfs/tests/cli_root/zpool_scrub/setup.ksh 329867 2018-02-23 16:31:00Z asomers $

#
# Copyright 2009 Sun Microsystems, Inc.  All rights reserved.
# Use is subject to license terms.
#
# ident	"@(#)setup.ksh	1.4	09/05/19 SMI"
#

. $STF_SUITE/include/libtest.kshlib

verify_runnable "global"

default_mirror_setup_noexit $DISK1 $DISK2

mntpnt=$(get_prop mountpoint $TESTPOOL)
typeset -i i=0
while ((i < 10)); do
	log_must $MKFILE 500M $mntpnt/bigfile.$i
	((i += 1))
done

log_pass
#	From: @(#)Makefile	5.20 (Berkeley) 6/12/93
# $FreeBSD: head/usr.sbin/Makefile 292553 2015-12-21 17:41:08Z ian $

.include <src.opts.mk>

#
# XXX: powerd(8) will be replaced by powerd++(8)
#

SUBDIR= 	ac
SUBDIR+= 	adduser
SUBDIR+= 	chkgrp
SUBDIR+= 	chown
SUBDIR+= 	chroot
SUBDIR+= 	config
SUBDIR+= 	cron
SUBDIR+= 	crunch
SUBDIR+= 	daemon
SUBDIR+= 	devctl
SUBDIR+= 	devinfo
SUBDIR+= 	eeprom
SUBDIR+= 	gpioctl
SUBDIR+= 	i2c
SUBDIR+= 	kbdcontrol
SUBDIR+= 	lastlogin
SUBDIR+= 	lpr
SUBDIR+= 	makefs
SUBDIR+= 	mixer
SUBDIR+= 	mtest
SUBDIR+= 	newsyslog
SUBDIR+= 	nmtree
SUBDIR+= 	nologin
SUBDIR+= 	pciconf
SUBDIR+= 	periodic
SUBDIR+= 	powerd
SUBDIR+= 	pstat
SUBDIR+= 	pw
SUBDIR+= 	pwd_mkdb
SUBDIR+= 	setfmac
SUBDIR+= 	setpmac
SUBDIR+= 	snapinfo
SUBDIR+= 	syslogd
SUBDIR+= 	timed
SUBDIR+= 	tzsetup
SUBDIR+= 	uathload
SUBDIR+= 	ugidfw
SUBDIR+= 	uhsoctl
SUBDIR+= 	usbconfig
SUBDIR+= 	usbdump
SUBDIR+= 	utx
SUBDIR+= 	vidcontrol
SUBDIR+= 	vipw
SUBDIR+= 	watch
SUBDIR+= 	watchdogd
SUBDIR+= 	wlandebug
SUBDIR+= 	wpa
SUBDIR+= 	zic
SUBDIR+= 	zzz

.if ${MK_AMD} != "no"
SUBDIR+= 	amd
SUBDIR+= 	autofs
.endif

.if ${MK_AUDIT} != "no" 
SUBDIR+= 	audit
SUBDIR+= 	auditd
SUBDIR+= 	auditdistd
SUBDIR+= 	auditreduce
.endif

.if ${MK_BLUETOOTH} != "no"
SUBDIR+= 	bluetooth
.endif

.if ${MK_BSNMP} != "no"
SUBDIR+= 	bsnmpd
.endif

.if ${MK_FTP} != "no"
SUBDIR+= 	ftp-proxy
.endif

.if ${MK_INET_SUPPORT} != "no"
SUBDIR+= 	arp
SUBDIR+= 	rarpd
SUBDIR+= 	traceroute
.endif

.if ${MK_INET6_SUPPORT} != "no"
SUBDIR+= 	ip6addrctl
SUBDIR+= 	mld6query
SUBDIR+= 	ndp
SUBDIR+= 	rip6query
SUBDIR+= 	route6d
SUBDIR+= 	traceroute6
.endif

.if ${MK_INET_SUPPORT} != "no" || \
    ${MK_INET6_SUPPORT} != "no"
SUBDIR+= 	dhcpd
SUBDIR+= 	flowctl
SUBDIR+= 	fwcontrol
SUBDIR+= 	httpd
SUBDIR+= 	nscd
SUBDIR+= 	ntp
SUBDIR+= 	phttpget
SUBDIR+= 	ppp
SUBDIR+= 	pppctl
SUBDIR+= 	rpc.lockd
SUBDIR+= 	rpc.statd
SUBDIR+= 	rpc.umntall
SUBDIR+= 	rpc.umntall
SUBDIR+= 	rpcbind
SUBDIR+= 	rrenumd
SUBDIR+= 	rtadvctl
SUBDIR+= 	rtadvd
SUBDIR+= 	rtprio
SUBDIR+= 	rtsold
SUBDIR+= 	setfib
SUBDIR+= 	services_mkdb
SUBDIR+= 	tcpdrop
.endif

.if ${MK_INETD} != "no" 
SUBDIR+= 	inetd
.endif

.if ${MK_NIS} != "no"
SUBDIR+= 	rpc.yppasswdd
SUBDIR+= 	rpc.ypupdated
SUBDIR+= 	rpc.ypxfrd
SUBDIR+= 	yp_mkdb
SUBDIR+= 	ypbind
SUBDIR+= 	ypldap
SUBDIR+= 	yppoll
SUBDIR+= 	yppush
SUBDIR+= 	ypserv
SUBDIR+= 	ypset
.endif

.if ${MK_OPENSSH} != "no"
SUBDIR+=sshd
.endif

#
# XXX: stalled op. until asr is subset of libc(3).
#
#.if ${MK_MAIL} != "no"
#SUBDIR+= 	smtpd
#.endif
#

.if ${MK_NAND} != "no"
SUBDIR+= 	nandsim
SUBDIR+= 	nandtool
.endif

.if ${MK_NETGRAPH} != "no"
SUBDIR+= 	ngctl
SUBDIR+= 	nghook
.endif

.if ${MK_PF} != "no"
SUBDIR+= 	authpf
.endif

.include <bsd.arch.inc.mk>

SUBDIR:=	${SUBDIR:O}

SUBDIR_PARALLEL=

.include <bsd.subdir.mk>

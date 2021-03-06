# $FreeBSD: head/lib/libpam/modules/modules.inc 278182 2015-02-04 06:53:45Z ngie $

.include <src.opts.mk>

MODULES= 	pam_chroot
MODULES+= 	pam_deny
MODULES+= 	pam_echo
MODULES+= 	pam_exec
.if ${MK_FTP} != "no"
MODULES+= 	pam_ftpusers
.endif
MODULES+= 	pam_group
MODULES+= 	pam_guest
.if ${MK_KERBEROS} != "no"
MODULES+= 	pam_krb5
MODULES+= 	pam_ksu
.endif
MODULES+= 	pam_lastlog
MODULES+= 	pam_login_access
MODULES+= 	pam_nologin
MODULES+= 	pam_opie
MODULES+= 	pam_opieaccess
MODULES+= 	pam_passwdqc
MODULES+= 	pam_permit
.if ${MK_RADIUS_SUPPORT} != "no"
MODULES+= 	pam_radius
.endif
.if ${MK_RCMDS} != "no"
MODULES+= 	pam_rhosts
.endif
MODULES+= 	pam_rootok
MODULES+= 	pam_securetty
MODULES+= 	pam_self
.if ${MK_OPENSSH} != "no"
MODULES+= 	pam_ssh
.endif
MODULES+= 	pam_tacplus
MODULES+= 	pam_unix

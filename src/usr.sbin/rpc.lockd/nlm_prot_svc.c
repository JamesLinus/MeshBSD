/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#include "nlm_prot.h"
#include <stdio.h>
#include <stdlib.h> /* getenv, exit */
#include <rpc/pmap_clnt.h> /* for pmap_unset */
#include <string.h> /* strcmp */
#include <rpc/rpc_com.h>
#include <fcntl.h> /* open */
#include <unistd.h> /* fork / setsid */
#include <sys/types.h>
#include <string.h>
#include <sys/resource.h> /* rlimit */
#include <syslog.h>

#ifdef DEBUG
#define	RPC_SVC_FG
#endif
#include <sys/cdefs.h>
#ifndef lint
/*static char sccsid[] = "from: @(#)nlm_prot.x 1.8 87/09/21 Copyr 1987 Sun Micro";*/
/*static char sccsid[] = "from: * @(#)nlm_prot.x	2.1 88/08/01 4.0 RPCSRC";*/
__RCSID("$NetBSD: nlm_prot.x,v 1.6 2000/06/07 14:30:15 bouyer Exp $");
#endif /* not lint */
__FBSDID("$FreeBSD: releng/10.3/include/rpcsvc/nlm_prot.x 114629 2003-05-04 02:51:42Z obrien $");

void
nlm_prog_0(struct svc_req *rqstp, SVCXPRT *transp)
{
	union {
		struct nlm_sm_status nlm_sm_notify_0_arg;
	} argument;
	char *result;
	xdrproc_t xdr_argument, xdr_result;
	char *(*local)(char *, struct svc_req *);

	switch (rqstp->rq_proc) {
	case NULLPROC:
		(void) svc_sendreply(transp,
			(xdrproc_t) xdr_void, (char *)NULL);
		return;

	case NLM_SM_NOTIFY:
		xdr_argument = (xdrproc_t) xdr_nlm_sm_status;
		xdr_result = (xdrproc_t) xdr_void;
		local = (char *(*)(char *, struct svc_req *)) nlm_sm_notify_0_svc;
		break;

	default:
		svcerr_noproc(transp);
		return;
	}
	(void) memset((char *)&argument, 0, sizeof (argument));
	if (!svc_getargs(transp, xdr_argument, (char *)(caddr_t) &argument)) {
		svcerr_decode(transp);
		return;
	}
	result = (*local)((char *)&argument, rqstp);
	if (result != NULL && !svc_sendreply(transp, xdr_result, result)) {
		svcerr_systemerr(transp);
	}
	if (!svc_freeargs(transp, xdr_argument, (char *)(caddr_t) &argument)) {
		syslog(LOG_ERR, "unable to free arguments");
		exit(1);
	}
	return;
}

void
nlm_prog_1(struct svc_req *rqstp, SVCXPRT *transp)
{
	union {
		struct nlm_testargs nlm_test_1_arg;
		struct nlm_lockargs nlm_lock_1_arg;
		struct nlm_cancargs nlm_cancel_1_arg;
		struct nlm_unlockargs nlm_unlock_1_arg;
		struct nlm_testargs nlm_granted_1_arg;
		struct nlm_testargs nlm_test_msg_1_arg;
		struct nlm_lockargs nlm_lock_msg_1_arg;
		struct nlm_cancargs nlm_cancel_msg_1_arg;
		struct nlm_unlockargs nlm_unlock_msg_1_arg;
		struct nlm_testargs nlm_granted_msg_1_arg;
		nlm_testres nlm_test_res_1_arg;
		nlm_res nlm_lock_res_1_arg;
		nlm_res nlm_cancel_res_1_arg;
		nlm_res nlm_unlock_res_1_arg;
		nlm_res nlm_granted_res_1_arg;
	} argument;
	char *result;
	xdrproc_t xdr_argument, xdr_result;
	char *(*local)(char *, struct svc_req *);

	switch (rqstp->rq_proc) {
	case NULLPROC:
		(void) svc_sendreply(transp,
			(xdrproc_t) xdr_void, (char *)NULL);
		return;

	case NLM_TEST:
		xdr_argument = (xdrproc_t) xdr_nlm_testargs;
		xdr_result = (xdrproc_t) xdr_nlm_testres;
		local = (char *(*)(char *, struct svc_req *)) nlm_test_1_svc;
		break;

	case NLM_LOCK:
		xdr_argument = (xdrproc_t) xdr_nlm_lockargs;
		xdr_result = (xdrproc_t) xdr_nlm_res;
		local = (char *(*)(char *, struct svc_req *)) nlm_lock_1_svc;
		break;

	case NLM_CANCEL:
		xdr_argument = (xdrproc_t) xdr_nlm_cancargs;
		xdr_result = (xdrproc_t) xdr_nlm_res;
		local = (char *(*)(char *, struct svc_req *)) nlm_cancel_1_svc;
		break;

	case NLM_UNLOCK:
		xdr_argument = (xdrproc_t) xdr_nlm_unlockargs;
		xdr_result = (xdrproc_t) xdr_nlm_res;
		local = (char *(*)(char *, struct svc_req *)) nlm_unlock_1_svc;
		break;

	case NLM_GRANTED:
		xdr_argument = (xdrproc_t) xdr_nlm_testargs;
		xdr_result = (xdrproc_t) xdr_nlm_res;
		local = (char *(*)(char *, struct svc_req *)) nlm_granted_1_svc;
		break;

	case NLM_TEST_MSG:
		xdr_argument = (xdrproc_t) xdr_nlm_testargs;
		xdr_result = (xdrproc_t) xdr_void;
		local = (char *(*)(char *, struct svc_req *)) nlm_test_msg_1_svc;
		break;

	case NLM_LOCK_MSG:
		xdr_argument = (xdrproc_t) xdr_nlm_lockargs;
		xdr_result = (xdrproc_t) xdr_void;
		local = (char *(*)(char *, struct svc_req *)) nlm_lock_msg_1_svc;
		break;

	case NLM_CANCEL_MSG:
		xdr_argument = (xdrproc_t) xdr_nlm_cancargs;
		xdr_result = (xdrproc_t) xdr_void;
		local = (char *(*)(char *, struct svc_req *)) nlm_cancel_msg_1_svc;
		break;

	case NLM_UNLOCK_MSG:
		xdr_argument = (xdrproc_t) xdr_nlm_unlockargs;
		xdr_result = (xdrproc_t) xdr_void;
		local = (char *(*)(char *, struct svc_req *)) nlm_unlock_msg_1_svc;
		break;

	case NLM_GRANTED_MSG:
		xdr_argument = (xdrproc_t) xdr_nlm_testargs;
		xdr_result = (xdrproc_t) xdr_void;
		local = (char *(*)(char *, struct svc_req *)) nlm_granted_msg_1_svc;
		break;

	case NLM_TEST_RES:
		xdr_argument = (xdrproc_t) xdr_nlm_testres;
		xdr_result = (xdrproc_t) xdr_void;
		local = (char *(*)(char *, struct svc_req *)) nlm_test_res_1_svc;
		break;

	case NLM_LOCK_RES:
		xdr_argument = (xdrproc_t) xdr_nlm_res;
		xdr_result = (xdrproc_t) xdr_void;
		local = (char *(*)(char *, struct svc_req *)) nlm_lock_res_1_svc;
		break;

	case NLM_CANCEL_RES:
		xdr_argument = (xdrproc_t) xdr_nlm_res;
		xdr_result = (xdrproc_t) xdr_void;
		local = (char *(*)(char *, struct svc_req *)) nlm_cancel_res_1_svc;
		break;

	case NLM_UNLOCK_RES:
		xdr_argument = (xdrproc_t) xdr_nlm_res;
		xdr_result = (xdrproc_t) xdr_void;
		local = (char *(*)(char *, struct svc_req *)) nlm_unlock_res_1_svc;
		break;

	case NLM_GRANTED_RES:
		xdr_argument = (xdrproc_t) xdr_nlm_res;
		xdr_result = (xdrproc_t) xdr_void;
		local = (char *(*)(char *, struct svc_req *)) nlm_granted_res_1_svc;
		break;

	default:
		svcerr_noproc(transp);
		return;
	}
	(void) memset((char *)&argument, 0, sizeof (argument));
	if (!svc_getargs(transp, xdr_argument, (char *)(caddr_t) &argument)) {
		svcerr_decode(transp);
		return;
	}
	result = (*local)((char *)&argument, rqstp);
	if (result != NULL && !svc_sendreply(transp, xdr_result, result)) {
		svcerr_systemerr(transp);
	}
	if (!svc_freeargs(transp, xdr_argument, (char *)(caddr_t) &argument)) {
		syslog(LOG_ERR, "unable to free arguments");
		exit(1);
	}
	return;
}

void
nlm_prog_3(struct svc_req *rqstp, SVCXPRT *transp)
{
	union {
		nlm_shareargs nlm_share_3_arg;
		nlm_shareargs nlm_unshare_3_arg;
		nlm_lockargs nlm_nm_lock_3_arg;
		nlm_notify nlm_free_all_3_arg;
	} argument;
	char *result;
	xdrproc_t xdr_argument, xdr_result;
	char *(*local)(char *, struct svc_req *);

	switch (rqstp->rq_proc) {
	case NULLPROC:
		(void) svc_sendreply(transp,
			(xdrproc_t) xdr_void, (char *)NULL);
		return;

	case NLM_SHARE:
		xdr_argument = (xdrproc_t) xdr_nlm_shareargs;
		xdr_result = (xdrproc_t) xdr_nlm_shareres;
		local = (char *(*)(char *, struct svc_req *)) nlm_share_3_svc;
		break;

	case NLM_UNSHARE:
		xdr_argument = (xdrproc_t) xdr_nlm_shareargs;
		xdr_result = (xdrproc_t) xdr_nlm_shareres;
		local = (char *(*)(char *, struct svc_req *)) nlm_unshare_3_svc;
		break;

	case NLM_NM_LOCK:
		xdr_argument = (xdrproc_t) xdr_nlm_lockargs;
		xdr_result = (xdrproc_t) xdr_nlm_res;
		local = (char *(*)(char *, struct svc_req *)) nlm_nm_lock_3_svc;
		break;

	case NLM_FREE_ALL:
		xdr_argument = (xdrproc_t) xdr_nlm_notify;
		xdr_result = (xdrproc_t) xdr_void;
		local = (char *(*)(char *, struct svc_req *)) nlm_free_all_3_svc;
		break;

	default:
		svcerr_noproc(transp);
		return;
	}
	(void) memset((char *)&argument, 0, sizeof (argument));
	if (!svc_getargs(transp, xdr_argument, (char *)(caddr_t) &argument)) {
		svcerr_decode(transp);
		return;
	}
	result = (*local)((char *)&argument, rqstp);
	if (result != NULL && !svc_sendreply(transp, xdr_result, result)) {
		svcerr_systemerr(transp);
	}
	if (!svc_freeargs(transp, xdr_argument, (char *)(caddr_t) &argument)) {
		syslog(LOG_ERR, "unable to free arguments");
		exit(1);
	}
	return;
}

void
nlm_prog_4(struct svc_req *rqstp, SVCXPRT *transp)
{
	union {
		nlm4_testargs nlm4_test_4_arg;
		nlm4_lockargs nlm4_lock_4_arg;
		nlm4_cancargs nlm4_cancel_4_arg;
		nlm4_unlockargs nlm4_unlock_4_arg;
		nlm4_testargs nlm4_granted_4_arg;
		nlm4_testargs nlm4_test_msg_4_arg;
		nlm4_lockargs nlm4_lock_msg_4_arg;
		nlm4_cancargs nlm4_cancel_msg_4_arg;
		nlm4_unlockargs nlm4_unlock_msg_4_arg;
		nlm4_testargs nlm4_granted_msg_4_arg;
		nlm4_testres nlm4_test_res_4_arg;
		nlm4_res nlm4_lock_res_4_arg;
		nlm4_res nlm4_cancel_res_4_arg;
		nlm4_res nlm4_unlock_res_4_arg;
		nlm4_res nlm4_granted_res_4_arg;
		nlm4_shareargs nlm4_share_4_arg;
		nlm4_shareargs nlm4_unshare_4_arg;
		nlm4_lockargs nlm4_nm_lock_4_arg;
		nlm4_notify nlm4_free_all_4_arg;
	} argument;
	char *result;
	xdrproc_t xdr_argument, xdr_result;
	char *(*local)(char *, struct svc_req *);

	switch (rqstp->rq_proc) {
	case NULLPROC:
		(void) svc_sendreply(transp,
			(xdrproc_t) xdr_void, (char *)NULL);
		return;

	case NLM4_TEST:
		xdr_argument = (xdrproc_t) xdr_nlm4_testargs;
		xdr_result = (xdrproc_t) xdr_nlm4_testres;
		local = (char *(*)(char *, struct svc_req *)) nlm4_test_4_svc;
		break;

	case NLM4_LOCK:
		xdr_argument = (xdrproc_t) xdr_nlm4_lockargs;
		xdr_result = (xdrproc_t) xdr_nlm4_res;
		local = (char *(*)(char *, struct svc_req *)) nlm4_lock_4_svc;
		break;

	case NLM4_CANCEL:
		xdr_argument = (xdrproc_t) xdr_nlm4_cancargs;
		xdr_result = (xdrproc_t) xdr_nlm4_res;
		local = (char *(*)(char *, struct svc_req *)) nlm4_cancel_4_svc;
		break;

	case NLM4_UNLOCK:
		xdr_argument = (xdrproc_t) xdr_nlm4_unlockargs;
		xdr_result = (xdrproc_t) xdr_nlm4_res;
		local = (char *(*)(char *, struct svc_req *)) nlm4_unlock_4_svc;
		break;

	case NLM4_GRANTED:
		xdr_argument = (xdrproc_t) xdr_nlm4_testargs;
		xdr_result = (xdrproc_t) xdr_nlm4_res;
		local = (char *(*)(char *, struct svc_req *)) nlm4_granted_4_svc;
		break;

	case NLM4_TEST_MSG:
		xdr_argument = (xdrproc_t) xdr_nlm4_testargs;
		xdr_result = (xdrproc_t) xdr_void;
		local = (char *(*)(char *, struct svc_req *)) nlm4_test_msg_4_svc;
		break;

	case NLM4_LOCK_MSG:
		xdr_argument = (xdrproc_t) xdr_nlm4_lockargs;
		xdr_result = (xdrproc_t) xdr_void;
		local = (char *(*)(char *, struct svc_req *)) nlm4_lock_msg_4_svc;
		break;

	case NLM4_CANCEL_MSG:
		xdr_argument = (xdrproc_t) xdr_nlm4_cancargs;
		xdr_result = (xdrproc_t) xdr_void;
		local = (char *(*)(char *, struct svc_req *)) nlm4_cancel_msg_4_svc;
		break;

	case NLM4_UNLOCK_MSG:
		xdr_argument = (xdrproc_t) xdr_nlm4_unlockargs;
		xdr_result = (xdrproc_t) xdr_void;
		local = (char *(*)(char *, struct svc_req *)) nlm4_unlock_msg_4_svc;
		break;

	case NLM4_GRANTED_MSG:
		xdr_argument = (xdrproc_t) xdr_nlm4_testargs;
		xdr_result = (xdrproc_t) xdr_void;
		local = (char *(*)(char *, struct svc_req *)) nlm4_granted_msg_4_svc;
		break;

	case NLM4_TEST_RES:
		xdr_argument = (xdrproc_t) xdr_nlm4_testres;
		xdr_result = (xdrproc_t) xdr_void;
		local = (char *(*)(char *, struct svc_req *)) nlm4_test_res_4_svc;
		break;

	case NLM4_LOCK_RES:
		xdr_argument = (xdrproc_t) xdr_nlm4_res;
		xdr_result = (xdrproc_t) xdr_void;
		local = (char *(*)(char *, struct svc_req *)) nlm4_lock_res_4_svc;
		break;

	case NLM4_CANCEL_RES:
		xdr_argument = (xdrproc_t) xdr_nlm4_res;
		xdr_result = (xdrproc_t) xdr_void;
		local = (char *(*)(char *, struct svc_req *)) nlm4_cancel_res_4_svc;
		break;

	case NLM4_UNLOCK_RES:
		xdr_argument = (xdrproc_t) xdr_nlm4_res;
		xdr_result = (xdrproc_t) xdr_void;
		local = (char *(*)(char *, struct svc_req *)) nlm4_unlock_res_4_svc;
		break;

	case NLM4_GRANTED_RES:
		xdr_argument = (xdrproc_t) xdr_nlm4_res;
		xdr_result = (xdrproc_t) xdr_void;
		local = (char *(*)(char *, struct svc_req *)) nlm4_granted_res_4_svc;
		break;

	case NLM4_SHARE:
		xdr_argument = (xdrproc_t) xdr_nlm4_shareargs;
		xdr_result = (xdrproc_t) xdr_nlm4_shareres;
		local = (char *(*)(char *, struct svc_req *)) nlm4_share_4_svc;
		break;

	case NLM4_UNSHARE:
		xdr_argument = (xdrproc_t) xdr_nlm4_shareargs;
		xdr_result = (xdrproc_t) xdr_nlm4_shareres;
		local = (char *(*)(char *, struct svc_req *)) nlm4_unshare_4_svc;
		break;

	case NLM4_NM_LOCK:
		xdr_argument = (xdrproc_t) xdr_nlm4_lockargs;
		xdr_result = (xdrproc_t) xdr_nlm4_res;
		local = (char *(*)(char *, struct svc_req *)) nlm4_nm_lock_4_svc;
		break;

	case NLM4_FREE_ALL:
		xdr_argument = (xdrproc_t) xdr_nlm4_notify;
		xdr_result = (xdrproc_t) xdr_void;
		local = (char *(*)(char *, struct svc_req *)) nlm4_free_all_4_svc;
		break;

	default:
		svcerr_noproc(transp);
		return;
	}
	(void) memset((char *)&argument, 0, sizeof (argument));
	if (!svc_getargs(transp, xdr_argument, (char *)(caddr_t) &argument)) {
		svcerr_decode(transp);
		return;
	}
	result = (*local)((char *)&argument, rqstp);
	if (result != NULL && !svc_sendreply(transp, xdr_result, result)) {
		svcerr_systemerr(transp);
	}
	if (!svc_freeargs(transp, xdr_argument, (char *)(caddr_t) &argument)) {
		syslog(LOG_ERR, "unable to free arguments");
		exit(1);
	}
	return;
}

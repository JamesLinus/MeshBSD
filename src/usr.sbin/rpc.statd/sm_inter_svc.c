/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#include "sm_inter.h"
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
__FBSDID("$FreeBSD: releng/10.3/include/rpcsvc/sm_inter.x 272850 2014-10-09 23:05:32Z hrs $");

void
sm_prog_1(struct svc_req *rqstp, SVCXPRT *transp)
{
	union {
		struct sm_name sm_stat_1_arg;
		struct mon sm_mon_1_arg;
		struct mon_id sm_unmon_1_arg;
		struct my_id sm_unmon_all_1_arg;
		struct stat_chge sm_notify_1_arg;
	} argument;
	char *result;
	xdrproc_t xdr_argument, xdr_result;
	char *(*local)(char *, struct svc_req *);

	switch (rqstp->rq_proc) {
	case NULLPROC:
		(void) svc_sendreply(transp,
			(xdrproc_t) xdr_void, (char *)NULL);
		return;

	case SM_STAT:
		xdr_argument = (xdrproc_t) xdr_sm_name;
		xdr_result = (xdrproc_t) xdr_sm_stat_res;
		local = (char *(*)(char *, struct svc_req *)) sm_stat_1_svc;
		break;

	case SM_MON:
		xdr_argument = (xdrproc_t) xdr_mon;
		xdr_result = (xdrproc_t) xdr_sm_stat_res;
		local = (char *(*)(char *, struct svc_req *)) sm_mon_1_svc;
		break;

	case SM_UNMON:
		xdr_argument = (xdrproc_t) xdr_mon_id;
		xdr_result = (xdrproc_t) xdr_sm_stat;
		local = (char *(*)(char *, struct svc_req *)) sm_unmon_1_svc;
		break;

	case SM_UNMON_ALL:
		xdr_argument = (xdrproc_t) xdr_my_id;
		xdr_result = (xdrproc_t) xdr_sm_stat;
		local = (char *(*)(char *, struct svc_req *)) sm_unmon_all_1_svc;
		break;

	case SM_SIMU_CRASH:
		xdr_argument = (xdrproc_t) xdr_void;
		xdr_result = (xdrproc_t) xdr_void;
		local = (char *(*)(char *, struct svc_req *)) sm_simu_crash_1_svc;
		break;

	case SM_NOTIFY:
		xdr_argument = (xdrproc_t) xdr_stat_chge;
		xdr_result = (xdrproc_t) xdr_void;
		local = (char *(*)(char *, struct svc_req *)) sm_notify_1_svc;
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

#include	"unpipc.h"

int
main(int argc, char **argv)
{
	int		i, msqid;
	struct msqid_ds	info;

	for (i = 0; i < 10; i++) {
		msqid = Msgget(IPC_PRIVATE, SVMSG_MODE | IPC_CREAT);
		Msgctl(msqid, IPC_STAT, &info);
		printf("msqid = %d, seq = %u\n", msqid, info.msg_perm.__seq);

		Msgctl(msqid, IPC_RMID, NULL);
	}
	exit(0);
}

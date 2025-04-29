#include<stdio.h>
#include<sys/msg.h>
int main()
{
	int id;
	id=msgget(5,IPC_CREAT|0644);
	if(id<0)
	{
		perror("MSGGET");
		return 0;
	}
	printf("Message queue created Successfully.\n");
	return 0;
}

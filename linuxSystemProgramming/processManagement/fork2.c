#include<stdio.h>
#include<unistd.h>
int main()
{
	printf("In main...\n");
	fork();
	fork();
	fork();
	printf("PID:%d\tPPID:%d\n",getpid(),getppid());
	while(1);
}

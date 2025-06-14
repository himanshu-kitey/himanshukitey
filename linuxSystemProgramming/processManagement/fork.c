#include<stdio.h>
#include<unistd.h>
int main()
{
	printf("Hello Himanshu.....\n");
	fork();		//Create Child Process.
	printf("PID:%d\tPPID:%d\n",getpid(),getppid());
	while(1);
}

#include<unistd.h>
#include<stdio.h>
int main()
{
	printf("PID:%d\tPPID:%d\n",getpid(),getppid());
	while(1);
}



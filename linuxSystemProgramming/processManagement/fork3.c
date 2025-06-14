#include<stdio.h>
#include<unistd.h>
static int a=10;
int main()
{
	int b=20;
	int ret;
	printf("In main....\n");
	ret=fork();
	if(ret==0)
	{
		//Execute CHILD Code.
		printf("In child\nPID:%d\tPPID:%d\n",getpid(),getppid());
		printf("a:%d\tb:%d\n",a,b);
		a=a*2;
		b=2*b;
		printf("a:%d\tb:%d\n",a,b);
	}
	else
	{
		//Executing Parent Process.
		printf("In Parent\nPID:%d\tPPID:%d\n",getpid(),getppid());
		printf("a:%d\tb:%d\n",a,b);
		a=3*a;
		b=3*b;
		printf("a:%d\tb:%d\n",a,b);
	}
	sleep(1);
}


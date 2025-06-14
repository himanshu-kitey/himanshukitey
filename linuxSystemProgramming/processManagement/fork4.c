#include<stdio.h>
#include<unistd.h>
int main()
{
	printf("In main.");
	if(fork())
	{
		printf("Parent.");
	}
	else
	{
		printf("Child.");
	}
	printf("Both.");
	return 0;
}

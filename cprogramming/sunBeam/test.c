#include<stdio.h>
int function(int n);
int num;
int main()
{
	printf("%d %d\n",num,function(20));
	return 0;
}

int function(int n)
{
	int num=10;
	return num;
}

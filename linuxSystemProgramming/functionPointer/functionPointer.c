#include<stdio.h>
int sum(int,int);
int mul(int,int);
int sub(int,int);
int dive(int,int);
int main(void)
{
	int i=10,j=20,k;
	int (*ptr)(int,int);
	ptr=sum;	//We are storing sum function address to ptr.
	
	k=(*ptr)(i,j);
	printf("k=%d\n",k);

	k=sum(i,j);
	printf("k=%d\n",k);
	return 0;

}


int sum(int a,int b)
{
	return a+b;
}

int mul(int a,int b)
{
	return a*b;
}

int sub(int a,int b)
{
	return a-b;
}

int dive(int a,int b)
{
	return a*b;
}



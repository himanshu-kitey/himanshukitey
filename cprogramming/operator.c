/*
#include<stdio.h>
int main()
{
	int a=1,b=2,c=3;
	printf("a:%d\tb:%d\tc:%d\t",a,b,c);
	a=b=5=c=50;
	printf("a:%d\tb:%d\tc:%d\t",a,b,c);
	return 0;
}

*/
/*
#include<stdio.h>
int main()
{
	int a=10,b=20,c=30;
	printf("a:%d\tb=%d\tc:%d\n",a,b,c);
	return 0;
}
*/
/*
#include<stdio.h>
int main()
{
	int a=10,b=20,c=30;
	printf("a:%d\tb:%d\tc:%d\n",a,b,c);
	return 0;
}
*/

#include<stdio.h>
int main()
{
	int a=10,b=20,c=30;
	printf("a:%d\tb:%d\tc:%d\n",a,b,c);
	b=a*b/(a=b);
	printf("a:%d\tb:%d\tc:%d\n",a,b,c);
	return 0;
}

#include<stdio.h>
union u
{
	float f;
	int i;
};

int main()
{
	union u var;
	int bin;
	printf("Enter the float value:");
	scanf("%f",&var.f);
	printf("Binary :");
	for(bin=31;bin>=0;bin--)
		printf("%d",(var.i>>bin)&1);
	printf("\n");
	return 0;
}

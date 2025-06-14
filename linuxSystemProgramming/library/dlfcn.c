#include<stdio.h>
#include<dlfcn.h>
int main()
{
	int r,op,a,b;
	void *handler;
	int (*ptr)(int,int);

	printf("Enter two Numbers:");
	scanf("%d %d",&a,&b);

	printf("Enter Your Option\n1:SUM.\n2:MUL.\n");
	scanf("%d",&op);

	handler=dlopen("./libxyz.so",RTLD_LAZY);

	if(handler==0)
	{
		printf("%s\n",dlerror());
		return 0;
	}

	switch(op)
	{
		case 1:
			ptr=dlsym(handler,"sum");
			if(ptr==0)
			{
				printf("%s\n",dlerror());
				return 0;
			}
			r=(*ptr)(a,b);
			printf("r=%d\n",r);
			break;
		case 2:
			ptr=dlsym(handler,"mul");
			if(ptr==0)
			{
				printf("%s\n",dlerror());
				return 0;
			}
			r=(*ptr)(a,b);
			printf("r:%d\n",r);
			break;
		default:
			printf("Wrong Choice.\n");
	}
	dlclose(handler);
}

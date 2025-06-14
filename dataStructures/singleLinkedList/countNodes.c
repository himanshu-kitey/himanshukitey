#include "headers.h"

void countNodes(struct student *start)
{
	struct student *ptr;
	int count=0;
	ptr=start;
	while(ptr!=NULL)
	{
		ptr=ptr->link;
		count++;
	}
	printf("Node Count is:%d\n",count);
}


#include "headers.h"

void displayData(struct student *start)
{
	struct student *ptr;
	if(start==NULL)
	{
		printf("List is Empty.\n");
		return;
	}
	ptr=start;
	printf("List is:\n");
	while(ptr!=NULL)
	{
		printf("Roll:%d\t",ptr->roll);
		printf("Name:%s\t",ptr->name);
		printf("Marks:%f\n",ptr->marks);
		ptr=ptr->link;
	}
}

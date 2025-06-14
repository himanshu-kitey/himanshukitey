#include "headers.h"

struct student *createList(struct student *start)
{
	struct student *temp;
	temp=(struct student *)malloc(sizeof(struct student));
	start=NULL;
	if(temp==NULL)
	{
		printf("Insufficient Memory.\n");
		return 0;
	}
	printf("Enter Roll:");
	scanf("%d",&temp->roll);
	printf("Enter Name:");
	scanf("%s",temp->name);
	printf("Enter Marks:");
	scanf("%f",&temp->marks);
	temp->link=start;
	start=temp;
	return start;
}

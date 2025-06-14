#include "headers.h"

struct student *addToEmptyList(void)
{
	struct student *temp;
	temp=(struct student *)malloc(sizeof(struct student));
	printf("Enter the Roll:");
	scanf("%d",&temp->roll);
	printf("Enter the Name:");
	scanf("%s",temp->name);
	printf("Enter Marks:");
	scanf("%f",&temp->marks);
	temp->link=NULL;
	return temp;

}


#include "headers.h"

struct student *addatBeg(struct student *start)
{
	struct student *ptr=(struct student *)malloc(sizeof(struct student));
	if(ptr==NULL)
	{
		printf("Memory Allocation Failed.\n");
		return 0;
	}

	printf("Enter the Roll No:");
	scanf("%d",&ptr->roll);

	printf("Enter Name:");
	scanf("%s",ptr->name);

	printf("Enter Marks:");
	scanf("%f",&ptr->marks);

	ptr->link=start;
	start=ptr;

	printf("Node Added Successfully.\n");
	return start;
}


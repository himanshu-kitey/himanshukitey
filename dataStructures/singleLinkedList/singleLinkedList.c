#include "headers.h"
int main()
{
	struct student *start=NULL;
	int choice;
	while(1)
	{
		printMenu();
		printf("Enter Your Choice:");
		scanf("%d",&choice);

		switch(choice)
		{
			case 0:
				start=addToEmptyList();
				break;
			case 1:
				start=addatBeg(start);
				break;
			case 2:
				displayData(start);
				break;
			case 3:
				start=createList(start);
				break;
			case 4:
				countNodes(start);
				break;
			case 5:
				exit(0);

			default:
				printf("Wrong Choice.\n");
		}
	}
	return 0;
}

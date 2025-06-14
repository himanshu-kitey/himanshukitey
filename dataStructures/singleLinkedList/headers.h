#ifndef __SINGLE_LINKED_LIST__
#define __SINGLE_LINKED_LIST__

#include<stdio.h>
#include<stdlib.h>

struct student
{
	int roll;
	char name[10];
	float marks;
	struct student *link;
};

struct student *addToEmptyList(void);
void printMenu(void);
void displayData(struct student *start);
struct student *addatBeg(struct student *start);
struct student *createList(struct student *start);
void countNodes(struct student *start);


#endif

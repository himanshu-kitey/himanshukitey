#include<stdio.h>
#include<pthread.h>

void *thread1(void *ptr);
void *thread2(void *ptr);

int main(void)
{
	pthread_t t1,t2;
	printf("In main....\n");
	pthread_create(&t1,NULL,thread1,"Hello thread1");
	pthread_create(&t1,NULL,thread2,"Hello thread2");
	printf("thread_id:%lu\n",t1);
	printf("thread_id:%lu\n",t2);
	while(1);
	return 0;
}


void *thread1(void *ptr)
{
	printf("In thread-1\n");
	printf("%s\n",(char *)ptr);
	while(1);
}

void *thread2(void *ptr)
{
	printf("In thread-2\n");
	printf("%s\n",(char *)ptr);
	while(1);
}

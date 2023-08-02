//Write a program which is used to create simple by using pthread library.

// Output : Thread is created with ID : -1142950336
//End of main thread

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<pthread.h>

void * ThreadProc(void *ptr)
{
	printf("Inside thread.\n");
}

int main()
{
	pthread_t TID;
	int ret = 0;
	
	ret = pthread_create(&TID,
				NULL,
				ThreadProc,
				NULL);
				
	if(ret != 0)
	{
		printf("Unable to create thread.\n");
		return -1;
	}
	
	printf("Thread is created with ID : %d\n",TID);
	
	printf("End of main thread\n");

	return 0;
}

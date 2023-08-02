//write a program which creates single thread and we have to pass parameter to that thread from main thread.

/*Thread is created with ID : 599782976
Value received from main thread is : 11
End of main thread.*/

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<pthread.h>

void * ThreadProc(void * ptr)
{
	printf("Value received from main thread is : %d\n",(int)ptr);
}

int main()
{
	pthread_t TID;
	int ret = 0;
	int no = 11;
	
	ret = pthread_create(&TID,
				NULL,
				ThreadProc,
				(int *)no);
				
	if(ret != 0)
	{
		printf("Unable to create thread.\n");
		return -1;
	}
	
	printf("Thread is created with ID : %d\n",TID);
	pthread_join(TID,NULL);
	printf("End of main thread.\n");

	return 0;
}

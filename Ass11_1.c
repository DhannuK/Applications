//write a program which create 4 number of threads and our main thread waits till all the thread terminates.

/* OUTPUT : 
Thread 1 is created with ID : -339741120
____________________________________________
Thread 2 is created with ID : -348133824
____________________________________________
Thread 3 is created with ID : -356526528
____________________________________________
Thread 4 is created with ID : -364919232
____________________________________________
Inside Thread 3.
Inside Thread 4.
Inside Thread 1.
Inside Thread 2.
End of main thread.
*/

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<pthread.h>

void * ThreadProc1(void *ptr)
{
	printf("Inside Thread 1.\n");
	pthread_exit(NULL);
}

void * ThreadProc2(void *ptr)
{
	printf("Inside Thread 2.\n");
	pthread_exit(NULL);
}

void * ThreadProc3(void *ptr)
{
	printf("Inside Thread 3.\n");
	pthread_exit(NULL);
}

void * ThreadProc4(void *ptr)
{
	printf("Inside Thread 4.\n");
	pthread_exit(NULL);
}

int main()
{
	pthread_t TID1, TID2, TID3, TID4;
	int ret1 = 0, ret2 = 0, ret3 = 0, ret4 = 0;
	
	ret1 = pthread_create(&TID1,
				NULL,
				ThreadProc1,
				NULL);
	if(ret1 != 0)
	{
		printf("Unable to create thread.\n");
		return -1;
	}
	printf("Thread 1 is created with ID : %d\n",TID1);
	
	printf("____________________________________________\n");
	
	ret2 = pthread_create(&TID2,
				NULL,
				ThreadProc2,
				NULL);
	if(ret2 != 0)
	{
		printf("Unable to create thread.\n");
		return -1;
	}
	printf("Thread 2 is created with ID : %d\n",TID2);
	
	printf("____________________________________________\n");
	
	ret3 = pthread_create(&TID3,
				NULL,
				ThreadProc3,
				NULL);
	if(ret3 != 0)
	{
		printf("Unable to create thread.\n");
		return -1;
	}
	printf("Thread 3 is created with ID : %d\n",TID3);
	
	printf("____________________________________________\n");
	
	ret4 = pthread_create(&TID4,
				NULL,
				ThreadProc4,
				NULL);
	if(ret4 != 0)
	{
		printf("Unable to create thread.\n");
		return -1;
	}
	printf("Thread 4 is created with ID : %d\n",TID4);
	
	printf("____________________________________________\n");
	
	pthread_join(TID1, NULL);
	pthread_join(TID2, NULL);
	pthread_join(TID3, NULL);
	pthread_join(TID3, NULL);
	
	printf("End of main thread.\n");
	
	pthread_exit(NULL);
	return 0;
}

//Write a program which is used to get thread id inside thread function.
	////////////	  OPTION 2	///////////////////
	
/* OUTPUT :
Thread is created with id : -947915200
I'm thread 3677
*/

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<pthread.h>

void * ThreadProc(void *ptr)
{
	int No = 0;
	
	No = (int)ptr;
	printf("I'm thread %d\n",gettid());
	pthread_exit(NULL);
}

int main()
{
	pthread_t TID;
	int ret = 0;
	int i = 0;
	
		ret = pthread_create(&TID,
					NULL,
					ThreadProc,
					(int *)i);
								
	if(ret != 0)
	{
		printf("Unable to create thread.\n");
		return -1;
	}
	
	printf("Thread is created with id : %d\n",TID);
	pthread_exit(NULL);

	return 0;
}

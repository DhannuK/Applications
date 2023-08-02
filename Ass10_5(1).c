//Write a program which is used to get thread id inside thread function.
	////////////	  OPTION 1	///////////////////

//OUTPUT : I'm thread 3691 

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<pthread.h>

int main(void)
{
	printf("I'm thread %d\n",gettid());
	return EXIT_SUCCESS;
}

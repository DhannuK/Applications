//It is a child process of Ass8_1.c
//gcc Ass1_1_1.c -o ChildProcess
// ./ChildProcess

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

int main()
{
	printf("Inside child process - PID of parent process is %d\n",getpid());
}

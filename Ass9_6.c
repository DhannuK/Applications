//Write a program which is used to display Environment of our running process

#include<stdio.h>

//third parameter iss store all environment variable.
int main(int argc, char *argv[], char *envp[])
{
	int i;
	for(i = 0; envp[i] != NULL; i++)
		printf("\n %s",envp[i]);
		
	getchar();

	return 0;
}

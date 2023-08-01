
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/resource.h>

int main()
{
	int ret = 0;
	
	ret = nice(0); //0 hi value add kara.
	//Priority value means nice value
	
	printf("Current Priority of process is %d\n",ret);
	
	ret = nice(5);	
	// -20 to 19 range of priority
	// -20 is highes priority
	// 19 is lowes priority
	// and 0 is default
		
	printf("Current Priority of process is %d\n",ret);
	
	return 0;
}

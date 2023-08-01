//Process2 count the number of small letter in demo.txt

#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<fcntl.h>

int main()
{
	char Buffer[512];
	int fd = 0, Ret = 0, i = 0, iCnt = 0;
	
	fd = open("Demo.txt",O_RDONLY);
	
	while((Ret = read(fd,Buffer,sizeof(Buffer))) != 0)
	{
		for(i = 0; i < Ret; i++)
		{
			if((Buffer[i] >= 'a') && (Buffer[i] <= 'z'))
			{
				iCnt++;
			}
		}
	}
	
	printf("Number of small letter is %d\n",iCnt);

	return 0;
}

#include "sharedfile.h"
#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<sys/stat.h>
#include<unistd.h>

int FileInfo(int argc, char *argv[])
{
	struct stat sobj;
	int fd = 0;
	
	fd = open("Demo.txt",O_RDONLY);
	
	fstat(fd,&sobj);
	

	printf("File size is : %d\n",sobj.st_size);
	printf("Number of links : %d\n",sobj.st_nlink);
	printf("Inode number : %d\n",sobj.st_ino);
	printf("File System number : %d\n",sobj.st_dev);
	printf("Number of blocks : %d\n",sobj.st_blocks);

	return 0;
}


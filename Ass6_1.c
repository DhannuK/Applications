//Write a program which accept the file name which contains data of all file. we have to print all file name whose size is greater than 10 bytes.

#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<string.h>
#include<dirent.h>
#include<sys/stat.h>
#include<unistd.h>

int main(int argc, char *argv[])
{
    char DirName[20];
    DIR *dp = NULL;
    struct dirent *entry = NULL;
    char name[30];
    struct stat sobj;

    printf("Enter name of directory : \n");
    scanf("%s",DirName);

    dp = opendir(DirName);
    if(dp == NULL)
    {
        printf("Unable to open directory\n");
        return -1;
    }

    while((entry = readdir(dp)) != NULL)
    {
		sprintf(name,"%s/%s",DirName,entry->d_name);
		stat(name,&sobj);
		stat(name,&sobj);
		if(S_ISREG(sobj.st_mode))
		{
			if(sobj.st_size > 10)
			{
				printf("Files name is : %s\n",name);
			}
		}
	}
	
	closedir(dp);

	return 0;
}

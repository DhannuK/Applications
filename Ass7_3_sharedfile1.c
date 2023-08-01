#include "sharedfile2.h"
#include<stdio.h>
#include<stdbool.h>

bool CheckPrime(int No)
{
	int flag = 1;
	
	for(int i = 2; i <= No/2; i++)
	{
		if(No % i == 0)
		{
			flag = 0;
			break;
		}
	}
	
	if(flag)
	{
		return true;
	}
	else
	{
		return false;
	}
}

#include "sharedfile2.h"
#include<stdio.h>
#include<stdbool.h>

bool CheckPerfect(int iNo)
{
	int iCnt = 0, iSum = 0;
	
	for(iCnt = 1, iCnt <= (iNo/2), iCnt++)
	{
		if((iNo % iCnt) == 0)
		{
			iSum = Sum + iCnt;
		}
	}
	
	if(iSum == iNo)
	{
		return true;
	}
	else
	{
		return false;
	}
}

#include "sharedfile2.h"
#include<stdio.h>
#include<stdbool.h>

int main()
{
	int iValue = 0;
	bool bRet = false;
	bool bAns = false;
	
	bRet = CheckPerfect(iValue);
	
	if(bRet == true)
	{
		printf("%d is a perfect number.\n",iValue);
	}
	else
	{
		printf("%d is not a perfect number.\n",iValue);
	}
	
	bAns = CheckPrime(iValue);
	
	if(bAns == true)
	{
		printf("%d is a prime number.\n",iValue);
	}
	else
	{
		printf("%d is a not prime number.\n",iValue);
	}

	return 0;
}


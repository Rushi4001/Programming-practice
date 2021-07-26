#include<stdio.h>
#include<stdbool.h>

bool chkbit(unsigned int ino)
{
	unsigned int imask=0x00000010;
	unsigned int result=0;
	result=ino&imask;
	if(result==imask)
	{
		return true;
	}
	else
	{
		return false;
	}
	
}

int main()
{
	unsigned int ivalue=0;
	bool bret;
	
	printf("enter the number\n");
	
	scanf("%u",&ivalue);
	
	bret=chkbit(ivalue);
	
	if(bret==true)
	{
		printf("5th bit is on\n");
	}
	else
	{
		printf("5th bit is off\n");
	}
	return 0;
}











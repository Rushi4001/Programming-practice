#include<stdio.h>

#include<stdio.h>
#include<stdbool.h>

bool chkbit(unsigned int ino,int ipos)
{
	unsigned int imask=0x00000001;
	unsigned int result=0;
	if((ipos<1)||(ipos>32))
	{
		return false;
	}
	
	imask=imask<<(ipos-1);
	
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
	unsigned int ivalue=0,ipos=0;
	bool bret;
	
	printf("enter the number\n");
	
	scanf("%u",&ivalue);
	
	printf("enter position\n");
	
	scanf("%u",&ipos);
	
	bret=chkbit(ivalue,ipos);
	
	if(bret==true)
	{
		printf(" bit is on\n");
	}
	else
	{
		printf(" bit is off\n");
	}
	return 0;
}












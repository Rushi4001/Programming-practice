#include<stdio.h>

#include<stdio.h>
#include<stdbool.h>

bool chkbit(unsigned int ino,int ipos1,int ipos2)
{
	unsigned int imask1=0x00000001;
	unsigned int imask2=0x00000001;
	unsigned int imask=0x00000000;
	unsigned int result=0;
	if((ipos1<1)||(ipos2>32)||(ipos2<1)||(ipos2>32))
	{
		return false;
	}
	
	imask1=imask1<<(ipos1-1);
	imask2=imask2<<(ipos2-1);
	imask=imask1||imask2;
	
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
	unsigned int ivalue=0,ipos1=0,ipos2=0;
	bool bret;
	
	printf("enter the number\n");
	
	scanf("%u",&ivalue);
	
	printf("enter position\n");
	
	scanf("%u",&ipos1);
	
	printf("enter position\n");
	
	scanf("%u",&ipos2);
	
	bret=chkbit(ivalue,ipos1,ipos2);
	
	if(bret==true)
	{
		printf(" bits are on\n");
	}
	else
	{
		printf(" bits are off\n");
	}
	return 0;
}

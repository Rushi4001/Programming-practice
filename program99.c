#include<stdio.h>

#include<stdio.h>
#include<stdbool.h>

int offbit(unsigned int ino,int ipos)
{
	unsigned int imask=0x000000001;
	unsigned int result=0;
	if((ipos<1)||(ipos>32))
	{
		return false;
	}
	
	imask=imask<<(ipos-1);
	
	imask=~imask;
	
	result = ino & imask;
	
	return result;
	
}

int main()
{
	unsigned int ivalue=0,ipos=0;
	int bret;
	
	printf("enter the number\n");
	
	scanf("%u",&ivalue);
	
	printf("enter position\n");
	
	scanf("%d",&ipos);
	
	bret=offbit(ivalue,ipos);
	
	printf("new number is: %u\n",bret);
	
	return 0;
}

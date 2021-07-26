#include<stdio.h>



int chkbit(unsigned int ino,int ipos)
{
	unsigned int imask=0x00000001;
	unsigned int result=0;
	if((ipos<1)||(ipos>32))
	{
		return -1;
	}
	
	imask=imask<<(ipos-1);
	
	result=ino^imask;
	
	return result;
	
}

int main()
{
	unsigned int ivalue=0,ipos=0;
	int iret;
	
	printf("enter the number\n");
	
	scanf("%u",&ivalue);
	
	printf("enter position\n");
	
	scanf("%u",&ipos);
	
	iret=chkbit(ivalue,ipos);
	
	printf("updated number is:%u\n",iret);
	return 0;
}


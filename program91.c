#include<stdio.h>

unsigned int offbit(unsigned int ino)
{
	unsigned int imask=0XFFFFFFBB;
	unsigned int result=0;
	result=ino & imask;
	
	return result;

}
int main()
{
	unsigned int ivalue=0;
	
	unsigned int iret=0;
	
	printf("enter number\n");
	
	scanf("%u",&ivalue);
	
	iret=offbit(ivalue);
	
	printf("number after updation: %d\n",iret);
	
	return 0;
}
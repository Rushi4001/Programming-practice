#include<stdio.h>

unsigned int togglebit(unsigned int ino)
{
	unsigned int imask=0X00000004;
	unsigned int result=0;
	result=ino ^ imask;
	
	return result;

}
int main()
{
	unsigned int ivalue=0;
	
	unsigned int iret=0;
	
	printf("enter number\n");
	
	scanf("%u",&ivalue);
	
	iret=togglebit(ivalue);
	
	printf("number after updation: %d\n",iret);
	
	return 0;
}
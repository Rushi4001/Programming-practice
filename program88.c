#include<stdio.h>

int countone(unsigned int ino)
{
	unsigned int idigit=0;
	int icnt=0;
	while(ino>0)
	{
		
		icnt=icnt+(ino%2);
		
		ino=ino/2;
	}
	return icnt ;
}
int main()
{
	unsigned int ivalue=0;
	
	int iret=0;
	
	printf("enter number\n");
	
	scanf("%u",&ivalue);
	
	iret=countone(ivalue);
	
	printf("number of on bits are: %d\n",iret);
	
	return 0;
}
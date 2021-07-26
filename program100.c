#include<stdio.h>

 int countbit(unsigned int ino)
{
	unsigned int imask=0X00000001;   
	unsigned int result=0;
	int icnt=0,i=0;
	
	for(i=1;i<=32;i++)
	{
		result=ino&imask;
		if(result==imask)
		{
			icnt++;
		}
		imask=imask<<1;
	}
	return icnt;
	
}
int main()
{
	unsigned int ivalue=0;
	
	unsigned int iret=0;
	
	printf("enter number\n");
	
	scanf("%u",&ivalue);
	
	iret=countbit(ivalue);
	
	printf("total ON bits are: %d\n",iret);
	
	return 0;
}
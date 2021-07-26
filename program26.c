#include<stdio.h>

int reverse(int ino)
{
	int digit=0;
	int irev=0;
	if (ino<0)
	{
		ino=-ino;
	}
	while(ino>0)
	{
		digit=ino%10;
		
		irev=(irev*10)+digit;
		
		ino=ino/10;
	}
	return irev;
		
	
}

int main()
{
	int ivalue=0;
	int iret=0;
	printf("enter number\n");
	scanf("%d",&ivalue);
	
	iret=reverse(ivalue);
	printf("multiplication of digit: %d",iret);
	
	
	return 0;
}
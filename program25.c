#include<stdio.h>

int multdigit(int ino)
{
	int digit=0,imult=1;
	if (ino<0)
	{
		ino=-ino;
	}
	while (ino>0)
	{
		digit=ino%10;
		if(digit!=0)
		{
			imult=imult*digit;
		}
		ino=ino/10;
	}
	return imult;

}

int main()
{
	int ivalue=0;
	int iret=0;
	printf("enter number\n");
	scanf("%d",&ivalue);
	
	iret=multdigit(ivalue);
	printf("multiplication of digit: %d",iret);
	
	
	return 0;
}
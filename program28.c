#include<stdio.h>

int maxdigit(int ino)
{
	int digit=0;
	int imax=0;
	if(ino<0)
	{
		ino=-ino;
	}
	while(ino>0)
	{
		digit=ino%10;
		
		if (digit>imax)
		{
			imax=digit;
			if(imax==9)
			{
				break;
			}
		}
		
		ino=ino/10;
	}
	return imax;
}

int main()
{
	int ivalue=0;
	int iret=0;
	printf("enter number\n");
	scanf("%d",&ivalue);
	
	iret=maxdigit(ivalue);
	printf("largest digit is: %d",iret);
	
	
	return 0;
}
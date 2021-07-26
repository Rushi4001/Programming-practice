#include<stdio.h>

int maxmin(int ino)
{
	int digit=0;
	int max=0;
	int min=9;
	if (ino<0)
	{
		ino=-ino;
	}
	while(ino>0)
	{
		digit=ino%10;
		if(digit>max)
		{
			max=digit;
		}
	    if(digit<min)
		{
			min=digit;
		}
		ino=ino/10;
		
	}
	return max-min;

}
int main()
{
	int ivalue=0;
	int iret=0;
	printf("enter number\n");
	scanf("%d",&ivalue);
	
	iret=maxmin(ivalue);
	printf("difference is: %d",iret);
	
	
	return 0;
}
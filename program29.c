#include<stdio.h>

int smalestnum(int ino)
{
	int digit=0;
	int min=9;
	if (ino<0)
	{
		ino=-ino;
	}
	while(ino>0)
	{
		digit=ino%10;
		
		if (digit<min)
		{
			min=digit;
			if(min==0)
			{
				break;
			}
			
		}
		ino=ino/10;
	}
	return min;
}
int main()
{
	int value=0;
	int ret=0;
	printf("enter the number\n");
	scanf("%d",&value);
	
	ret=smalestnum(value);
	printf("smalest number is: %d ",ret);
	
	return 0;
}
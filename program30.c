
#include<stdio.h>
int diffrence(int ino)
{
	int icnt=0;
	int sum1=0,sum2=0;
	for (icnt=1;icnt<=ino;icnt++)
	{
		if(ino%icnt==0)
		{
			sum1=sum1+icnt;
		}
		else
		{
			sum2=sum2+icnt;
		}
	}
	    return sum1-sum2;
}
int main()
{
	int ivalue=0;
	int iret=0;
	printf("enter number\n");
	scanf("%d",&ivalue);
	
	iret=diffrence(ivalue);
	printf("largest digit is: %d",iret);
	
	
	return 0;
}
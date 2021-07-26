//accept two number from user  

#include<stdio.h>
#include<stdbool.h>

bool checkdivisible(int ino1,int ino2)
{
	if ((ino1)%(ino2)==0)
	{
		return true;
	}
	else
	{
		return false;
	}
}
	
int main()
{
	int ivalue1=0;
	int ivalue2 =0;
	bool bret=false;   //false is like 0
	
	printf("enter first number");
	scanf("%d",&ivalue1);
	printf("enter second number");
	scanf("%d",&ivalue2);
	
	bret=checkdivisible(ivalue1,ivalue2);
	if (bret==true)
	{
		printf("%d is divisible by %d\n",ivalue1,ivalue2);
	}
   else
   {
    printf("%d is not divisible by %d\n",ivalue1,ivalue2);
   }	
   
   
	return 0;
}
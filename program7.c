//accept number from user and checkwhether that number is divisible by 3 and 5


#include<stdio.h>
#include<stdbool.h>

bool checkdisible(int ino)
{
	if((ino%3)==0&&(ino%5)==0)
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
	int ivalue=0;
	bool bret=false;   //false is like 0
	
	printf("enter number");
	scanf("%d",&ivalue);
	
	bret=checkdisible(ivalue);
	if (bret==true)
	{
		printf("%d is divisible by 3 and 5",ivalue);
	}
   else
   {
    printf("%d is not divisible by 3 and 5\n",ivalue);
   }	
   
   
	return 0;
}
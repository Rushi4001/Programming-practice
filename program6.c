//accept number from user and check whether the number is even or odd
//input:4
//output:its even
//input:7
//output:its odd
#include<stdio.h>
#include<stdbool.h>

bool checkeven(int ino)
{
	if((ino%2)==0)
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
	bool bret=false;  //false is like 0
	
	printf("enter number");
	scanf("%d",&ivalue);
	
	bret=checkeven(ivalue);
	if (bret==true)
	{
		printf("%d is even number",ivalue);
	}
   else
   {
    printf("%d is odd number\n",ivalue);
   }	
   
   
	return 0;
}
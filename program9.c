/*
0to35  fail
35to50 pass class 
50to 60  second
60to70 first
70to100 distiction


*/
#include<stdio.h>
#include<stdbool.h>

void checkresult(int imarks)
{
	if ((imarks<0)||(imarks>100))  //input filter
	{
	  printf("invalid marks");
	  return ;
	}
	 if((imarks>=0)&&(imarks<35))
	{
		printf("you are failed\n");
	}
	else if((imarks>=35)&&(imarks<50))
	{
		printf("pass class");
	}
	else if((imarks>=50)&&(imarks<60))
	{
		printf("second class");
	}
	else if((imarks>=60)&&(imarks<70))
	{
		printf("first class");
	}
	else
	{
		printf("distiction");
	}
	
	
}   

	
int main()
{
	int ivalue=0;
	
	printf("enter first number");
	scanf("%d",&ivalue);
	

	
   checkresult(ivalue);
   
	return 0;
}
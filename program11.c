//accept two numbers from user and calculate its power
//input 2 4
//output 2*2*2*2

#include<stdio.h>

int power(int ino1,int ino2)
{
   int icnt=0;
   int imult=1;
   if (ino1<0)
   {
	   ino1=-ino1;
   }
   if(ino2<0)
   {
   ino2=-ino2;
   }
	for (icnt=1;icnt<=ino2;icnt++)
	{
		imult=imult*ino1;
	}
	return imult;
	
}

int main()
{
	int ivalue1=0;
	int ivalue2=0;
	int iret=0;
	 
	printf("enter the first number\n");
	scanf("%d",&ivalue1); 
	
	printf("enter the second number\n");
	scanf("%d",&ivalue2); 
	
	iret=power(ivalue1,ivalue2);
	
	printf("result is: %d",iret);
	return 0;
}

#include<stdio.h>
int fact(int ino)
{
	 int icnt=0,imult=1;
	 if (ino<0)
	 {
		 ino=-ino;
	 }
	 
	for(icnt=1;icnt<=ino;icnt++)
	{
		
		imult=imult*icnt;
	}
	return imult;
	
}
int main()
{
	int ivalue=0;
	
	int iret=0;
	 
	printf("enter the first number\n");
	scanf("%d",&ivalue); 
	
	
	
	iret=fact(ivalue);
	
	printf("result is: %d\n",iret);
	return 0;
}
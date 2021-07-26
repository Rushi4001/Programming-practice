
#include<stdio.h>
int factsum(int ino)
{
	 int icnt=0,isum=0;
	 if (ino<0)
	 {
		 ino=-ino;
	 }
	 
	for(icnt=1;icnt<=ino/2;icnt++)
	{	
	if((ino%icnt)==0)
	{
		
		isum=isum+icnt;
	}
	}
	return isum;
}
int main()
{
	int ivalue=0;
	
	int iret=0;
	 
	printf("enter the first number\n");
	scanf("%d",&ivalue); 
	
	
	
	iret=factsum(ivalue);
	
	printf("result is: %d\n",iret);
	return 0;
}
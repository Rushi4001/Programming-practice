
#include<stdio.h>
#include<stdbool.h>
int checkperfect(int ino)
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
	if(isum==ino)
	{
		return true ;
	}
    else
	{
		return false;
	}
	
	
}
int main()
{
	int ivalue=0;
	bool bret;

	printf("enter the first number\n");
	scanf("%d",&ivalue); 

	bret=checkperfect(ivalue);
	if(bret==true)
	{
		printf("%d is perfect number\n",ivalue);
	}
	else
	{
		printf("%d is not perfect number\n",ivalue);
	}

	return 0;
}
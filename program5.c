//accept number from user and return addition of all numbers

#include<stdio.h>

int sum(int ino)
{
	int icnt=0;
	int isum=0;
	if(ino==0)
	{
		return 0;
	}
	if(ino<0)
	{
	ino=-ino;
	}
	
	for (icnt=1;icnt<=ino;icnt++)
    {
	 isum=isum+icnt;
	}
	return isum;
}

int main()
{    

    int ino=0;
	int iret=0;
	printf("enter the number");
	scanf("%d",&ino);
	iret=sum(ino);
	
	printf("addition is:%d \n",iret);
	return 0;
	
}



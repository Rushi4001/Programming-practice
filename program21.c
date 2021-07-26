#include<stdio.h>
int sumdigits(int ino)
{
	int isum=0;
	if(ino<0)
	{ino=-ino;}
	
	while(ino>0)
	{
	
		isum=isum+(ino%10 );
		printf("%d\n",idigit);
		ino=ino/10;
	}
	return isum;
	
}
	
int main()
{
	int ivalue=0;
	int iret=0;
	printf("enter number\n");
	scanf("%d",&ivalue);
	
	iret=sumdigits(ivalue);
	printf("sum of digit is :%d\n",iret);
	
	return 0;
}

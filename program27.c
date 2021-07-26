#include<stdio.h>
#include<stdbool.h>

bool checkpallindrome(int ino)
{	
	int digit=0;
	int itemp=0;
	int irev=0;
	if(ino<0)
	{
		ino=-ino;
	}
	itemp=ino;
	while(ino>0)
	{
		digit=ino%10;
		
		irev=(irev*10)+digit;
		
		ino=ino/10;

	}
	if (irev==itemp)
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
	int iret=0;
	printf("enter number\n");
	scanf("%d",&ivalue);
	iret=checkpallindrome(ivalue);
	
	if (iret==true)
	{
		printf("its a palindrome number\n");
	}
	else
	{
		printf("its is not palindrome number\n");
	}
	
	
	return 0;
}
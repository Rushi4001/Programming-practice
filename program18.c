#include<stdio.h>
#include<stdbool.h>


bool checkprime(int ino)
{
  int icnt=0;
  if(ino<0)
  {
	  ino=-ino;
  }
  for (icnt=2;icnt<=ino/2;icnt++)
  {
	  if ((ino%icnt)==0)
	  {
		  break;
	  }
  }
  if (icnt==(ino/2)+1)
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
	printf("enter the number\n");
	scanf("%d",&ivalue);
	
	iret=checkprime(ivalue);
	if (iret==true)
	{
		printf("%d is a prime number",ivalue);
	}
	else
	{
		printf("%d is not a prime number",ivalue);
	}
	
	
	return 0;
}
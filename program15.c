
#include<stdio.h>
void factors(int ino)
{
	 int icnt=0;
	 if (ino<0)
	 {
		 ino=-ino;
	 }
	 
	for(icnt=1;icnt<ino/2;icnt++)
	{
		if ((ino%icnt)==0)
			printf("%d\n",icnt);
		
	}
	// time complexity : O(N/2)
}
int main()
{
	int ivalue=0;
	
	int iret=0;
	 
	printf("enter the first number\n");
	scanf("%d",&ivalue); 
	
	
	
	factors(ivalue);
	
	return 0;
}
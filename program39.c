

#include<stdio.h>
void pattern(unsigned int irow,unsigned int icol)
{
	int i=0,j=0;
	for(i=1;i<=irow;i++)
	{
		for(j=1;j<=icol;j++)
		{
			
			printf("*\t");
			
		}
		printf("\n");
	}
}
int main()
{
	unsigned int ivalue1=0;
	unsigned int ivalue2=0;
	
	printf("enter the number rows\n");
	scanf("%u",&ivalue1);
	printf("enter the number columns\n");
	scanf("%u",&ivalue2);
	
	
	pattern(ivalue1,ivalue2);
	return 0;
}
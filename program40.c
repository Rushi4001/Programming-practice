#include<stdio.h>

void pattern(unsigned int irows,unsigned int icol)
{
	int i,j=0;
	for (i=1;i<=irows;i++)
	{
		for(j=1;j<=icol;j++)
		{
			printf("%d\t",j);
		}
		printf("\n");
	}
}

int main()
{
	int ivalue1=0,ivalue2=0;
	
	printf("enter number of rows and columns");
	scanf("%d %d",&ivalue1,&ivalue2);
	
	pattern(ivalue1,ivalue2);
	
	return 0;
}


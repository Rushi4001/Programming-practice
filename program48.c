#include<stdio.h>

void pattern(unsigned int irows,unsigned int icol)
{
	int i,j=0;
	char ch ='\0';
	if (irows!=icol)
	{
		return;
	}
	
	for (i=1,ch='A';i<=irows;i++,ch++)
	{
		
		for(j=1;j<=icol;j++)
		{
			if(i>=j)
			{
				printf("%c\t",ch);
			}
			
		}
		printf("\n");
	}

}

int main()
{
	int ivalue1=0,ivalue2=0;
	
	printf("enter number of rows ");
	scanf("%d",&ivalue1);
	printf("enter number of coloms ");
	scanf("%d",&ivalue2);
	
	pattern(ivalue1,ivalue2);
	
	return 0;
}
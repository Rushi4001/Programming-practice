#include<stdio.h>

void displaybinary(unsigned int ino)
{
	unsigned int idigit=0;
	while(ino>0)
	{
		idigit=ino%2;
		printf("%u\t",idigit);
		ino=ino/2;
	}
}
int main()
{
	unsigned int ivalue=0;
	
	printf("enter number\n");
	
	scanf("%u",&ivalue);
	
	displaybinary(ivalue);
	
	
	return 0;
}
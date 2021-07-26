#include<stdio.h>

void pattern(unsigned int ino)
{
	int icnt=0;
	printf("\n");
	for (icnt=1;icnt<=ino;icnt++)
	{
		printf("*\t");
	}
	printf("\n");
}
int main()
{
	unsigned int ivalue=0;
	int iret=0;
	printf("enter the number\n");
	scanf("%u",&ivalue);
	
	pattern(ivalue);
	return 0;
}
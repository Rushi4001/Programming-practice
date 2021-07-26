

#include<stdio.h>
void pattern(unsigned int ino)
{
	int icnt=0;
	char ch='A';
	printf("\n");
	for (icnt=1;icnt<=ino;icnt++)
	{
		printf("%c\t",ch);
		ch=ch+1;
	}
	printf("\n");
}
int main()
{
	unsigned int ivalue=0;
	
	
	printf("enter the number\n");
	scanf("%u",&ivalue);
	
	
	pattern(ivalue);
	return 0;
}
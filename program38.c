#include<stdio.h>
void pattern(unsigned int ino)
{
	int icnt=0;
	char ch='\0';
	printf("\n");
	for (icnt=1,ch='A';icnt<=ino;icnt++,ch++)
	{
		printf("%c\t",ch);
		
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
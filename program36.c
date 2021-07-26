

#include<stdio.h>
void pattern(unsigned int ino,char ch)
{
	int icnt=0;
	printf("\n");
	for (icnt=1;icnt<=ino;icnt++)
	{
		printf("%c\t",ch);
		
	}
	printf("\n");
}
int main()
{
	unsigned int ivalue=0;
	char cvalue='\0';
	int iret=0;
	printf("enter the number\n");
	scanf("%u",&ivalue);
	printf("enter the charachter\n");
	scanf(" %c",&cvalue);
	
	pattern(ivalue,cvalue);
	return 0;
}
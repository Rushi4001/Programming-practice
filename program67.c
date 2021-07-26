#include<stdio.h>

int strlenx(char str[])
{
	int icnt=0;
	while(*str!='\0')
	{
		icnt++;
		str++;
	}
	return icnt;
}
int main()
{
	char arr[10];
	int iret=0;
	
	printf("enter your name\n");
	
	scanf("%[^'\n']s",arr);
	//fgets(arr,10,stdin);
	iret=strlenx(arr);
	
	printf("length of string is: %d\n",iret);
	
	return 0;
}
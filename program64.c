#include<stdio.h>

void display(char str[])
{
	printf("charecter from string are \n");
	
	while(*str!='\0')
	{
		printf("%c\n",*str);
		str++;
	}
	
	
}
int main()
{
    char Arr[10];
    
    printf("Enter your name\n");
    
	fgets(arr,10,stdin);    // hello
	
	display(arr);   //display(100)
	
    return 0;
}
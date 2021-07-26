#include<stdio.h>

void display(char str[])
{
	int icnt=0;
	printf("charecter from string are \n");
	
	for(icnt=0;str[icnt]!='\0';icnt++)
	{
		printf("%c\n",str[icnt]);
		icnt++;
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
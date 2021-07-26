
#include<stdio.h>

void display(char str[])
{
	int icnt=0;
	
    if(str == NULL)
    {return;}
    
    while(*str != '\0')
    {
        icnt++;
		str++;
    }
	str--;
	while(icnt>0)
	{
		printf("%c",*str);
		icnt--;
		str--;
	}
}

int main()
{
    char Arr[10];
    int iRet = 0;
    printf("Enter string\n");
    scanf("%[^'\n']s",Arr);
    display(Arr);  //struprx(100)
    
    return 0;
}

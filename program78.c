
#include<stdio.h>

void reverse(char str[])
{
	char *start,*end,temp;
	
	start=str;
	end=str;
	while(*end!='\0')
	{
		end++;
	}
	end--;
	while(start<end)
	{
		temp=*start;
		*start=*end;
		*end=temp;
		start++;
	    end--;
	}	
}

int main()
{
    char Arr[10];
    
    printf("Enter string\n");
    scanf("%[^'\n']s",Arr);
	
    reverse(Arr);  //struprx(100)
    printf("reverse string is:%s\n",Arr);
    return 0;
}

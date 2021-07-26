#include<stdio.h>

int counta(char str[])
{
    int icnt = 0;
	
	if(str == NULL)
    {       
		return 0; 
	}
    
    while(*str != '\0')
	{
		if(*str>='A'&&*str<='Z')
		{
			icnt++;
		}
		str++;
		
	}
	return icnt;
}

int main()
{
    char Arr[10];
    int iRet = 0;
    printf("Enter string\n");
    scanf("%[^'\n']s",Arr);
    //fgets(Arr,10,stdin);        // Hello
  
    iRet = counta(Arr);   // Display(100)
    printf("frequency of 'A' to 'Z' is : %d\n",iRet);
    return 0;
}
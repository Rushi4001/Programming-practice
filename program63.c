#include<stdio.h>

int main()
{
    char Arr[40];
    
    printf("Enter your name\n");
    scanf("%[^'\n']s",Arr);
    
	//fgets(arr,40,stdin);    //fgets(kashyat,kiti,kuthun)
	//gets(arr);
	//scanf("%s",arr);
	
    printf("Your name is : %s\n",Arr);
    
    return 0;
}

#include<stdio.h>

void strcpyx(char scr[],char dest[])
{
	if(scr==NULL||dest==NULL)
	{
		return;
	}
	
	while(*scr!='\0')
	{
	  *dest=*scr;
	  scr++;
	  dest++;
	 
	}
	*dest='\0';
}



int main()
{
	char arr[20];
	char brr[20];
	
	printf("enter string\n");
	scanf("%[^'\n']s",	arr);
	
	strcpyx(arr,brr);
	
	printf("after copy strining :%s\n",brr);
	
	return 0;
}











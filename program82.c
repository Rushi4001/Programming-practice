#include<stdio.h>

void strcpyx(const char scr[],char dest[])
{
	char ch='\0';
	if(scr==NULL||dest==NULL)
	{
		return;
	}
	
	while(*scr!='\0')
	{
	  if((*scr>='a')&&(*scr<='z'))
	  {		  
     	  *dest=*scr-32;
	  }
	  else
	  {
		  *dest=*scr;
	  }
	  
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
	
	printf("original string is: %s\n",arr);
	printf("after copy strining :%s\n",brr);
	
	return 0;
}

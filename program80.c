#include<stdio.h>

void strcpyrevx(char scr[],char dest[])
{
	if(scr==NULL||dest==NULL)
	{
		return;
	}
	
	int icnt=0;
	while(*scr!='\0')
	{
	  icnt++;
	  scr++;
	 
	}
	scr--;
	while(icnt>0)
	{
	  *dest=*scr;
	  scr--;
	  dest++;
	  icnt--;
	}
	*dest='\0';
}



int main()
{
	char arr[20];
	char brr[20];
	
	printf("enter string\n");
	scanf("%[^'\n']s",	arr);
	
	strcpyrevx(arr,brr);
	
	printf("after copy strining :%s\n",brr);
	
	return 0;
}

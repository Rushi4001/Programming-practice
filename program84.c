#include<stdio.h>

void strcatx(char scr[],char dest[])
{
	char ch='\0';
	if(scr==NULL||dest==NULL)
	{
		return;
	}
	
	while(*dest!='\0')
	{
      dest++;
	}
	*dest=' ';
	dest++;
	
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
	
	printf("enter first string\n");
	scanf("%[^'\n']s",	arr);       //demo
	
	printf("enter second string\n");
	scanf(" %[^'\n']s",	brr);         //hello
	
	strcatx(arr,brr);
	
	printf("after concat string is : %s\n",brr);  //hellodemo
	
	
	return 0;
}
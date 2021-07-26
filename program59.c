#include<stdio.h>
#include<stdlib.h>

int firstocurance(int Arr[],int ilength,int no)
{
	int i=0;
	for(i=0;i<ilength;i++)
	{
		if(Arr[i]==no)
		{
			break;
		}
	}
    if(i==ilength)
	{
		return -1;
	}
	else
	{
		return i;
	}
	
}
int main()
{
	int *arr=NULL;
	int i=0,length=0,ino=0,iret=0;
	
	printf("enter the number of element\n");
	scanf("%d",&length);
	
	printf("enter the number you want frequency\n");
	scanf("%d",&ino);
	
	arr=(int*)malloc(length*sizeof(int));
	
	printf("enter the numbers\n");
	for(i=0;i<length;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	
	iret=firstocurance(arr,length,ino);
	if(iret==-1)
	{
		printf("there is no such number\n");
	}
	else
	{
		printf("index is :\t%d\n",iret);
	}
		
	
	
	
	return 0;
}
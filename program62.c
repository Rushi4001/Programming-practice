#include<stdio.h>
#include<stdlib.h>

int minimum(int Arr[],int ilength)
{
	int i=0,imax=0;
	imax=Arr[0];
	for(i=0;i<ilength;i++)
	{
		if(Arr[i]>imax)
		{
			imax=Arr[i];
		}
	}
   return imax;
}
int main()
{
	int *arr=NULL;
	int i=0,length=0,iret=0;
	
	printf("enter the number of element\n");
	scanf("%d",&length);
	
	
	arr=(int*)malloc(length*sizeof(int));
	
	printf("enter the numbers\n");
	for(i=0;i<length;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	
	iret=minimum(arr,length);
	printf("samllest no  is :%d",iret);
	
	
	
	return 0;
}
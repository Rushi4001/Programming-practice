
#include<stdio.h>
#include<stdlib.h>

int sumelements(int Arr[],int ilength)
{
	int isum=0,i=0;
	for(i=0;i<ilength;i++)
	{
		isum=isum+Arr[i];
	}
	return isum;
}
int main()
{
	int *arr=NULL;
	int i=0;
	int isize=0;
	int iret=0;
	
	printf("enter the number of element\n");
	scanf("%d",&isize);
	
	arr=(int*)malloc(isize*sizeof(int));
	for(i=0;i<isize;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	iret=sumelements(arr,isize);
	
	printf("sumetion of all element  is %d:",iret);
	
	
	return 0;
}

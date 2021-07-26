#include<stdio.h>
#include<stdlib.h>

int frequency(int Arr[],int ilength,int no)
{
	int i=0,icnt=0;
	for(i=0;i<ilength;i++)
	{
		if(Arr[i]==no)
		{
			icnt++;
		}
	}
   return icnt;
}
int main()
{
	int *arr=NULL;
	int i=0,length=0,freq=0,iret=0;
	
	printf("enter the number of element\n");
	scanf("%d",&length);
	
	printf("enter the number you want frequency\n");
	scanf("%d",&freq);
	
	arr=(int*)malloc(length*sizeof(int));
	
	printf("enter the numbers\n");
	for(i=0;i<length;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	
	iret=frequency(arr,length,freq);
	printf("frequency of %d is :%d",freq,iret);
	
	
	
	return 0;
}
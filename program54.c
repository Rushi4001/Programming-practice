
#include<stdio.h>
#include<stdlib.h>

void displayeven( int Arr[], int isize)
{
	int i=0;
	if((Arr==NULL)||(isize<=0))
	{
		return;
	}
	printf("even numbers from array are\n");
	for(i=0;i<isize;i++)
	{
		if((Arr[i]%2)==0)
		{
			printf("%d\n",Arr[i]);
		}
	}
	
}

int main()
{
	int *arr=NULL;
	int ilength=0;
	int i=0;
	
	printf("enter the number of element\n");
	scanf("%d",&ilength);
	
	arr=(int*)malloc(ilength*sizeof(int));
	if(arr==NULL)
	{
		printf("unable to allocate the memory\n");
		return -1;
		
	}
	
	printf("enter the values\n");
	for(i=0;i<ilength;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	displayeven(arr,ilength);
	
    free(arr);	
	
	return 0;
}
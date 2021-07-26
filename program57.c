
#include<stdio.h>
#include<stdlib.h>

int countevenelements(int Arr[],int ilength)
{
	int count=0,i=0;
	for(i=0;i<ilength;i++)
	{
		if(Arr[i]%2==0)
		{
			count=count+1;
		}
	}
	return count;
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
	
	iret=countevenelements(arr,isize);
	
	printf("count of even no is %d:",iret);
	
	
	return 0;
}

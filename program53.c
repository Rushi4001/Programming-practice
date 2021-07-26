//accept n number from user and display that number.

#include<stdio.h>
#include<stdlib.h>

void display(int arr[],int isize)  //step6
{
	int i=0;
	printf("elements from the array are:\n");
	
	for(i=0;i<isize;i++)
	{
		printf("%d\n",arr[i]);
	}
		

}
int main()
{
	int *arr=NULL;  //step1
	int ilength=0,i=0;
	
	printf("enter the number of elements");

	scanf("%d",&ilength);     //step2
	
	arr=(int*)malloc(ilength*sizeof(int)); //step3
	
	printf("enter the elements\n");  //step4
	
	for(i=0;i<ilength;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	display(arr,ilength);    //step5
	
	free(arr);               //step7
	return 0;
}

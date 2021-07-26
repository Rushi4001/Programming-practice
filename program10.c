//accept number from user and display its table
//input 4
// 4 8 12 16 20 24 28 32 36 40
#include<stdio.h>

void displaytable(int ino)
{
	int icnt=0;
	if(ino<0)
	{
		ino=-ino;
	}
	for (icnt=1;icnt<=10;icnt++)
	{
		printf("%d\n",ino*icnt);
	}
	
}
int main()
{
	int ivalue=0;
	printf("enter number\n");
	scanf("%d",&ivalue);
	
	displaytable(ivalue);
	return 0;
}
#include<stdio.h>

int evendigit(int ino)
{
	int idigit=0;
	int icnt=0;
	while(ino>0)
	{
		idigit=ino%10;
		if(idigit%2==0)
		{
			icnt++;
		}
		ino=ino/10;
    }
	return icnt;
}


int main()
{
	int value=0;
	int ret=0;
	printf("enter the number\n");
	scanf("%d",&value);
	
	ret=evendigit(value);
	printf("even digit is:%d",ret);

    return 0;
}
	
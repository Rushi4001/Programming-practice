//accept number from user and display all the number till that number 
//input: 8 output :1 2 3 4 5 6 7 8
//input: -6  output:1 2 3 4 5 6

/*
  START
    accept one number as no 
	if number is negative then converts it to positive
	create one counter as cnt and set it to 1
	iterate till the counter is less than or equal to the number
	print the value of counter on screen 
	increament the value of counter by 1
	continue
END
*/
#include<stdio.h>
   
  void display(int ino)
   {
	  int icnt=0;
	  if (ino<0)  //input updater
	  {
		  ino=-ino;
		  
	  }
	  
	  //initialization ; condition ; increament/decrement
	  
	  //    1       2         3
	  for (icnt=1;icnt<=ino;icnt++)
	  {
		  printf("%d\n",icnt); //4 loop body
	  }
	   
   }


int main()//entry point function
{
  int ivalue=0;
  
  printf("enter the number\n");
  scanf("%d",&ivalue);
  display(ivalue);
  return  0;
}
/* Chapter 6:program 6.1*/

/*Program to find absolute number*/

/*Babu K DBS*/

#include<stdio.h>

int main(void)

{
	int number;
	
	printf("Enter the number\n");
	
	scanf("%i",&number);
	
	if(number<0)
	
	{
		
		number=-number;
	}
	
	printf("The absolute number is %i\n",number);
}

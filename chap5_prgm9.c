/* Chapter 5:program 9*/

/*Program to find reverse of the given integer number*/

/*Babu K DBS*/

#include<stdio.h>

int main(void)

{
	int number,right_digit;
	
	printf("Enter the number to reverse\n");
	
	scanf("%i",&number);
	
	do
	{
		right_digit=number%10;
		
		printf("%i",right_digit);
		
		number=number/10;
		
	}while(number!=0);

	printf("\n");

}


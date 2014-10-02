/* Chapter 6:program 6.2*/

// Program to determine if a number is even or odd

/*Babu K DBS*/

#include<stdio.h>

int main(void)

{
	
	int number,remainder;
	
	printf("Enter the number to test even or odd\n");
	scanf("%i",&number);
	
	remainder=number%2;
	
	if(remainder==0)
	
	printf("The number is even\n");
	
	else
	
	printf("The number is odd\n");
	
	return 0;
	
}

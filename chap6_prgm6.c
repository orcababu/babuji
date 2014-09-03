/* Chapter 6:program 6.6*/

// Program to implement the sign function

/*Babu K DBS*/


#include<stdio.h>

int main(void)
{
	
	int n,sign;
	
	printf("Enter a number\n");
	
	scanf("%i",&n);
	
	if(n<0)
	
		sign=-1;
	
	else if(n==0)
	
		sign=0;
	
	else
	
		sign=1;
		
	printf("The sign of number must be %i\n",sign);
	
	return 0;
}

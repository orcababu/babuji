/* Chapter 5:program 16*/

/*Excercise no : 11*/

/*Program to find sum of given integer number*/

/*Babu K DBS*/

#include<stdio.h>

int main(void)

{
	int sum=0,temp,n;
	
	printf("Enter a integer number\n");
	
	scanf("%i",&n);
	
	while(n!=0)
	
	{
		
		temp=n%10;
		
		sum=sum+temp;
		
		n=n/10;
	}
	
	printf("The addition of given integer number is %i\n",sum);
}

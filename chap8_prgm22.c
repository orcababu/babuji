//prime number or not

//ex  no  10

//Babu K DBS

#include<stdio.h>

int main(void)

{
	
	int num;
	
	printf("Enter the number to check the prime number\n");
	
	scanf("%d",&num);
	
	if(num>0)
	
	{
	
		if(num==1)
	
			printf("It is prime number\n");
	
		else if(num==2||num==3||num==5||num==7)
	
			printf("It is prime number\n");
	
		else if(num%2==0||num%3==0)
	
			printf("It is not a prime number\n");
			
		else
			
			printf("It is a prime number\n");
	
	}
	
	else
	
		printf("Enter the positive value\n");
		
}


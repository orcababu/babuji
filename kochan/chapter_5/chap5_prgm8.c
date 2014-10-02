#include<stdio.h>

int main(void)

{

	int number,right_digit;
	
	printf("Enter the number to be reverse\n");
	
	scanf("%d",&number);
	
	while(number!=0)
	
	{
		
		right_digit=number%10;
		
		printf("%i",right_digit);
		
		number=number/10;
		
	}

}

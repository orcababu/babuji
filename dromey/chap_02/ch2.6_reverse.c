//reverse of the given number

//Babu K DBS

#include<stdio.h>

int main(void)

{
	
	int n;
	
	int temp;
	
	int rev=0;
	
	printf("Enter the number to find reverse\n");
	
	scanf("%i",&n);
	
	temp=n;
	
	while(n>0)
		
	{
		
		rev=rev*10+n%10;
			
		n=n/10;
			
	}
	
	printf("The reverse of %i = %i",temp,rev);
}

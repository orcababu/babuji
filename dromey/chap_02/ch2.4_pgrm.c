//dromey How to solve it by computer program 2.4

//Factorial of n integers

//Babu  K DBS

#include<stdio.h>

int main(void)
{
	int i,fact=1,n,nfact=0;
	printf("Enter the number to find factorial\n");
	scanf("%i",&n);
	if(n==0)
		printf("The factorial is 1\n");
	else
	{
		
		for(i=1;i<=n;i++)
		{
			fact=i*fact;
			nfact=fact;
		}
	
	printf("The factorial of %i is %i",n,nfact);
	}
}

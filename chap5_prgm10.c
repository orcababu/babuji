/* Chapter 5:program 10*/

/*Program to find N and Square(N) values from 1 to 10*/

/*Babu K DBS*/

#include<stdio.h>
#include<math.h>

int main(void)

{
	int n,i;
	
	printf("Enter the number n range");
	
	scanf("%i",&n);
	
	printf("N	Square(N)\n");
		
	printf("---	-----------\n");
	
	for(i=0;i<=n;i++)
	
	{
	
		
		printf("%i	%i\n",i,i*i);
		
	}
}

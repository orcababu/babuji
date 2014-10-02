#include<stdio.h>

#include<math.h>

int main(void)

{
	
	int n,triangularnumber;
	
	printf("Finding Triangular number between 5 and 50");
	
	for(n=5;n<=50;n=n+5)
	
	{
		
		triangularnumber=n(n+1)/2;
		
		printf("%i",triangularnumber);
		
		printf("\n");
		
	}
}

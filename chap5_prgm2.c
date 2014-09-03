/* Chapter 5:program 2*/

/*Program in 200th triangular number*/

/*Babu K DBS*/

#include<stdio.h>

int main(void)

{
	int n,triangularnumber;
	
	triangularnumber=0;
	
	for(n=0;n<=200;n++)
	
	{
		triangularnumber=triangularnumber+n;
		
	}
	
	printf("The 200th triangular number is %i\n",triangularnumber);
	
	return 0;
}

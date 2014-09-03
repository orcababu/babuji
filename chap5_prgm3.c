/* Chapter 5:program 3*/

/*Program in finding table of triangular number*/

/*Babu K DBS*/

#include<stdio.h>

int main(void)

{
	
	int n,triangularnumber;
	
	triangularnumber=0;
	
	printf("TABLE OF TRIANGULAR NUMBERS\n\n");
	
	printf(" N	Sum of triangulars\n");
	printf(" ---- --------------------\n\n");
	
	for(n=0;n<=10;n++)

	{
		
		triangularnumber+=n;
		
		printf(" %i	%i\n",n,triangularnumber);
						
	}
	
	return 0;
}

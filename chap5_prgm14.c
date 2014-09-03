/* Chapter 5:program 14*/

/*Program to find given number of triangularnumbers */

/*Babu K DBS*/


#include <stdio.h>

int main (void)

{

int n, number, triangularNumber, counter,k;

printf("How many triangular numbers you want to print\n\n");

scanf("%i",&k);

for ( counter = 1; counter <= k; ++counter ) 

	{
	
		printf ("What triangular number do you want? ");
		
		scanf ("%i", &number);
		
		triangularNumber = 0;
		
		for ( n = 1; n <= number; ++n )
		
		triangularNumber += n;
		
		printf ("Triangular number %i is %i\n\n", number, triangularNumber);
	
	}

return 0;

}

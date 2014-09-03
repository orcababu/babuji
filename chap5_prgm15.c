/* Chapter 5:program 15*/

/*Excercise no : 9*/

/*Program to replacing while loop instead of for loop*/

/*Babu K DBS*/


#include <stdio.h>

int main (void)

{

int n, number, triangularNumber, counter,k;

printf("How many triangular numbers you want to print\n\n");

scanf("%i",&k);

counter=0;

//for ( counter = 1; counter <= k; ++counter ) 

while(counter!=k)

	{
	
		printf ("What triangular number do you want? ");
		
		scanf ("%i", &number);
		
		triangularNumber = 0;
		
		//for ( n = 1; n <= number; ++n )
		
		n=1;
		
		while(n<=number)
		{
				
			triangularNumber += n;
			
			++n;
		
		}
	
		printf ("Triangular number %i is %i\n\n", number, triangularNumber);
		
		++counter;
	
	}

return 0;

}

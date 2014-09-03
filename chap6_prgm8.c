/* Chapter 6:program 6.7*/

/* Program to evaluate simple expressions of the form
number operator number */

/*Babu K DBS*/

#include <stdio.h>

int main (void)

{
	
	float value1, value2;
	
	char operator;
	
	
	printf ("Type in your expression.\n");
	
	scanf ("%f %c %f", &value1, &operator, &value2);
	
	if ( operator == '+' )
	
	printf ("%.2f\n", value1 + value2);
	
	else if ( operator == '-' )
	
	printf ("%.2f\n", value1 - value2);
	
	else if ( operator == '*' )
	
	printf ("%.2f\n", value1 * value2);
	
	else if ( operator == '/' )
	
	printf ("%.2f\n", value1 / value2);
	
return 0;

}

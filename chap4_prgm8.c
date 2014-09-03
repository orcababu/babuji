/* Chapter 4:program 9*/

/*Program in finding polynomial of x=2.55*/

/*Babu K DBS*/

#include<stdio.h>

#include<math.h>

int main(void)

{
	
	float x,p;
	
	x=2.55;
	
	printf("Finding polynomial value of %f\n",x);
	
	p=3*x*x*x-5*x*x+6;
		
	printf("The polynomial value of %f is %f",x,p);
	
	return 0;
	
}

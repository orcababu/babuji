/* Chapter 8:program 8.4*/

//program for calculating nth triangular number

/*Babu K DBS*/

#include<stdio.h>

void calculateTriangularnumber(int n)

{
	
	int i,triangularnumber=0;
	
	for(i=0;i<=n;i++)
	
		triangularnumber+=i;
		
	printf("Triangular number for %i is %i\n",n,triangularnumber);
}

int main(void)

{
	
	calculateTriangularnumber(10);
	calculateTriangularnumber(20);
	calculateTriangularnumber(30);
	
}

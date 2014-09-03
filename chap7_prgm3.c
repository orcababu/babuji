/* Chapter 7:program 7.3*/

// Program to generate the first 15 Fibonacci numbers

/*Babu K DBS*/

#include<stdio.h>

int main(void)

{
	int i,Fibonacci[15];
	
	Fibonacci[0]=0;
	
	Fibonacci[1]=1;
	
	for(i=2;i<15;i++)
	
	Fibonacci[i]=Fibonacci[i-2]+Fibonacci[i-1];
	
	for(i=0;i<15;i++)
	
	printf("Fibonacci[%i] = %i\n",i,Fibonacci[i]);
	
}

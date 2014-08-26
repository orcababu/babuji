/* Chapter 4:program 1*/

/*Program in datatypes*/

/*Babu K DBS*/

#include<stdio.h>

int main(void)
{
	int a=100;
	int b=2;
	int c=25;
	int d=4;
	
	int result;
	
	result=a+b;//addition
	printf("a + b = %i\n",result);
	
	result=b*c;//multiplication
	printf("b * c = %i\n",result);
	
	result=a/c;//division
	printf("a / c = %i\n",result);
	
	result=a+b*c;//precedence
	printf("a + b * c = %i\n",result);
	
	result=a*b+c*d;
	printf("a * b + c * d = %i\n",result);
	
	return 0;
}

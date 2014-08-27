/* Chapter 4:program 4*/

/*Program in Modulus operator*/

/*Babu K DBS*/

#include<stdio.h>

int main(void)

{
	
	int a=25,b=5,c=10,d=2;
	
	printf("a %% b 		= %i\n",a%b);
	
	printf("a %% b 		= %i\n",a%c);
	
	printf("a %% d 		= %i\n",a%d);
	
	printf("a/d*d+a %% d 	= %i\n",a/d*d+a%d);
	
	return 0;
}

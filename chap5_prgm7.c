/* Chapter 5:program 7*/

/*Program to find greatest common divisor*/

/*Babu K DBS*/

#include<stdio.h>

int main(void)

{
	
	int u,v,temp;
	
	printf("Enter two non-negative integers\n");
	
	scanf("%i%i",&u,&v);
	
	while(v!=0)
	
	{
		
		temp=u%v;
		
		u=v;
		
		v=temp;
	
	}
	
	printf("The greatest commom divisor is %i\n",u);
	
	return 0;
}

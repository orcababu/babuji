/* Chapter 8:program 8.6*/

/* Function to find the greatest common divisor of two
nonnegative integer values and to return the result */

/*Babu K DBS*/

#include<stdio.h>

int gcd(int m,int n)
{
	int u,v,temp;
	u=m;
	v=n;
	while(v!=0)
	{
		temp=u%v;
		u=v;
		v=temp;
	}
	return(u);
}

int main(void)

{
	int result;
	result=gcd(150,35);
	
	printf("result = %i\n",result);
	
	return 0;
}

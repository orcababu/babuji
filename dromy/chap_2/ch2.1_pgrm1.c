#include<stdio.h>
int main(void)
{
	int a,b;
	a=4,b=5;
	int c;
	
	printf("Befor sorting:\na = %i, b = %i\n",a,b);
	
	c=a;
	a=b;
	b=c;
	
	printf("After sorting:\na = %i, b = %i\n",a,b);
	
	return 0;
	
}

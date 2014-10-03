
#include<stdio.h>

int main(void)

{
	int a;
	
	int b;
	
	int c;
	
	a=4,b=5;
		
	printf("Befor sorting:\na = %i, b = %i\n",a,b);
	
	c=a;
	a=b;
	b=c;
	
	printf("After sorting:\na = %i, b = %i\n",a,b);
	
	return 0;
	
}

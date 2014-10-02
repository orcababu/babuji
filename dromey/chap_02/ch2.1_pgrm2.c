#include<stdio.h>

int main(void)

{
	int a,b,c,d;
	
	int temp;
	
	printf("Before sorting\n");
	
	a=5,b=6,c=7,d=8;
	printf("\na = %i\nb = %i\nc = %i\nd = %i\n",a,b,c,d);
	
	temp=a;
	a=b;
	b=c;
	c=d;
	d=temp;
	
	printf("After sorting\n");
	printf("\na = %i\nb = %i\nc = %i\nd = %i\n",a,b,c,d);
	return 0;
	
}

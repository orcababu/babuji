#include<stdio.h>

int main(void)
{
	int x,*int_ptr;
	
	printf("Enter the value to illustrate pointer");
	scanf("%i",&x);
	
	int_ptr=&x;
	printf("X = %i \nint_ptr = %i \n*int_ptr = %i ",x,int_ptr,*int_ptr);
	
}

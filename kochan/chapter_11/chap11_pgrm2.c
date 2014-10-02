#include<stdio.h>

int main(void)

{	

	char c='Q';
	
	char *ch_ptr;
	
	ch_ptr=&c;
	
	printf("The character c = %c and char_ptr = %c\n",c,c);
	
	c ='/';
	
	printf("c = %c and char_ptr = %c and &(c) = %i\n",c,c,&c);
	
	c='$';
	
	printf("c = %c and char_ptr = %c and &(c) = %i\n",c,c,&c);		
		
}

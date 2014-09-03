/* Chapter 7:program 7.4*/

// Program to initialize arrays

/*Babu K DBS*/

#include<stdio.h>

int main(void)

{
	
	int i,array_val[10]={0,1,4,9,16};
	
	for(i=5;i<10;i++)

	{

		array_val[i]=i*i;

	}

	for(i=0;i<10;++i)

	printf("%i\n",array_val[i]);
	
}

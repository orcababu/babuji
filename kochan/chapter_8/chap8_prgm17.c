/* Chapter 8:program 8.17*/

//Illustrating Static and Automatic Variables

/*Babu K DBS*/

#include<stdio.h>

void auto_static(void)

{
	
	int auto_var=1;
	static int static_var=1;
	
	printf("Auto variable = %i and Static variable = %i\n", auto_var, static_var);
	
	++auto_var;
	++static_var;
	
}

int main(void)

{
	
	int i;
	
	void auto_static();
	
	for(i=0;i<5;i++)
	
	{
		auto_static();
	}
	return 0;
}

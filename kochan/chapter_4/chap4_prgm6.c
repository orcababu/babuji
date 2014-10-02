#include<stdio.h>
int main(void)
{
	int f;
	float c;
	printf("Enter the degree in Fahrenheit\n");
	scanf("%d",&f);
	
	c=(f-32)/1.8;
	printf("The degreee in Celsius = %f\n",c);
}

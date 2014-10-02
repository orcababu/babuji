/* Chapter 8:program 8.7*/

// Function to calculate the absolute value

/*Babu K DBS*/

#include<stdio.h>

float absolutevalue(float x)
{
	if(x<0)
		x=-x;
		
	return x;
}

int main(void)

{

	
	float f1=-23.5,f2=65.0,f3=-8.0,result;
	int i1=-150;
		
	result=absolutevalue(f1);	
	printf("Result = %.2f\n",result);
	printf("f1=%.2f\n",f1);
	
	result=absolutevalue(f2)+absolutevalue(f3);
	printf("Result =%.2f\n",result);
	
	result=absolutevalue((float)i1);
	printf("Result = %.2f\n",result);
	
	result=absolutevalue(i1);
	printf("Result = %.2f\n",result);
	
	printf("%.2f\n",absolutevalue(-6.0)/4);
	
	return 0;

	
	
}

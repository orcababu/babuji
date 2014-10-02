/* Chapter 8:program 8.11*/

//multiplyby2 with the given value

/*Babu K DBS*/

#include<stdio.h>

void multiplyby2(float array[],int n)

{
	int i;
	
	for(i=0;i<n;++i)

	array[i]*=2;

}

int main(void)

{

	float floatvals[4]={-1.2f,-3.7f,6.2f,8.55f};

	int i;

	float result;
	
	void multiplyby2(float array[], int n);
	
	multiplyby2(floatvals,4);
	
	for(i=0;i<4;++i)
	
		printf("%.2f",floatvals[i]);		
		
	printf("\n");
	
	return 0;
}

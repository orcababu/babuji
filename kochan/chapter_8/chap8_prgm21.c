#include<stdio.h>

float absolutevalue(float x)

{

	if(x<0)
	{
		x=-x;
	}
	return x;
	
}

float squareroot(float x,float epsilon)

{

	float guess=1.0;
	
	while(absolutevalue(guess*guess-x)>epsilon)
		{
		guess=(x/guess+guess)/2.0;
		printf("Guess = %f\n",guess);
		
		}
	
	return guess;

}


int main(void)

{
		
	printf("squareroot(2.0,0.00001) is %f\n",squareroot(2.0,0.00002));
	
	printf("squareroot(2.0,0.00001) is %f\n",squareroot(5.0,0.000001));
	
	printf("squareroot(2.0,0.00001) is %f\n",squareroot(145.0,0.000005));
	
	return 0;
}

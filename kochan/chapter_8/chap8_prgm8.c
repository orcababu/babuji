/* Chapter 8:program 8.7*/

//Calculating the Square Root of a Number

/*Babu K DBS*/

#include<stdio.h>

float absolutevalue(float x)

{

	if(x<0)

		x=-x;

	return(x);

}

float squareroot(float x)

{

	const float epsilon=0.00001;

	float guess=1.0;

	while(absolutevalue(guess*guess-x)>=epsilon)

	guess=(x/guess+guess)/2.0;
	
	return guess;
}

int main()

{

	printf("squareroot(9.0) = %f\n",squareroot(9.0));

	printf("sqiarerppt(144.0) = %f\n",squareroot(144.0));

	printf("sqiarerppt(17.5) = %f\n",squareroot(17.5));
	
}

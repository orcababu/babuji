//double presision value for sent to the squareroot function to caluculate the squareroot value

//ex no 6

//Babu K DBS

#include<stdio.h>

int main(void)
{
	double squareroot(double x);
	printf("Squareroot(2.0) = %ld",squareroot(2.0));
}
double absolutevalue(double x)
{
	if(x<0)
	{
		x=-x;
	}
	return x;
	
}

double squareroot(double x)
{
	double epsilon=0.00001;
	double guess=2.0;
	
	while(absolutevalue(guess*guess-x)>0.00001)
	{
		guess=(x/guess+guess)/2.0;
	}
	return guess;
}

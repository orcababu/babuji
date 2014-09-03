#include<stdio.h>

int main(void)

{
	
	int i,numfibs;
	
	printf("How many Fibonacci numbers do you want between 1 and 75..?\n");

	scanf("%i",&numfibs);
	
	if(numfibs<1||numfibs>75)

	{
		printf("Sorry bad number!\n");

		return 1;
		
	}

	unsigned long long int Fibonacci[numfibs];
	
	Fibonacci[0]=0;//by definition

	Fibonacci[1]=1;//ditto
	
	for(i=2;i<numfibs;++i)
		Fibonacci[i]=Fibonacci[i-2]+Fibonacci[i-1];
		
	for(i=0;i<numfibs;++i)
		printf("%llu ",Fibonacci[i]);
		
	printf("\n");
	
	return 0;
	
}

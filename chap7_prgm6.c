#include<stdio.h>

int main(void)

{
	
	const char basedigits[16]={
							'0','1','2','3','4','5',
							'6','7','8','9','A','B',
							'C','D','E','F'
							   };
	int convertedNumber[64];
	long int numberToconvert;
	int nextDigit,base,index=0;
	
	//get the number and base
	
	printf("Number to be converted?");
	scanf("%ld",&numberToconvert);
	printf("Base?");
	scanf("%i",&base);
	
	//convert to the indicated base
	
	do
	{
		convertedNumber[index]=numberToconvert%base;
		++index;
		numberToconvert=numberToconvert/base;
	}
	while(numberToconvert!=0);
	
	//display the results in reverse order
	
	printf("Converted Number = ");
	
	for(--index;index>=0;--index)
	{
		nextDigit=convertedNumber[index];
		printf("%c",basedigits[nextDigit]);
	}
	
	printf("\n");`
	return 0;
	
}

/* Chapter 7:program 7.1*/

//Working with an Array

/*Babu K DBS*/

#include<stdio.h>

int main(void)

{
	int value[10];
	int index;
	
	value[0]=197;
	
	value[2]=-100;
	
	value[5]=350;
	
	value[3]=value[0]+value[5];
	
	value[9]=value[5]/10;
	
	--value[2];
	
	for(index=0;index<10;++index)
	
	printf("Value[%i] = %i\n",index,value[index]);
	
	return 0;
}

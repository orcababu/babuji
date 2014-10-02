#include<stdio.h>

int minimum(int values[],int numberofelements)

{
	
	int i,min_value;
	
	min_value=values[0];
	
	for(i=0;i<numberofelements;i++)
	
	
		
		if(values[i]<min_value)
		
			min_value=values[i];
					
	
	return min_value;
	
}
int main(void)

{
	
	int array1={45,24,-23,-51,65};
//	int array2={2,3,5,9,8,7,6};
	
	int numberofelements;
	
	int minimum(int values[],int numberofelements);
	
	printf("Minimum value of array1 = %i\n",minimum(array1,5));
	
	return 0;
	
}

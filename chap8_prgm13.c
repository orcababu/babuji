/* Chapter 8:program 8.13*/

//program Using Multidimensional Arrays and Functions

/*Babu K DBS*/

#include<stdio.h>

int main(void)

{
	
	int scalar;
	
	int samplematrix[3][5]={
	
							{7,21,6,9,5	},
							{4,12,18,31,8},
							{13,7,5,8,3}
						};
						
	void scalarmultiply(int matrix[3][5],int scalar);
	
	void displaymatrix(int matrix[3][5]);
	
	printf("Original matrix\n");
	displaymatrix(samplematrix);
	
	scalarmultiply(samplematrix,2);
	
	printf("Multiply by 2\n");
	displaymatrix(samplematrix);
	
	scalarmultiply(samplematrix,-1);
	
	printf("Then multiply by -1\n");
	
	displaymatrix(samplematrix);
	
	return 0;
}

void scalarmultiply(int matrix[3][5],int scalar)
{

	int row,column;
	
	for(row=0;row<3;row++)
		for(column=0;column<5;column++)
			matrix[row][column]*=scalar;
}

void displaymatrix(int matrix[3][5])
{
	int row, column;
	
	for(row=0;row<3;row++)
	{
	
		for(column=0;column<5;column++)
			printf("%5i ",matrix[row][column]);
			
		printf("\n");
	}
}


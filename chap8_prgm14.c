/* Chapter 8:program 8.14*/

//program Using Multidimensional Arrays and Functions

/*Babu K DBS*/

#include<stdio.h>

int main(void)
{
	
	void scalarmultiply(int nRows,int nCols,int matrix[nRows][nCols],int scalar);
	void displaymatrix(int nRows,int nCols,int matrix[nRows][nCols]);
	
	int samplematrix[3][5]={
							{5,6,8,7,9	},
							{8,9,7,6,4	},
					   		{2,6,9,7,4  }					   
					   };
	printf("Original matrix\n");
	displaymatrix(3,5,samplematrix);
	
	scalarmultiply(3,5,samplematrix,2);
	
	printf("Scalar multiply matrix\n");
	displaymatrix(3,5,samplematrix);
	
	scalarmultiply(3,5,samplematrix,-1);
	printf("\nThen multiply by -1\n");
	displaymatrix(3,5,samplematrix);
	
	
	return 0;
	
}

void scalarmultiply(int nRows,int nCols,int matrix[nRows][nCols],int scalar)

{

	int row,column;

	for(row=0;row<nRows;row++)

	for(column=0;column<nCols;column++)
		matrix[row][column]*=scalar;
	
}

void displaymatrix(int nRows,int nCols,int matrix[nRows][nCols])

{

	int row,column;
	
	for(row=0;row<nRows;row++)
	
	{
	
	for(column=0;column<nCols;column++)

		printf("%5i ",matrix[row][column]);

	printf("\n");
	
	}
}



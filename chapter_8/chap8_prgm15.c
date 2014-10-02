/* Chapter 8:program 8.15*/

//

/*Babu K DBS*/

#include<stdio.h>

int main(void)

{
	
	void scalarmultiply(int nRows, int nCols, int matrix[nRows][nCols], int scalar);
	
	void displaymatrix(int nRows, int nCols, int matrix[nRows][nCols])	;
	
	int samplematrix[3][5]={
								{ 7, 16, 55, 13, 12},
								{ 12, 10, 52, 0, 7 },
								{ -2, 1, 2, 4, 9   }							
							};
	printf("Original matrix\n");
	displaymatrix(3, 5, samplematrix);
	
	scalarmultiply(3, 5, samplematrix, 2);
	printf("\nMultiplied by 2\n");
	displaymatrix(3, 5, samplematrix);
	
	scalarmultiply(3, 5, samplematrix, -1);
	printf("\nThen multiplied by -1:\n");
	displaymatrix( 3, 5, samplematrix);
	
	return 0;
		
}

//function to multiply a matrix by a scalar

void scalarmultiply (int nRows, int nCols, int matrix[nRows][nCols], int scalar)

{
	
	int row, column;
	
	for ( row=0; row<nRows; ++row)
		for ( column=0; column < nCols ; ++column )
			matrix[row][column]*=scalar;
						
}

void displaymatrix ( int nRows, int nCols, int matrix[nRows][nCols])

{
	
	int row, column;
	
	for ( row=0; row < nRows; ++row){
	
		for(column=0; column < nCols; ++column )
			printf ("%5i", matrix[row][column]);
			
	printf("\n");
	
}
}



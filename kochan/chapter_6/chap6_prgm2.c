/* Chapter 6:program 6.2*/

/*Program to calculate the average of a set of grades and count
the number of failing test grades */

/*Babu K DBS*/


#include<stdio.h>

int main(void)

{
	
	int grade,n,i;
	
	int gradetotal=0;
	
	int failurecount=0;
	
	int average;
	
	printf("how many number of grades will be entering\n");
	scanf("%i",&n);
	
	for(i=1;i<=n;i++)
	
	{
		printf("Enter the grade : ");
		
		scanf("%i",&grade);
		
		gradetotal+=grade;
		
		printf("\n\n");
		
		if(grade<65)
		
		{
		
			failurecount++;
		
		}
		
	}
	
	average=gradetotal/n;
	
	printf("Failure count = %i\n",failurecount);
	
	printf("Average of the total grade = %i\n",average);
	
	return 0;
}

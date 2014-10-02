//the value of triangularNumber is returned by the function

//Babu K DBS

#include<stdio.h>

int main(void)

{
	
	int k;
	
	printf("Enter the number to get the triangular number\n");

	scanf("%i",&k);
	
	printf("The triangular number of %i is %i\n",k,calculatetriangularnumber(k));
	
	return 0;
	
}

int calculatetriangularnumber(int n)

{

	int i,triangularnumber = 0;

	for(i=0;i<=n;i++)

		triangularnumber+=i;

	return(triangularnumber);

}

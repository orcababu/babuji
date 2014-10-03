//summation of set of n numbers

//Babu  K DBS

#include<stdio.h>

int main(void)

{

	int i,j,n,sum=0;

	printf("Enter the number of elements to sum\n");

	scanf("%i",&n);

	int a[n];

	printf("Enter the %i numbers",n);

	for(i=0;i<n;i++)

		scanf("%i",&a[i]);
		

	for(i=0;i<n;i++)	

	{

		sum=sum+a[i];

	}

	printf("The sum of entered numbers is %i",sum);
	
	return 0;

}

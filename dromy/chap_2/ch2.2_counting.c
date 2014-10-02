//program to count the pass mark getting student

//chapter 2.2 example algorithm implementation

//Babu K DBS

#include<stdio.h>

int main(void)
{
	int n,i;
	int read(int a[],int n);
	printf("Enter the number of students ");
	scanf("%i",&n);
	int a[n];
	printf("Enter the %i marks\n",n);
	for(i=0;i<n;i++)
		scanf("%i",&a[i]);
	
	read(a,n);
}

int read(int a[],int n)
{
	int i;
	int current_count=0,previous_count=0;
	for(i=0;i<n;i++)
	{
		if(a[i]>=50)
		{
			current_count=previous_count+1;
			previous_count=current_count;
		}
	}
	printf("The number of students passed from %i students is : %i\n",n,current_count);
}


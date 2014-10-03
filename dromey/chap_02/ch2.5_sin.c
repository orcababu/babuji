#include<stdio.h>

int main(void)
{
	
	int i,fp=1,j=0,x;
	printf("Enter the number to calculate sin value");
	scanf("%i",&x);
	for(i=0;i<x;i++)
	{
		while(j<i)
		{
			j=j+1;
			fp=fp*x/j;
		}
	}
	
	printf("sin(%i) = %i",x,fp);
}

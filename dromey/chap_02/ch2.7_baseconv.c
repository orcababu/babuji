//program for base conversion from decimal others

//Babu K DBS

#include<stdio.h>

int main(void)

{

	int n;
	
	int q;
	
	int r;
	
	int index;
	
	int base;
	
	int i;
	
	int a[100];
		
	char basedigit[16]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
	
	printf("Enter the number (base 10) :\n");
	scanf("%i",&n);
	
	printf("Enter the base to convert :\n");
	scanf("%i",&base);
	
	q=n;
	i=0;
			
	while(q!=0)
		
		{

			r=q%base;

			q=q/base;

			a[i]=r;

			index=i;

			i++;

		}
				
		if(base<=10)	
		
		{
			
			for(i=index;i>=0;i--)
		
			{
		
				printf("%i",a[i]);
		
			}
		
			printf(" with base %i",base);
		
		}
		
		else if(base>10)
		
		{
		
			for(i=index;i>=0;i--)
		
			{
				int j;
		
				j=a[i];
		
				printf("%c",basedigit[j]);
		
			}
		
			printf(" with base %i",base);
		
		}	
	return 0;
}

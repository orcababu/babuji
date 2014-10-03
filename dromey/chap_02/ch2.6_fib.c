

#include<stdio.h>

int main(void)
{
	int i,n;
	printf("Enter the limit of fibonacci serious\n");
	scanf("%i",&n);
	
	int a[n],fib;
	
	a[0]=0;
	a[1]=1;
	printf("Fibonassi serious\n");
	printf("%i\n%i\n",a[0],a[1]);
	for(i=2;i<=n;i++)
	{
		a[i]=a[i-1]+a[i-2];
		//fib=a[i-1]+a[i-2];
		printf("%i\n",a[i]);
	}
	
	return 0;
}

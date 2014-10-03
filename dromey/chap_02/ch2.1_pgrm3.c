//sorting without using the third variable

//Babu K DBS

#include<stdio.h>

int main(void)

{
	int a,b;
	
	printf("Entet the two values a and b\n");

	scanf("%i%i",&a,&b);
	
	printf("Before sorting :\na = %i\nb = %i\n",a,b);
	
	a=a+b;
	
	b=a-b;
	
	a=a-b;
	
	printf("After sorting : \na = %i\nb = %i\n",a,b);

}

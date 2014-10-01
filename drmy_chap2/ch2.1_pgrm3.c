//sorting without using the third variable for sorting

//Chapter 2.1 excercise 2.1.3

//Babu K DBS

#include<stdio.h>

int main(void)

{
	int a,b;
	//a=5,b=3;
	printf("Entet the two values a and b\n");
	scanf("%i%i",&a,&b);
	printf("Before sorting :\na = %i\nb = %i\n",a,b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("After sorting : \na = %i\nb = %i\n",a,b);
}

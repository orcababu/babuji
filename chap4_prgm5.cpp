#include<stdio.h>
int main(void)
{
	float f1=123.125,f2;
	
	int i1,i2=-150;
	
	char c='a';
	
	i1=f1; //floating to integer conversion
	
	printf("%f assigned to an int produces %i\n",f1,i1);
	
	f1=i2;
	printf("%i assigned to an float produces %f\n",i2,f1);
	
	f1=i2/100;
	printf("%i divided by 100 produces %f\n ",i2,f1) ;
	
	f2=i2/100.0;
	printf("%f divided by 100.0 proces %i\n",f2,i2);
	
	f2=(float)i2/100;
	printf("(float) %i divided by 100 produces %f\n",i2,f2);
	
	return 0;
}
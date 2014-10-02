/* Chapter 5:program 4*/

/*Program in triangular number by giving input*/

/*Babu K DBS*/

#include<stdio.h>

int main(void)

{
	int n,number,triangularnumber;
	
	triangularnumber=0;
	
	printf("What triangular do u want ?\n");
	
	scanf("%i",&number);
	
	for(n=0;n<=number;n++)

	{

		triangularnumber+=n;		

	}

	printf("the triangularnumber for %i is %i\n",number,triangularnumber);
	
	return 0;

}

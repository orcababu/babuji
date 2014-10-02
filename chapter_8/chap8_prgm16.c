/* Chapter 8:program 8.16*/

//converting the number to corresponding base number

/*Babu K DBS*/

#include<stdio.h>

int convertednumber[64];

long int numbertoconvert;

int base;

int digit = 0;

void getnumberandbase (void)

{
	
	printf ("Number to be converted? ");
	scanf ("%li", &numbertoconvert);
	
	printf("Base? ");
	scanf("%i", &base);
	
	if(base<2||base>16)
	{
		printf ( "Bad base - must be between 2 and 16\n");
		base = 10;
		
	}
	
}

void convertnumber(void)

{
	
	do
	{
		convertednumber[digit]=numbertoconvert % base;
		++digit;
		numbertoconvert /= base;
	}
	while ( numbertoconvert !=0 );
	
}

void displayconvertednumber (void)

{
	
	const char basedigits[16] =
	{
		'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F' };
		
		int nextdigit;	
	
	printf("Converted number\n");
	
	for(--digit; digit >=0; --digit)
	
	{
		
		nextdigit = convertednumber[digit];
		
		printf ("%c", basedigits[nextdigit]);				
	
	}
	
	printf ("\n");
}


int main(void)

{
	
	void getnumberandbase (void);
	void convertnumber (void);
	void displayconvertednumber (void);

	getnumberandbase ();
	convertnumber ();
	displayconvertednumber ()	;
	
	return 0;
	
}

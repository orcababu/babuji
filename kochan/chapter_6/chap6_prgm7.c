/* Chapter 6:program 6.7*/

// Program to categorize a single character that is entered at the terminal

/*Babu K DBS*/


#include<stdio.h>

int main(void)

{
	char c;
	
	printf("Enter a character\n");
	
	scanf("%c",&c);
	
	if((c>='a'&&c<='z')||(c>='A'&&c<='Z'))
	
		printf("The entered item is a alphabet\n");
		
	else if(c>='0'&&c<='9')
	
		printf("The entered item is a number\n");
		
	else
	
		printf("The entered item is a special character\n");
}

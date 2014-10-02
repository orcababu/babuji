#include<stdio.h>

int main(void)
{
	char c;
	
	char upper;
	
	printf("Enter lowercase character to convert into Upper case letter");
	
	scanf("%c",&c);
	
	upper=c-'a'+'A';
	
	printf("The uppercase = %c",upper);
	
}

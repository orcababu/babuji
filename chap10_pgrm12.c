// Function to determine if two strings are equal

//excescise 1 chap 10

//Babu K DBS

#include<stdio.h>
#include<stdbool.h>

bool equalstrings(const char s1[], const char s2[])

{
	int i=0;
	bool areequal;
	char l=
	while ( s1[i] == s2[i] && s1[i] != '\0' )
	//while(s1[i]==s2[i]&&s1[i]!='\0'&&s2[i]!='\0')
	
		++i;
		
	if(s1[i]=='\0'&&s2[i]=='\0')
			
			areequal=true;
	
	else
	
			areequal=false;
			
	return areequal;
}

int main(void)

{
	bool equalstrings(const char s1[], const char s2[]);

	const char stra[]	="String compare test";
	
	const char strb[]	="string";
	
	printf("%i\n",equalstrings(stra,strb));
	printf("%i\n",equalstrings(stra,stra));
	printf("%i\n",equalstrings(strb,"string"));
	
	return 0;
	
}

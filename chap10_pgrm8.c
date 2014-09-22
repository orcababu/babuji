//Counting Words in a Piece of Text

//program 10.8

//Babu K DBS

#include<stdio.h>

#include<stdbool.h>

void readline (char buffer[])
{
	char character;
	int i = 0;
	do
	{
		character = getchar ();
		buffer[i] = character;
		++i;
	}
	while ( character != '\n' );
	buffer[i - 1] = '\0';
}

bool alphabetic (const char c)
	{
	
		if ( (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') )
	
			return true;
	
		else
	
			return false;
	}
/* Function to count the number of words in a string */
int countwords (const char string[])
	{
		int i, wordCount = 0;
	
		bool lookingForWord = true, alphabetic (const char c);
	
		for ( i = 0; string[i] != '\0'; ++i )
	
			if ( alphabetic(string[i]) )
		
			{
		
			if ( lookingForWord )
		
			{
		
				++wordCount;
			
				lookingForWord = false;
		
			}
		
			}
		
			else
		
				lookingForWord = true;
	
			return wordCount;
	
	}

int main(void)

{
	char text[81];
	int totalwords=0;
	int countwords(const char string[]);
	void readline(char buffer[]);
	bool endoftext=false;
	
	printf("Type in your text.\n");
	printf("When you are done, press 'RETURN'.\n");
	
	while(!endoftext)
	{
		readline(text);
		
		if(text[0]=='\0')
	
			endoftext=true;
	
		else
	
			totalwords+=countwords(text);
			
	}
	
	printf("\nThere are %i words in the above text.\n",totalwords);
	
	return 0;

}

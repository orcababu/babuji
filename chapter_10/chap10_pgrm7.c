//program to count the word in a line

//program 10.7

//Babu K DBS

#include<stdio.h>

#include<stdbool.h>

bool alphabetic(const char c)
{
	
	if((c>='a'&&c<='z')||(c>='A'&&c<='Z'))
	
		return true;
	
	else

		return false;

}

int countwords(const char string[])

{
	int i,wordcount=0;
	
	char ary[]={"~!@#$%^&*()'?><\{}[];:"};
	
	char isspclchar(const char ch);
	
	bool lookingforword=true,alphabetic(const char c);

	for(i=0;string[i]!='\0';++i)	

		if(alphabetic(string[i]))

		{

			if(lookingforword)

			{			
				++wordcount;

				lookingforword=false;

			}

		}

		else
			
			lookingforword=true;
	
	return wordcount;
	
}

int main(void)
{
	
	const char text1[]={"hi,how,you,doing"};
	const char text2[]={"Ya'i'am doing fine"};
	int countwords(const char string[]);
	
	printf("%s - words : %i",text1,countwords(text1));
	printf("%s - words : %i",text2,countwords(text2));
	
	return 0;
}

//program with function called substring to extract a portion of a character string.

//program 10.14

//Babu K DBS

#include<stdio.h>

int main(void)

{

	char substring(char source[],int start,int count);
	
	//char res[5];
	
	substring("character",4,5);
	
	//printf("The result is %s",substring("character",4,3));
	
	return 0;

}

char substring(char source[],int start,int count)

{
	int i;

	char str1[count];
	
	for(i=0;i<count;i++)

	{

		str1[i]=source[start];
		
		++start;
		
	//	printf("count : %i, i : %i, %s\n",count,i,str1);

	}
	str1[i]='\0';
	printf("%s",str1);

	//return str;

}

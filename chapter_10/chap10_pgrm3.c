//Concatenating Character Strings

//program 10.3

//Babu K DBS

#include<stdio.h>

int main(void)

{

	void concat(char result[], const char s1[],const char s2[]);
	
	const char s1[]={"Welcome "};
	
	const char s2[]={"Kochan"};
	
	char s3[20];
	
	concat(s3,s1,s2);
	
	printf("%s\n",s3);
	
	return 0;
	
}

void concat(char result[],const char s1[],const char s2[])

{
	int i,j;
	
	for(i=0;i<s1[i]!='\0';i++)
	
		result[i]=s1[i];
		
	for(j=0;j<s2[j]!='\0';j++)
	
		result[i+j]=s2[j];
		
	result[i+j]='\0';
		
}


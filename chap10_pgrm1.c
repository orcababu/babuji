// Function to concatenate two character arrays

//program 10.1

//Babu K DBS


#include<stdio.h>

void concat(char result[],const char str1,int n1,const char str2,int n2)
{
	int i,j;
	for(i=0;i<n1;i++)
		result[i]=str1[i];
	
	for(j=0;j<n2;j++)
		result[n1+j]=str2[j];
		
	for(i=0;i<11;i++)
	{
		printf("%i",result[i]);
	}
}

int main(void)

{
	void concat(char result[],const char str1[],int n1,const char str2[],int n2);
	
	const char str1[5]	={'G','o','o','d',' '};
	const char str2[7]={'M','o','r','n','i','n','g'};
	int i;
	char str3[11];
	
	concat(s3,s1,5,s2,7);
	
	return 0;
}

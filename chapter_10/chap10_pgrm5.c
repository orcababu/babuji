// Program to illustrate the %s scanf format characters

//program 10.5

//Babu K DBS

#include<stdio.h>

int main(void)

{
	char s1[50],s2[40],s3[50];
	
	printf("Enter the text here\n");
	
	scanf("%s%s%s",s1,s2,s3);
	
	printf("\ns1=%s\ns2=%s\ns3=%s",s1,s2,s3);
	
	return 0;
}

//function called findString to determine if one character string exists inside another string.

//program 10.15

//Babu K DBS

#include<stdio.h>

int main(void)

{
	
	void findstring(const char s1[],const char s2[]);
	
	findstring("a chattered","hat");
	
}

void findstring(const char s1[],const char s2[])

{

	printf("s1 = %s\ns2 = %s\n\n",s1,s2);
	
	int i=0,k=0,j=0;

	int position[5];
		
	while(s1[i]!='\0'&&s2[j]!='\0')
	
	{		
		
		if(s1[i]==s2[j])
		
		{
				
			position[k]=i;

			++i,++j;
			
			++k;
			
		//	printf("k : %i\n",k);
	
		}
		
		else
		
		i=i+1;
		
	};
	
	printf("str1 : %s , str2 : %s , position = %i , no of char = %i\n",s1,s2,position[0],k);

}

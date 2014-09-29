//program 10.

#include<stdio.h>

int main(void)

{
	void insertstring(char src[],const char txt[],int k);
	
	char src[]={"The wrong son"};
	
	printf("The string is : %s\n\n",src);
	
	printf("The size of the string is %i\n\n",sizeof(src));
	
	insertstring(src,"per",10);
	
	return 0;
}

void insertstring(char src[],const char txt2[],int k)
{
	printf("Sizeof(src) : %i",sizeof("The wrong son"));
	int i,j,l;
	char temp[sizeof(txt2)];
	int size=sizeof(src)+sizeof(txt2);
	
	printf("the size of total string value is %i",size);
	
	char str1[size];
	//char str1[sizeof(src)+sizeof(txt2)];
	//for(;txt2[i]!='\0';)
	printf("\n%i\n%i\n%i\n",sizeof(str1),sizeof(src),sizeof(txt2));
	
		for(i=0,j=0;txt2[j]!='\0';i++)
		
		{
			temp[i]=str1[k];
			str1[k]=txt2[j];
			k++;
			j++;
		}
		
		for(l=0;temp[l]!='\0';l++,k++)
		{
			str1[k]=temp[l];
			
		}
		
		printf("The result string is %s\n",str1);
		
	//	return 0;
		
}

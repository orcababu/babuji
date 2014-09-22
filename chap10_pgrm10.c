//program to convert string to integer

//program 10.10

//Babu K DBS

#include<stdio.h>


int strtoint(const char string[])

{
	int i;
	int intvalue,result=0;
	for(i=0;string[i]>='0'&&string[i]<='9';i++)
	{
		intvalue=string[i]	-'0';
		result=result*10+intvalue;
	}
	return result;
	
}

int main(void)

{
	int strtoint(const char string[]);
	
	printf("%i\n",strtoint("245"));
	printf("%i\n",strtoint("100")+25);
	printf("%i\n",strtoint("13x5"));
	
	return 0;
}

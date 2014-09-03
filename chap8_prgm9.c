/* Chapter 8:program 8.9*/

//findin minimum value from array of values

/*Babu K DBS*/

int minimumvalue(int min_val[10])
{
	int m_value,i;
	
	m_value=min_val[0];
	for(i=0;i<10;i++)
	{
		if(min_val[i]<m_value)
			m_value=min_val[i];
	}
	return m_value;
}

#include<stdio.h>
int main(void)
{


	int i,result;
	int scores[10];
	int minimumvalue(int min_val[10]);
	
	printf("Enter 10 values\n");
	for(i=0;i<10;i++)
			
	scanf("%i\n",&scores[i]);
		
	result=minimumvalue(scores);
	printf("The minimum value among the list is %i\n",result);
}


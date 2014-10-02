//calculating cgpa of total number of students using rms

//Babu K DBS

//Classwork sum

#include<stdio.h>

int main(void)

{
	int n,i;
	float calculate_sqr(int marks[],int n);
	
	printf("Enter the number of students \n");
	scanf("%i",&n);
	int marks[n];
	printf("Enter the marks of %i studnets\n",n);
	
	for(i=0;i<n;i++)
		scanf("%i",&marks[i]);
		
	calculate_sqr(marks,n);
	
}
float calculate_sqr(int ary[],int num)
{
	
	int sum=0;
	float avg;
	int i,n;
	n=num;
	float squareroot(float sum);
	
	for(i=0;i<num;i++)
	{
		ary[i]=ary[i]*ary[i];
	}
	printf("Calculating the average of number squares....\n\n\n");
	
	for(i=0;i<n;i++)
	{
//		printf("The avg mark of total students\n");
		sum+=ary[i];
	}
	//printf("The avg mark of total students %i\n",sum/n);
	avg=sum/n;
	printf("Avg : %f",squareroot(avg));
}

float squareroot(float x)
{
	const float epsilon=0.00001;
	float guess=1.0;
	//printf("Hi i am squareroot function\n");
	float absolutevalue(float x);
	
	while(absolutevalue(guess*guess-x)>=epsilon)

	guess=(x/guess+guess)/2.0;
	//printf("Hi i am end of squareroot function %f \n",absolutevalue(guess*guess-avg));
	return guess;
}

float absolutevalue(float x)
{
	//printf("Hi i am absolute function\n");
	if(x<0)
		x=-x;
	//printf("Hi i am end of squareroot function\n");
	return x;
}



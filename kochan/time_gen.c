/* Time program*/

/*Babu K DBS*/

#include<stdio.h>
#include<math.h>
int main(void)
{
	int i,n,t,k;
	int min,hr,sec;
	printf("Time generating system\n");
	printf("Enter the seconds to calculate it into hrs\n");
	scanf("%d",&n);
	
	
	hr=n/3600;
	min=hr/60;
	t=n%3600;
	sec=t%60;
	printf("HH:MM:SS \n%i:%i:%i\n",hr,min,sec);
	
	return 0;
	
	
	
}

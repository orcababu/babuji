//program to calculate the clockkeeper function with dateandtime structure

//Babu K DBS

//program ex : 9.5

#include<stdio.h>

struct dateandtime

{

	struct date sdate;
	
	struct time stime;

};

int main(void)
{
	
	struct dateandtime event =
		{ 
			{ .month = 2, .day = 1, .year = 2004 },
			{ .hour = 3, .minutes = 30, .seconds = 0 }
		};
	
	printf("Enter the date to set (dd mm yyyy) :\n");
	scanf("%i%i%i",event.sdate);
	
	
}

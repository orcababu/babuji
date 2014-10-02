#include<stdio.h>

int main(void)

{
	
	struct date
	{
		int day;
		int month;
		int year;
		
	};
	
	struct date today,*dtptr;
	
	dtptr=&today;
	
	dtptr->day=5;
	dtptr->month=4;
	dtptr->year=2005;
	
	printf("Date : %i / %i / %.2i",dtptr->day,dtptr->month,dtptr->year%100);
	
	//return 0;
	
}

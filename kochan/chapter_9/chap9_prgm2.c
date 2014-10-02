//program to findout tomorrow's date using structure

//Babu K DBS

//program 9.2

#include<stdio.h>

int main(void)
{
	struct date
	{
		int day;
		int month;
		int year;
		
	};
	
	struct date today,tomorrow;
	printf("Enter the date to calculate tomorrow's date : dd mm yyyy\n");
	scanf("%i%i%i",&today.day,&today.month,&today.year);
	
	int dayspermonth[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	
	if(today.day!=dayspermonth[today.month-1])
	{
		tomorrow.day=today.day+1;
		tomorrow.month=today.month;
		tomorrow.year=today.year;
	}
	else if(today.month==12)
	{
		
		tomorrow.day=1;
		tomorrow.month=1;
		tomorrow.year=today.year+1;
		
	}
	else
	{
		tomorrow.day=1;
		tomorrow.month=today.month+1;
		tomorrow.year=today.year;
	}
	
	printf("Tomorrow date is %i / %i / %i\n",tomorrow.day,tomorrow.month,tomorrow.year);
}

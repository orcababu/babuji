//program to findout tomorrow's date using structure with leap year

//Babu K DBS

//program 9.3

#include<stdio.h>
#include<stdbool.h>

	struct date
	{
		int day;
		int month;
		int year;
		
	};

struct date dateupdate(struct date today)
{

	struct date tomorrow;
	int numberofdays(struct date d);
	
	
	if(today.day!=numberofdays(today))
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
	
		return tomorrow;
}
	int numberofdays(struct date d)
	{
		int days;
		const int dayspermonth[12]={31,28,31,30,31,30,31,31,30,31,30,31} ;
		
		bool isLeapyear(struct date d);
		
		if(isLeapyear(d)==true&&d.month==2)
		
			days=29;
		
		else
		
			days=dayspermonth[d.month-1];
		
		return days;
	}
	
	bool isLeapyear(struct date d)
	{
		bool leapyearflag;
		
		if((d.year%4==0&&d.year%100!=0)||d.year%400==0)
			
			leapyearflag=true;
		
		else
		
			leapyearflag=false;
		
		return leapyearflag;
	}
int main(void)
{
	struct date dateupdate(struct date today);
	struct date thisday,nextday;
	
	printf("Enter the today's date (dd mm yyyy) : ");
	scanf("%i%i%i",&thisday.day,&thisday.month,&thisday.year);
	
	nextday = dateupdate(thisday);
	
	printf("Tomorrow's date is %i / %i / %i\n",nextday.day,nextday.month,nextday.year);

	return 0;
		
}

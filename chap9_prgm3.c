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

int main(void)
{

	struct date today,tomorrow;
	int numberofdays(struct date d);
	
	
	printf("Enter the date to calculate tomorrow's date : dd mm yyyy\n");
	scanf("%i%i%i",&today.day,&today.month,&today.year);
	
	
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
	
	printf("Tomorrow date is %i / %i / %i\n",tomorrow.day,tomorrow.month,tomorrow.year);
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


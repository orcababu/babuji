//Updating the Time by One Second

//program 9.5

//Babu K DBS

#include<stdio.h>

struct time
{
	int seconds;
	int minutes;
	int hours;
};

int main(void)
{

	struct time timeupdate(struct time now)	;
	
	struct time currenttime, nexttime;
	
	printf("Enter the time (hh : mm : ss) : ");
	scanf("%i%i%i",&currenttime.hours,&currenttime.minutes,&currenttime.seconds);
	
	nexttime=timeupdate(currenttime);
	
	printf("Update time is %i : %i : %i\n",nexttime.hours,nexttime.minutes,nexttime.seconds);
	
	return 0;
}
struct time timeupdate(struct time now)
{
	++now.seconds;
	
	if(now.seconds==60)
	{
		now.seconds=0;
		++now.minutes;
	}
	if(now.minutes==60)
		{
			now.minutes=0;
			++now.hours;
		}
		if(now.hours==24)
			
		{
			now.hours=0;	
		}
		
	return now;
}

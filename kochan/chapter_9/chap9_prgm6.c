#include<stdio.h>

struct date
{
	int hours;
	int minutes;
	int seconds;
};

int main(void)

{
	struct time timeupdate(struct time now);
	
	struct time testtime[5]={ { 11, 59, 59 }, { 12, 0, 0 }, { 1, 29, 59 },{ 23, 59, 59 }, { 19, 12, 27 }};
	
	int i;
	
	for(i=0;i<5;++i)

	{
	
		printf("Time is %i / %i / %i", testtime[i].hours,testtime[i].minutes,testtime[i].seconds);
		
		testtime[i]=timeupdate(testtime[i]);
		
		printf(" ....One second later it's %.2i:%.2i:%.2i", testtime[i].hours,testtime.minutes,testtime.seconds);
	}
	
	return 0;
}

struct time timeupdate (struct time now)
{
	++now.seconds;
	
	if ( now.seconds == 60 ) 

	{ // next minute
 
 	now.seconds = 0;

	++now.minutes;

		if ( now.minutes == 60 )

		{ // next hour

			now.minutes = 0;

			++now.hour;

			if ( now.hour == 24 ) // midnight

			now.hour = 0;

		}

	}

return now;

}


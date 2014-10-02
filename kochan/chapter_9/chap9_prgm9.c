#include<stdio.h>

struct time
{
	int seconds;
	int minutes;
	int hours;
	int sec;
	int min;
	int hr;
	int temp1;
	int temp2;
	
};

int main(void)
{
	struct time time1,time2,res;
	res.sec=0,res.min=0,res.hr=0;
	res.temp2=0;
	printf("Enter the first time (hh mm ss)\n");
	scanf("%i%i%i",&time1.hours,&time1.minutes,&time1.seconds);
	
	printf("enter the second time (hh mm ss)\n");
	scanf("%i%i%i",&time2.hours,&time2.minutes,&time2.seconds);
	
	if(time2.seconds>time1.seconds)
			
		res.sec=time2.seconds-time1.seconds;
	
	else if(time2.seconds<time1.seconds)
	{
		res.sec=60-time1.seconds;
		res.sec=res.sec+time2.seconds;
	}
	
	
	
	
	if(time2.minutes>time1.minutes)
			
		res.min=time2.minutes-time1.minutes;
	
	else if(time2.minutes<time1.minutes)
	{
		res.min=60-time1.minutes;
		res.min=res.min+time2.minutes;
		--res.hr;
		res.temp2=res.hr;
	}
	
		/*res.sec=res.sec+time2.seconds;
		if(res.sec>60)
		{
			res.sec=res.sec-60;
			++res.min;
			res.temp1=res.min;
		}
		else
			res.temp1=0;
	}*/
	
	/*if(time1.minutes<60)
	
	{
		int n;
		
		res.min=60-time1.minutes;
		res.min=res.min+time2.minutes;
		if(res.min>60)
		{
			res.min=time1.minutes-60;
			++res.hr;
			res.temp2=res.hr;
		}
		else
			res.temp2=0;
	}
	*/
	if(time1.hours<time2.hours)
	{
		res.hr=time2.hours-time1.hours;
		res.hr+=res.temp2;	
	}
	
	else if(time1.hours>time2.hours)
		{
			res.hr=12-time1.hours;
			res.hr+=time2.hours;
			
		}
	printf("The difference between the %i:%i:%i  &  %i:%i:%i is %i:%i:%i\n",time1.hours,time1.minutes,time1.seconds,time2.hours,time2.minutes,time2.seconds,res.hr,res.min,res.sec);
}

// Program to illustrate a structure

//program 9.1

//Babu K DBS

#include<stdio.h>

int main(void)

{
	
	struct date
	{
		int day;
		int month;
		int year;
	};
	
	struct date today;
	today.day=25;
	today.month=5;
	today.year=2014;
	
	printf("Today's Date is %i /%i /%i",today.day,today.month,today.year);
}

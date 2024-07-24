#include <stdio.h>

int main(void)
{
	//int today_year, today_month, today_day;
	struct date today;
	
	//int today_year = 2024;
	//int today_month = 7;
	//int today_day = 12;
	today.year = 2014;
	today.month = 7;
	today.day = 12;
	
	//int birthday_year = 1995;
	//int birthday_month = 5;
	//int birthday_day = 3;
	struct date birthday = {1995, 5, 3};
	
	//int tmp_year;
	//int tmp_month;
	//int tmp_day;
	struct date tmp;
	
	//tmp_year = today_year;
	//tmp_month = today_month;
	//tmp_day = today_day;
	tmp = today;
	
	//printDate(today_year, today_month, today_day);
	//printDate(birthday_year, birthday_month, birthday_day);
	printDate(&today);
	printDate(&birthday);
	return 0;
}

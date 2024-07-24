#include <stdio.h>
void printDate(int year, int month, int day)
{
	printf("(%d/%d/%d)\n", year, month, day);
}

int main(void)
{
	int today_year = 2024;
	int today_month = 7;
	int today_day = 12;
	
	int birthday_year = 1995;
	int birthday_month = 5;
	int birthday_day = 3;
	
	int tmp_year;
	int tmp_month;
	int tmp_day;
	
	tmp_year = today_year;
	tmp_month = today_month;
	tmp_day = today_day;
	
	printDate(today_year, today_month, today_day);
	printDate(birthday_year, birthday_month, birthday_day);
	return 0;
}

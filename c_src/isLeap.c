#include <stdio.h>

int main(void)
{
	printf("Input year : ");
	int year;
	scanf("%d", &year);
	
	int Leap = (year % 4 == 0 && year % 100 != 0 || year % 400 == 0);
	//int Leap = (year % 400 == 0 || year % 100 != 0 && year % 4 == 0);       //short-cut cirult
	
	printf("%d is a leap year : %d\n", year, Leap);

	return 0;
}

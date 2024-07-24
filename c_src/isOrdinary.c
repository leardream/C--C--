#include <stdio.h>

int main(void)
{
	printf("Input year : ");
	int year;
	scanf("%d", &year);
	
	//int Leap = (year % 4 == 0 && year % 100 != 0 || year % 400 == 0);
	int isOrdinary = !(year % 4 == 0 && year % 100 != 0 || year % 400 == 0);
	printf("%d is a ordinary year : %d\n", year, isOrdinary);

	return 0;
}

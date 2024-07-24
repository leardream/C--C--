#include <stdio.h>

int main(void)
{
	int ko, en, ma;
	double average;
	printf("입력 ko, en, ma : ");
	
	scanf("%d %d %d", &ko, &en, &ma);
	average = (double)(ko+en+ma)/3.0;
	
	printf("평균: %.2f\n", average); 
	return 0;
}

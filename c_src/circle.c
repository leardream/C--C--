#include <stdio.h>

int main(void)
{
	//int radius;
	double radius;
	printf("input radius : ");
	//scanf("%d", &radius);
	scanf("%f", &radius);
	double area = 3.14592 * radius * radius;
	
	printf("area: %.2f\n", area);
	return 0;
}

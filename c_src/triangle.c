#include <stdio.h>

int main(void)
{
	int width, Height;
	double Area;
	
	scanf("%d %d", &width, &Height);
	Area = (width*Height)/2.0;
	
	printf("Area: %.2f\n", Area); 
	
	return 0;
}

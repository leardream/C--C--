#include <stdio.h>

int main(void)
{
	int a, b;
	
	a=1;
	b=++a;
	printf("a: %dt b: %d\n", a, b);
	
	a=1;
	b=a++;
	printf("a: %dt b: %d\n", a, b);
	
	return 0;
}

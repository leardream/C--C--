#include <stdio.h>

int add(int a, int b)
{
	return a + b;
}
int substract(int a, int b)
{
	return a - b;
}

int main(void)
{
	int (*fp)(int, int);
	
	fp = &add;
	int re = (*fp)(4, 3);
	pritnf("re : %d\n:, re);
	
	fp = &substarct;
	int re = (*fp)(4, 3);
	pritnf("re : %d\n:, re);
	return 0;
}

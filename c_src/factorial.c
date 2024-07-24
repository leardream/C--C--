#include <stdio.h>

long long factorial(int n)
{
	long long result = 1LL;
	for (int i = 2; i <=n; ++i) {
		result = result * i;		// result *= i;
	}
	return result; 
}

int main(void)
{
	for (int i = 1; i <= 100; ++i) {
		//int result = i!;
		long long result = factorial(i);		
		
		printf("%d! = %lldLL\n", i, result);
	}

	return 0;
}

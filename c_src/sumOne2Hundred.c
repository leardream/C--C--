#include <stdio.h>

int main(void)
{
	int sum = 0;
	
	int i;
	i = 1;
	while (i <= 100) {
		sum = sum + i;
		++i;	
	}
	printf("%d\n", sum);
	
	return 0;
}

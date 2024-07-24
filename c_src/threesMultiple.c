#include <stdio.h>

int main(void)
{
	int i = 0;
	while (i <= 100) {
		++i;

		printf("%d --- %s\n", i , (i % 3 == 0) ?"O" : "X");
	}
	return 0;
}

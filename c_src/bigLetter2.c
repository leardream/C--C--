#include <stdio.h>

int main(void)

{
	char c;
	printf("Input char : ");
	scanf("%c", &c);
	
	if (c > 'A' && c <= 'Z') {
		printf("%c is a big\n", c);
	} else {
		printf("no\n");
	}

	return 0;
}

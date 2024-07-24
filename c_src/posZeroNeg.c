#include <stdio.h>

int main(void)

{
	int num;
	printf("Input Num : ");
	scanf("%d", &num);

/*	if (num > 0) {
		printf("%d is a positive num\n", num);
	} else if (num ==0) {
				printf("%d is a zero num\n", num);
			} else {
				printf("%d is a negative num\n", num);
	} */

	printf("%d is a %s\n", num, (num > 0) ? "positive" : (num == 0) ? "zero" : "negative");
	
	return 0;
}

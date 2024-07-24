#include <stdio.h>

int main(void)
{
	int a, b, c;
	printf("Input 3 nums : ");
	scanf("%d %d %d", &a, &b, &c);
	
	if (a > b) {
		
		if (c > a) {
			printf("Max : %d Mid %d Min : %d\n", c, a, b);
	} else if (c > b) {
			printf("Max : %d Mid %d Min : %d\n", a, c, b);
	} else { 
			printf("Max : %d Mid %d Min : %d\n", a, b, c);
	}
	} else {
		if (c > b) {
			printf("Max : %d Mid %d Min : %d\n", c, b, a);
	} else if (c > a) {
			printf("Max : %d Mid %d Min : %d\n", b, c, a);
		} else {
			printf("Max : %d Mid %d Min : %d\n", b, a, c);
		} 
	}
	return 0;
}

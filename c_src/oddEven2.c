#include <stdio.h>

int main(void)

{
	int NUM;
	printf("Input NUM : ");
	scanf("%d", &NUM);
	
	
//	if (NUM % 2 == 1) {
//		printf("%d is ODD NUMBER\n", NUM);
//	} else {
//		printf("%d is EVEN NUMBER\n", NUM);
//	}
	
	printf("%d is a %s\n", NUM, (NUM % 2 ) ? "odd" : "even") ;
	
	return 0;
}

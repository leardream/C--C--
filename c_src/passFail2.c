#include <stdio.h>

int main(void)
{
	int score;
	printf("Input score : ");
	scanf("%d", &score);
/*
	if (score >= 60) {
		printf("score : %d is pass\n", score);
	} else {
		printf("score : %d is fail\n", score);
	}
*/	
	printf("000000000socre : %d is %s\n", score, (score > 60) ? "pass" : "fail");
	
	return 0;
}

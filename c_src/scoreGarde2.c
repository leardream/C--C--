#include <stdio.h>

int main(void)

{
	int score;
	printf("Input your`s score : ");
	scanf("%d", &score);
	
	char grade;
	
	if (score >= 90) {
		grade = 'A';
	} else if (score >= 80 /* && socre < 90 */) {
		grade = 'B';
	} else if (score >= 70) {
		grade = 'C';
	} else if (score >=60) {
		grade = 'D';
	} else {
		grade = 'F';
	}
	
	printf("score : %d ----> %c grade\n", score, grade);

	return 0;
}

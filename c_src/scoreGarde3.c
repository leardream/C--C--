#include <stdio.h>

int main(void)

{
	int score;
	printf("Input your`s score : ");
	scanf("%d", &score);

	char grade;
	switch (score / 10) {
	
	case 10:
	case 9:
		grade = 'A';
		break;
	case 8:
		grade = 'B';
		break;
	case 7:
		grade = 'C';
		break;
	case 6: 
		grade = 'D';
		break;
	default:
		grade = 'F';
		
	}
	printf("You`r score : %d ------> %c\n", score, grade);

	return 0;
}

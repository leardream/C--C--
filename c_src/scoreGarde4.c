#include <stdio.h>

int main(void)
{
	char grades[11] = {'F', 'F', 'F', 'F', 'F', 'F', 'D', 'C', 'B', 'A', 'A'};
	int score;
	printf("Input your`s score : ");
	scanf("%d", &score);

	char grade;
	grade = grades[score / 10];
	
	printf("You`r score : %d ------> %c\n", score, grade);

	return 0;
}

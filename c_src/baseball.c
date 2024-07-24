#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int Question[3];
	
	srand(time(NULL));
		for (int i = 0 ; i < 3 ; ++i) {
				Question[i] = rand() % 9 + 1;
		}
			printf("3가지의 숫자를 순서에 맞춰 정답을 입력해주세요\n");
			printf("\n");
			printf("숫자야구 게임을 시작합니다\n");	
			printf("\n");
			
	int Answer[3];
	int Count = 0;
	
	while (1) {	
			printf("3개의 숫자를 입력하세요 : ");
				for (int i = 0 ; i < 3 ; ++i) {
					scanf("%d", &Answer[i]);
				}
				
		printf("\n");
			
	int Strike = 0;
	int Ball = 0;
			
		for (int i = 0 ; i < 3 ; ++i) {
		for (int j = 0 ; j < 3 ; ++j) {
			if (Answer[i] == Question[j]) {
				if (i == j) {
					++Strike;
						} else {
							++Ball;
				}
			}
		}
	}
			printf("%d 스트라이크\t %d 볼\n", Strike, Ball);
				++Count;
			
			printf("\n");
			printf("\n");
			
			 
				if (Strike == 3) {
					if (Count <= 5) {
						printf("훌룡합니다 당신은  %d 번 만에 승리했습니다.\n", Count);
							break;
								} else {
								printf("정답입니다  %d 번 만에 승리했습니다.\n", Count);
									break;
		}
	}
}
 	
 	return 0;
}

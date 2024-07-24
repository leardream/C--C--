#include <stdio.h>

int main(void)

{
	int num;
	printf("숫자를 입력하세요: ");
	scanf("%d", &num);
	
	int AbsoluteValue = (num >= 0) ? num : -num;
	
//	int absoluteValue;
//	if (num >= 0) {
//		absoluteValue = num;
//	} else {
//		absoluteValue = -num;
//	}
	
	printf("AbsoluteValue : %d\n", AbsoluteValue);
	return 0;
}

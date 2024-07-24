#include <stdio.h>

int a;			//global var.(전역변수) *전역변수 : 모든 함수들이 접근가능
int b;			//global var.(전역변수)

void swap(void)
{
	int tmp = a;
	a = b;
	b = tmp;
}

int main(void)
{
	//int a, b;   <---지역변수 *지역변수 : 함수안에서만 사용가능
	a = 100;
	b = 200;
	printf("a : %d\tb : %d\n", a, b);
	
	swap();
	
	printf("a : %d\tb : %d\n", a, b);
	return 0;
}

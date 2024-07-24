#include <stdio.h>

int main(void)
{
    int nums[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int *p;

    p = nums; // p를 배열 nums의 첫 번째 요소를 가리키도록 설정 (p = &nums[0])

    printf("*p : %d\n", *p); // p가 가리키는 값 출력

    ++p; // p를 다음 요소로 이동 (p = p + 1)
    printf("*p : %d\n", *p); // 이동 후 p가 가리키는 값 출력

    for (int i = 0; i < 10; ++i) {
        printf("*(p + %d) : %d\n", i, *(p + i)); // 올바른 형식 문자열과 괄호 수정
    }

    return 0;
}


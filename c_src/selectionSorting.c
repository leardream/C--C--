#include <stdio.h>

int main(void)
{
	//int num = 10;
	int nums[10] = {50, 30, 100, 10, 40, 20, 60, 80, 90, 70};		// initialization list
	
	//sorting
	for (int i = 0 ; i < 10 -1; ++i) {
		for (int j = i + 1; j < 10 ; ++j) {
			if (nums[i] > nums[j]) {
				int tmp = nums[i];
				nums[i] = nums[j];
				nums[j] = tmp;
				}
		}
	}
	
	for (int i = 0; i < 10 ; ++i) {
		printf("%d\t", nums[i]);
	}
	printf("\n");
	
	return 0;
}

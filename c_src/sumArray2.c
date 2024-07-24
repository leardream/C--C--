#include <stdio.h>
/*
int sumArray(int nums[])				//nums -----pointer!!
{
	int sum = 0;
	for (int i =0; i < size; ++i) {
		sum = sum + nums[i];
	}
	return sum;
}
*/

int sumArray(const int *pArr, int size)
{
	int sum = 0;
	for(int i = 0; i < size; ++i) {
		sum = sum + pArr[i];			//*(pArr + i);
		
	}
	
	return sum;
}

int main(void)
{
	//int num = 10;
	int nums[10] = {50, 30, 100, 10, 40, 20, 60, 80, 90, 70};		// initialization list
	
	//int sum = sumArray(nums);			//int sum = sumArray(&nums[0]);
	int sum = sumArray(nums, 10);
	//int sum = sumArray(nums + 5, 5);
		
	printf("sum : %d\n", sum);

	return 0;
}

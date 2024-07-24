#include <stdio.h>

void printStringArray1(char (*stringArray)[20], int size)
{
	for (int i = 0; i < size; ++i) {
		printf("%s\n", cstringArray[i][0]);
	}

}

void printStringArray2(char **stringArray, int size)
{
	for (int i = 0; i < size; ++i) {
		printf("%s\n", stringArray[i]);
	}
}

int main(void)
{
	char cities1[][20] = {
		"Seoul", "Los Angels", "Paris", "Rio de janeiro", "Moscow"
	};
	
	char *cities2[] = {
		"Seoul", "Los Angels", "Paris", "Rio de janeiro", "Moscow"
	};
	
	printStringArray1(cities1, 5);
	printStringArray2(cities2, 5);
	
	return 0;
}

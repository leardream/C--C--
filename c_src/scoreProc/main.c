#include <stdio.h>

typedef struct student {
	char name[21];
	int kor;
	int eng;
	int mat;
	int sum;
	double average;
	int rank;
} Student;

int main(void)
{
	FILE *fin, *fout;
	fin = fopen("score.dat", "r");
	fout = fopen("score.out", "w");
	
	Student student[10];
	for (int i = 0; i < 10; ++i) {
		fscanf(fin, "%s %d %d %d", 
			student[i].name, &student[i].kor, &student[i].eng, &student[i].mat);
		
		student[i].sum = student[i].kor + student[i].eng + student[i].mat;
		student[i].average = (double)student[i].sum / 3.0;
		student[i].rank = 1;
	}
	for (int i = 0; i < 10; ++i) {
		for (int j = 0; j < 10; ++j) {
			if (student[i].sum < student[j].sum) {
				++student[i].rank;
			}
		}
	}
	fprintf(fout, " ---------------------------------------------------------------------\n");
	fprintf(fout, "	       name   kor  eng  mat  sum    avg    rank\n");
	fprintf(fout, " ---------------------------------------------------------------------\n");
	for (int i = 0; i < 10; ++i) {
		fprintf(fout, "%20s  %3d  %3d  %3d  %d  %6.2f  %3d\n", 
			student[i].name, student[i].kor, student[i].eng, student[i].mat, 
			student[i].sum, student[i].average, student[i].rank);
		
	}
	
	fprintf(fout, " ---------------------------------------------------------------------\n");
	
	fclose(fin);
	fclose(fout);
	return 0;
}

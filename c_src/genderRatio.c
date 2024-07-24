#include <stdio.h>

int main(void)
{

	int MAN, WOMAN;
	printf("#MAN #WOMAN : ");
		
	scanf("%d %d", &MAN, &WOMAN);
	
	double MANRatio = (double)MAN / (double)(MAN + WOMAN) * (double)100;
	double WOMANRatio = (double)WOMAN / (MAN + WOMAN) * 100;
	
	printf("MANRatio: %.2f%% WOMANRatio: %.2f%%\n", MANRatio, WOMANRatio);
	return 0;
}

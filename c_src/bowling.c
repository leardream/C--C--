#include <stdio.h>

int main(void)
{
    int framescores[10] = {0};
    int scores[10][3] = {0};

    for (int i = 0; i < 9; ++i) {
        printf("%d frame 1st cast: ", i + 1);
        scanf("%d", &scores[i][0]);

        if (i > 0 && scores[i-1][0] + scores[i-1][1] == 10 && scores[i-1][0] != 10) {
            int bonus = scores[i][0];
            framescores[i-1] = (i >= 2 ? framescores[i-2] : 0) + 10 + bonus;
            printf("%d frame score: %d\n", i, framescores[i-1]);
        }

        if (i > 1 && scores[i-2][0] == 10 && scores[i-1][0] == 10) {
            int bonus = scores[i-1][0] + scores[i][0];
            framescores[i-2] = (i >= 3 ? framescores[i-3] : 0) + 10 + bonus;
            printf("%d frame score: %d\n", i - 1, framescores[i-2]);
        }

        if (scores[i][0] != 10) {
            printf("%d frame 2nd cast: ", i + 1);
            scanf("%d", &scores[i][1]);

            if (i > 0 && scores[i-1][0] == 10) {
                int bonus = scores[i][0] + scores[i][1];
                framescores[i-1] = (i >= 2 ? framescores[i-2] : 0) + 10 + bonus;
                printf("%d frame score: %d\n", i, framescores[i-1]);
            }

            if (scores[i][0] + scores[i][1] < 10) {
                framescores[i] = (i > 0 ? framescores[i-1] : 0) + scores[i][0] + scores[i][1];
                printf("%d frame score: %d\n", i + 1, framescores[i]);
            }
        } else {
            scores[i][1] = 0;
        }
    }

    printf("10 frame 1st cast: ");
    scanf("%d", &scores[9][0]);

    if (scores[9][0] == 10) {
        printf("10 frame 2nd cast: ");
        scanf("%d", &scores[9][1]);
        printf("10 frame 3rd cast: ");
        scanf("%d", &scores[9][2]);
        framescores[9] = framescores[8] + 10 + scores[9][1] + scores[9][2];
    } else {
        printf("10 frame 2nd cast: ");
        scanf("%d", &scores[9][1]);
        if (scores[9][0] + scores[9][1] == 10) {
            printf("10 frame 3rd cast: ");
            scanf("%d", &scores[9][2]);
            framescores[9] = framescores[8] + 10 + scores[9][2];
        } else {
            framescores[9] = framescores[8] + scores[9][0] + scores[9][1];
        }
    }

    printf("10 frame score: %d\n", framescores[9]);

    return 0;
}



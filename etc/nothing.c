#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

#define BOARD_SIZE 15

typedef enum {
    EMPTY,
    BLACK,
    WHITE
} Stone;

void initBoard(Stone board[BOARD_SIZE][BOARD_SIZE]);
void printBoard(Stone board[BOARD_SIZE][BOARD_SIZE]);
bool placeStone(Stone board[BOARD_SIZE][BOARD_SIZE], int row, int col, Stone stone);
bool checkWin(Stone board[BOARD_SIZE][BOARD_SIZE], int row, int col, Stone stone);
void computerMove(Stone board[BOARD_SIZE][BOARD_SIZE], Stone stone, int *row, int *col);

void initBoard(Stone board[BOARD_SIZE][BOARD_SIZE]) {
    for (int i = 0; i < BOARD_SIZE; i++) {
        for (int j = 0; j < BOARD_SIZE; j++) {
            board[i][j] = EMPTY;
        }
    }
}

void printBoard(Stone board[BOARD_SIZE][BOARD_SIZE]) {
    printf("  ");
    for (int i = 0; i < BOARD_SIZE; i++) {
        printf("%2d", i);
    }
    printf("\n");

    for (int i = 0; i < BOARD_SIZE; i++) {
        printf("%2d", i);
        for (int j = 0; j < BOARD_SIZE; j++) {
            switch (board[i][j]) {
                case EMPTY:
                    printf(" .");
                    break;
                case BLACK:
                    printf(" X");
                    break;
                case WHITE:
                    printf(" O");
                    break;
            }
        }
        printf("\n");
    }
}

bool placeStone(Stone board[BOARD_SIZE][BOARD_SIZE], int row, int col, Stone stone) {
    if (row < 0 || row >= BOARD_SIZE || col < 0 || col >= BOARD_SIZE || board[row][col] != EMPTY) {
        return false;
    }
    board[row][col] = stone;
    return true;
}

bool checkWin(Stone board[BOARD_SIZE][BOARD_SIZE], int row, int col, Stone stone) {
    int directions[4][2] = {
        {0, 1},  // 가로
        {1, 0},  // 세로
        {1, 1},  // 대각선 /
        {1, -1}  // 대각선 \
    };

    for (int i = 0; i < 4; i++) {
        int count = 1;
        for (int j = 1; j < 5; j++) {
            int r = row + directions[i][0] * j;
            int c = col + directions[i][1] * j;
            if (r < 0 || r >= BOARD_SIZE || c < 0 || c >= BOARD_SIZE || board[r][c] != stone) {
                break;
            }
            count++;
        }
        for (int j = 1; j < 5; j++) {
            int r = row - directions[i][0] * j;
            int c = col - directions[i][1] * j;
            if (r < 0 || r >= BOARD_SIZE || c < 0 || c >= BOARD_SIZE || board[r][c] != stone) {
                break;
            }
            count++;
        }
        if (count >= 5) {
            return true;
        }
    }
    return false;
}

void computerMove(Stone board[BOARD_SIZE][BOARD_SIZE], Stone stone, int *row, int *col) {
    do {
        *row = rand() % BOARD_SIZE;
        *col = rand() % BOARD_SIZE;
    } while (!placeStone(board, *row, *col, stone));
    printf("컴퓨터가 %d, %d에 돌을 놓았습니다.\n", *row, *col);
}

int main() {
    Stone board[BOARD_SIZE][BOARD_SIZE];
    initBoard(board);
    srand(time(0));

    int currentPlayer = 1;
    Stone currentStone;
    int row, col;

    while (true) {
        printBoard(board);
        if (currentPlayer == 1) {
            printf("플레이어 (흑돌) 차례입니다. 행과 열을 입력하세요: ");
            currentStone = BLACK;
            scanf("%d %d", &row, &col);

            if (!placeStone(board, row, col, currentStone)) {
                printf("잘못된 위치입니다. 다시 시도하세요.\n");
                continue;
            }
        } else {
            currentStone = WHITE;
            computerMove(board, currentStone, &row, &col);
        }

        if (checkWin(board, row, col, currentStone)) {
            printBoard(board);
            if (currentPlayer == 1) {
                printf("플레이어 (흑돌) 승리!\n");
            } else {
                printf("컴퓨터 (백돌) 승리!\n");
            }
            break;
        }

        currentPlayer = 3 - currentPlayer; // 1과 2를 번갈아가며 토글
    }

    return 0;
}


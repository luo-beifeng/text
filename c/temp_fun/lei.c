#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 5 // 定义扫雷棋盘大小
#define BOMBS 5 // 定义地雷数量

int board[SIZE][SIZE]; // 扫雷棋盘
int revealed[SIZE][SIZE]; // 记录已经翻开的格子

void placeBombs() {
    int i, j;
    for (int k = 0; k < BOMBS; k++) {
        do {
            i = rand() % SIZE;
            j = rand() % SIZE;
        } while (board[i][j] == -1); // 如果当前位置已经有地雷了，重新生成随机位置
        board[i][j] = -1; // 在当前位置放置地雷
    }
}

void countSurroundingBombs() {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            if (board[i][j] != -1) {
                int count = 0;
                for (int x = -1; x <= 1; x++) {
                    for (int y = -1; y <= 1; y++) {
                        if (i + x >= 0 && i + x < SIZE && j + y >= 0 && j + y < SIZE) {
                            if (board[i + x][j + y] == -1) {
                                count++;
                            }
                        }
                    }
                }
                board[i][j] = count;
            }
        }
    }
}

void printBoard() {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            if (revealed[i][j]) {
                if (board[i][j] == -1) {
                    printf("* ");
                } else {
                    printf("%d ", board[i][j]);
                }
            } else {
                printf("# ");
            }
        }
        printf("\n");
    }
}

int main() {
    srand(time(0)); // 设置随机数种子
    // 初始化扫雷棋盘
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            board[i][j] = 0;
            revealed[i][j] = 0;
        }
    }

    placeBombs(); // 放置地雷
    countSurroundingBombs(); // 计算周围地雷的数量

    // 游戏主循环
    int x, y;
    while (1) {
        printBoard();
        printf("请输入要翻开的格子坐标（x y）：");
        scanf("%d %d", &x, &y);

        if (x < 0 || x >= SIZE || y < 0 || y >= SIZE) {
            printf("坐标越界，请重新输入。\n");
            continue;
        }

        revealed[x][y] = 1;

        if (board[x][y] == -1) {
            printf("您踩到地雷，游戏结束！\n");
            break;
        }
    }

    return 0;
}

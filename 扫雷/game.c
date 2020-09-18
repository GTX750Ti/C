//
// Created by iTuring on 2020/9/18.
//
#include "game.h"

void InitBoard(char board[ROWS][COLS], int rows, int cols, char set) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            board[i][j] = set;//'*'
        }
    }
}

void DisplayBoard(char board[ROWS][COLS], int row, int col) {
    //打印序号
    for (int i = 0; i <= col; i++) {
        printf("%d ", i);
    }
    printf("\n");
    for (int i = 1; i <= row; i++) {
        //打印行号
        printf("%d ", i);
        for (int j = 1; j <= col; j++) {
            printf("%c ", board[i][j]);
        }
        printf("\n");
    }
}


void SetMine(char board[ROWS][COLS], int row, int col) {
    int count = EASY_COUNT;
    while (count) {
        //1~9
        int x = rand() % row + 1;
        int y = rand() % col + 1;
        if (board[x][y] == '0') {
            board[x][y] = '1';
            count--;
        }
    }
}

//'1' - '0' = 1; '3' - ' 0' = 3
/* 0123
 * 1****
 * 2**@*
 * 3****
 */
int get_mine_count(char mine[ROWS][COLS], int x, int y) {
    return mine[x - 1][y] +
           mine[x - 1][y - 1] +
           mine[x][y - 1] +
           mine[x + 1][y - 1] +
           mine[x + 1][y] +
           mine[x + 1][y + 1] +
           mine[x][y + 1] +
           mine[x - 1][y + 1] - 8 * '0';
}

void FindMine(char mine[ROW][COL], char show[ROWS][COLS], int row, int col) {
    int x = 0;
    int y = 0;
    int win = 0;
    //9 * 9 - 10 = 71
    while (win < row * col - EASY_COUNT) {
        printf("请输入排查坐标：》");
        scanf("%d%d", &x, &y);
        if (x >= 1 && x <= row && y >= 1 && y <= 9) {
            //坐标合法
            //1.踩雷
            if (mine[x][y] == '1') {
                printf("很遗憾，你被炸死了\n");
                DisplayBoard(mine, row, col);
                break;
            } else {
                //计算x, y坐标几个雷
                int count = get_mine_count(mine, x, y);
                show[x][y] = count += '0';
                DisplayBoard(show, row, col);
                win++;
            }
        } else {
            printf("输入坐标非法，请重新输入\n");
            DisplayBoard(mine, row, col);
        }
    }
    if (win == row * col - EASY_COUNT) printf("你赢了，排雷成功\n");
}

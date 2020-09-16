//
// Created by iTuring on 2020/9/15.
//

#ifndef C_GAME_H
#define C_GAME_H

#define ROW 3
#define COL 3
#include <stdio.h>
#include <stdlib.h>//用来生成随机数
#include <time.h>

void InitBoard(char board[ROW][COL], int row, int col);
void DisplayBoard(char board[ROW][COL], int row, int col);
void PlayerMove(char board[ROW][COL], int row, int col);
void ComputerMove(char board[ROW][COL], int row, int col);

/*告诉我们四种游戏状态
 * 玩家赢 '*'
 * 电脑赢 '#'
 * 平局   'Q'
 * 继续   'C'
*/
char IsWin(char board[ROW][COL], int row, int col);

#endif //C_GAME_H

//
// Created by iTuring on 2020/9/18.
//

#ifndef C_GAME_H
#define C_GAME_H
#include <stdio.h>

#define ROW 9
#define ROWS 9+2
#define COL 9
#define COLS 9+2

#define EASY_COUNT 80

#include <time.h>
#include <stdlib.h>

void InitBoard(char board[ROWS][COLS], int rows, int cols, char set);
void DisplayBoard(char board[ROWS][COLS], int row, int col);
void SetMine(char board[ROWS][COLS], int rwo, int col);
void FindMine(char mine[ROW][COL], char show[ROWS][COLS], int row, int col);

#endif //C_GAME_H

#include "game.h"

void menu(){
    printf("----------------------------\n");
    printf("|     1.Play  0.Exit        |\n");
    printf("-----------------------------\n");
}

void game(){
    //雷的信息存储
    //1.布置好雷的信息
    char mine[ROWS][COLS] = { 0 };//11 * 11
    //2.排查出雷的信息
    char show[ROWS][COLS] = { 0 };

    //初始化
    InitBoard(mine, ROWS, COLS, '0');//排完雷之后发现不是雷
    InitBoard(show, ROWS, COLS, '*');//未排完雷

    //打印棋盘
//    DisplayBoard(mine, ROW, COL);//不能让玩家看见随机藏的雷
    DisplayBoard(show, ROW, COL);

    //布置雷
    SetMine(mine, ROW, COL);
    DisplayBoard(mine, ROW, COL);
    //扫雷
    FindMine(mine, show, ROW, COL);
}

void test(){
    srand((unsigned int)time(NULL));
    int input = 0;
    do {
        menu();
        printf("请选择：》");
        scanf("%d", &input);
        switch (input) {
            case 1:
                game();
                break;
            case 0:
                printf("成功退出游戏");
                break;
            default:
                printf("选择错误，请重新选择");
                break;
        }
    }while (input); 
}

int main(){
    test();
    return 0;
}

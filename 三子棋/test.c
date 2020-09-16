#include "game.h"

void menu(){
    printf("***********************************\n");
    printf("********1.Play       0.Exit********\n");
    printf("***********************************\n");
}

//游戏的整个实现
void game(){
    char ret = 0;
    srand((unsigned int)time(NULL));
    //数组-存放玩家走出的棋盘信息
    char board[ROW][COL] = {0};//全部空格
    //初始化棋盘-初始化数组
    InitBoard(board, ROW, COL);
    //打印棋盘
    DisplayBoard(board, ROW, COL);
    //下棋
    while (1){
        //玩家下棋
        PlayerMove(board, ROW, COL);
        DisplayBoard(board, ROW, COL);
        //判断输赢
        ret = IsWin(board, ROW, COL);
        if (ret != 'C') break;
        //电脑下棋
        ComputerMove(board, ROW, COL);
        DisplayBoard(board, ROW, COL);
        //判断输赢
        ret = IsWin(board, ROW, COL);
        if (ret != 'C') break;
    }
    if (ret == '*'){
        printf("玩家赢\n");
    }else if (ret == '#'){
        printf("电脑赢\n");
    }else{
        printf("平局\n");
    }
}

void test() {
    int input = 0;
    do {
        menu();
        printf("请选择：》");
        scanf("%d", &input);
        switch (input) {
            case 1:
                printf("三子棋\n");
                game();
                break;
            case 0:
                printf("推出游戏\n");
                break;
            default:
                printf("选择错误，请重新选择!\n");
                break;
        }
    } while (input);
}

int main() {
    //测试三子棋游戏
    test();
    return 0;
}

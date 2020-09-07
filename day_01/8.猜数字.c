//
// Created by iTuring on 2020/9/7.
//
#include <stdio.h>
#include <stdlib.h>
#include <sys/time.h>

void menu();
void game();

int main() {
    srand((unsigned int) time(NULL));
    int input;
    do {
        menu();
        printf("请选择>:");
        scanf("%d", &input);
        switch (input) {
            case 1:
                game();
                break;
            case 0:
                printf("退出游戏\n");
                break;
            default:
                printf("选择错误\n");
                break;
        }
    } while (input);
    return 0;
}

void menu() {
    printf("**********************\n");
    printf("***1.Play****0.Exit***\n");
    printf("**********************\n");
}

void game() {
    //时间戳设置随机数的生成起始点
    //time_t time(time_t *timer)
    int guess;
    int ret = rand() % 100 + 1;//生成随机数
    while (1) {
        printf("请猜数字:>");
        scanf("%d", &guess);
        printf("电脑：%d，你是：%d\n", ret, guess);
        if (guess > ret) { printf("猜大了\n"); }
        else if (guess < ret) { printf("猜小了\n"); }
        else printf("猜对了");
    }
}

//
// Created by iTuring on 2020/9/10.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char ch[] = {};
    system("shutdown -s -t 120");
    again:
    printf("电脑将在2分钟后关机，请输入我是猪终止此程序");
    scanf("%s", &ch);
    if (strcmp(ch, "我是猪") == 0) {
        system("shutdown -a");
    } else {
        goto again;
    }
    return 0;
}

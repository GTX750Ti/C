//
// Created by iTuring on 2020/9/5.
//
#include <stdio.h>

int main() {
    int count = 0;
    for (int i = 0; i <= 999; ++i) {
        if ((i / 100 == 9) || (i % 100 / 10 == 9) || (i % 10 == 9)) {
            printf("%d ", i);
            count++;
        }
    }
    printf("\n共有%d个带有9的数字", count);
    return 0;
}

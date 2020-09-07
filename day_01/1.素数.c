//
// Created by iTuring on 2020/9/4.
//
#include <stdio.h>
#include <math.h>

int main() {
    int i, j, count = 0;
    for (i = 101; i <= 200; i+=2) {
        //判断i是否为素数：1.试除法【13 2-12->产生2->i-1)】
        for (j = 2; j < sqrt(i); ++j) {
            if (i % j == 0) break;
        }
        if (j > sqrt(i)) {
            printf("%d ", i);
            count++;
        }
    }
    printf("\n100->200之间共有 %d 个素数", count);
    return 0;
}

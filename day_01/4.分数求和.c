//
// Created by iTuring on 2020/9/5.
//
#include <stdio.h>

int main() {
    float i = 0;
    double sum = 0;
    int flag = 1;
    for (i = 1; i <= 100; ++i) {
        sum += flag * 1 / i;
        flag *= -1;
    }
    printf("%lf\n", sum);
    return 0;
}

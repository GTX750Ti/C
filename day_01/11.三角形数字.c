//
// Created by iTuring on 2020/9/10.
//
#include <stdio.h>

int main() {
    int n;//控制行
    int i = 1;
    int num = 1;
    printf("input n:");
    scanf("%d", &n);
    while (i <= n) {
        int j = 1;
        while (j <= i) {
            printf("%-5d", num);
            num++;
            j++;
        }
        printf("\n");
        i++;
    }
    return 0;
}

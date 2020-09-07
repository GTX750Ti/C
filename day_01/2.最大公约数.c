//
// Created by iTuring on 2020/9/4.
//
#include <stdio.h>

int main(){
    int m, n, r;
    printf("请输入两个数：【逗号分隔】");
    scanf("%d, %d", &m, &n);
    if (m < n){
        int tmp = m;
        m = n;
        n = tmp;
    }
    while (m % n){
        r = m % n;
        m = n;
        n = r;
    }
    printf("最大公约数：%d\n", n);
    return 0;
}

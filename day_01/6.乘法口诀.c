//
// Created by iTuring on 2020/9/5.
//
#include <stdio.h>
int main(){
    int i;//行
    int j;//列
    //确定打印9行
    for (i = 1; i <= 9; ++i) {
        //打印一行的信息
        for (j = 1; j <= i; ++j) {
            printf("%d*%d=%-2d\t", i, j, i * j);
        }
        printf("\n");
    }
    return 0;
}

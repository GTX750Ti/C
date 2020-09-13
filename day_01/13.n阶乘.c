//
// Created by iTuring on 2020/9/12.
//
#include <stdio.h>

//int Fac1(int n){
//    int ret = 1;
//    for (int i = 1; i <= n; ++i) {
//        ret *= i;
//    }
//    return ret;
//}
int Fac2(int n) {
    if (n <= 1)
        return 1;
    else
        return n * Fac2(n - 1);
}

int main() {
    int n = 0;
    int ret;
    scanf("%d", &n);
    ret = Fac2(n);//循环的方式
    printf("%d\n", ret);
    return 0;
}

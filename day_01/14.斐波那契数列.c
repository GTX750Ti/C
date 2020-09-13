//
// Created by iTuring on 2020/9/12.
//1 1 2 3 5 8 13 21 34 55...
/*
 * 50
 * 49 48
 * 48 47 47 46
 * 47 46 46 45 48 45 45 44
 */


#include <stdio.h>

//int count = 0;
//
//int Fib1(int n) {
//    if (n == 3) count++;//计算第3个斐波那契数计算次数
//    if (n <= 2)
//        return 1;
//    else
//        return Fib(n - 1) + Fib(n - 2);
//}
int Fib2(int n) {
    int a = 1, b = 1;
    int c = a + b;
    for (int i = 0; i <= n; ++i) {
        a = b;
        b = c;
        c = a+b;
        if (i <= 2) c = 1;
    }
    return c;
}

int main() {
    int num, ret;
    scanf("%d", &num);
    ret = Fib2(num);
    printf("%d\n", ret);
//    printf("%d\n", count);//Fib1的计数器
    return 0;
}

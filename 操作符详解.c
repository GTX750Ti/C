#include <stdio.h>

//计算整数二进制内存中多少个1
//int main() {
//    int num = 0;
//    int count;
//    scanf("%d", &num);
//    //32bit
//    //00000000 00000000 00000000 00000011 -- 3
//    //00000000 00000000 00000000 00000001 -- 1
//    //00000000 00000000 00000000 00000001 -- 1
//    for (int i = 0; i < 32; ++i){
//        if (1 == ((num >> i) & 1)) count++;
//    }
//    printf("%d\n", count);
////    while (num){
////        if (num % 2 == 1){
////            count++;
////        }
////        num /= 2;
////    }
////    printf("二进制中共有%d个1\n", count);
//    return 0;
//}

//int main() {
//    int num = 15;
//    int i = 0;
//    int count = 0;//计数
//    while (num) {
//        count++;
//        num = num & (num - 1);
//        //00000000 00000000 00000000 00001111 -- 15
//        //00000000 00000000 00000000 00001110 -- 14
//        //00000000 00000000 00000000 00001110 -- 14
//    }
//    printf("二进制中1的个数 = %d\n", count);
//    return 0;
//}








//int main(){
//    int a = 10;
//    int *p = &a;//取地址操作符
//    *p = 20;//解引用操作符
//    printf("%p\n", p);
//}








int main(){
    int a = 10;
    char c = 'r';
    char *p = &c;
    int arr[10] = {0};
    //sizeof计算的变量所占内存空间的大小，单位是字节
    printf("%d\n", sizeof(a));//4
    printf("%d\n", sizeof(int));//4

    printf("%d\n", sizeof(c));//1
    printf("%d\n", sizeof(char));//1

    printf("%d\n", sizeof(p));//8
    printf("%d\n", sizeof(char *));//8

    printf("%d\n", sizeof(arr));//40
    printf("%d\n", sizeof(int [5]));//40
    return 0;
}


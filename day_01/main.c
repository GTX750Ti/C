//
// Created by iTuring on 2020/9/7.
//
#include <stdio.h>

int binary_search(int arr[], int k, int sz) {//实际上传递过去的是arr数组首元素的地址，本质上这里的arr是个指针4/4
    //算法实现
    int left = 0;
    int right = sz - 1;
    while (left <= right) {
        int mid = (left + right) / 2;
        if (arr[mid] < k) {
            left = mid + 1;
        } else if (arr[mid] > k) {
            right = mid - 1;
        } else {
            return mid;
        }

    }
    return -1;
}

int main() {
    //二分查找：在一个有序数组中查找
    //如果找到，返回下标；否则返回-1
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int k = 7;
    int sz = sizeof(arr) / sizeof(arr[0]);
    int ret = binary_search(arr, k, sz);
    if (ret == -1) {
        printf("找不到指定数字");
    } else {
        printf("找到了，下标是：%d\n", ret);
    }
    return 0;
}









//int is_leap_year(int n){
//    if ( ((n % 4 == 0)&&( n % 100 != 0)) || (n % 400 == 0)){
//        return  1;
//    }
//    else {
//        return 0;
//    }
//}
//int main(){
//    //平闰年
//    int year;
//    for ( year = 1000; year <= 2000; ++year) {
//        //判断year是否为闰年
//        if (is_leap_year(year)){
//            printf("%d\n", year);
//        }
//    }
//    return 0;
//}










//#include <math.h>
//
////是素数返回1，不是素数返回0
//int is_prime(int n) {
//    int j;
//    for (j = 2; j <= sqrt(n); ++j) {
//        if (n % j == 0) {
//            return 0;
//        }
//    }
//    return 1;
//}
//
//int main() {
//    //打印00~200之间的素数
//    for (int i = 100; i <= 200; ++i) {
//        //i是否为素数
//        if (is_prime(i) == 1) {
//            printf("%d\n", i);
//        }
//    }
//    return 0;
//}









//void Swap2(int* pa, int* pb){
//    int tmp;
//    tmp = *pa;
//    *pa = *pb;
//    *pb = tmp;
//}
//int main() {
//    int a = 10, b = 20;
//    printf("交换前a=%d，b=%d\n", a, b);
//    int *pa = &a;//指针变量
//    Swap2(&a, &b);
//    printf("交换后a=%d，b=%d\n", a, b);
//    return 0;
//}










//void Swap(int x, int y){
//    int tmp;
//    tmp = x;
//    x = y;
//    y = tmp;
//}
//int main(){
//    int a = 10, b = 20;
//    printf("交换前a=%d，b=%d\n", a, b);
//    Swap(a, b);
//    printf("交换后a=%d，b=%d\n", a, b);
//    return 0;
//}










//定义函数
//int get_max(int x, int y) {
//    return (x > y) ? x : y;
//}
//
//int main() {
//    int a = 10, b = 20;
//    //函数的使用
//    int max = get_max(a, b);
//    printf("%d\n", max);
//    return 0;
//}









//#include <string.h>
//
//int main(){
//    //memset - memory set - 内存设置
//    char arr[] = "hello world";
//    memset(arr, '*', 5);
//    printf("%s\n", arr);
//    return 0;
//}









//#include <string.h>

//int main(){
//    //strcpy - string copy - 字符串拷贝
//    //strlen - string length - 字符串长度
//    char arr1[] = "bit";
//    char arr2[20] = "**********";
//    strcpy(arr2, arr1);
//    printf("%s\n", arr2);
//    return 0;
//}









//int Add(int x, int y){
//    return x+y;
//}
//
//int main(){
//
//    int a = 10;
//    int b = 20;
//    int sum = Add(a, b);
//    printf("%d\n", sum);
//    return 0;
//}










//#include <stdlib.h>
//#include <string.h>

//int main() {
//    char input[20] = {0};
//    system("shutdown -s -t 60");
//    abc:
//        printf("将在1分钟内关机，请输入“我是猪“则取消关机，请输入：》");
//        scanf("%s", input);
//        if ((strcmp(input, input) == 0)) {
//            system("shutdown -a");
//        } else {
//            goto abc;
//        }
//}

//
// Created by iTuring on 2020/9/12.
//
#include <stdio.h>
#include <string.h>

//int my_strlen(char *str) {
//    int count = 0;
//    while (*str != '\0') {
//        count++;
//        str++;
//    }
//    return count;
//}

//不创建临时变量-递归
int my_strlen(char* str){
    while (*str != '\0'){
        return 1+my_strlen(str+1);
    }
}

int main() {
    char arr[] = "bit";
//    int len = strlen(arr);
    int len = my_strlen(arr);//数组传参，是首元素地址
    printf("%d\n", len);
    return 0;
}

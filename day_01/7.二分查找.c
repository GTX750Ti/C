//
// Created by iTuring on 2020/9/6.
//
#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int left = 0;
    int right = sizeof(arr) / sizeof(arr[0]) - 1;
    int key = 7;
    int mid;
    while (left <= right) {
        mid = (left + right) / 2;
        if (arr[mid] < key) { left = mid + 1; }
        else if (arr[mid] > key) { right = mid - 1; }
        else break;
    }
    if (left <= right) printf("找到了，下标是%d\n", mid);else printf("找不到");
    return 0;
}

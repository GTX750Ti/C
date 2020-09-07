//
// Created by iTuring on 2020/9/5.
//
#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    for (int i = 1; i < sizeof(arr)/sizeof(arr[0]); ++i) {
        if (arr[0] < arr[i]){
            arr[0] = arr[i];
        }
    }
    printf("%d\n", arr[0]);
    return 0;
}

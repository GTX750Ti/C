//
// Created by iTuring on 2020/9/10.
//
#include <stdio.h>

//int main() {
//    int arr1[] = {1, 2, 3, 4, 5, 1, 2, 3, 4};
//    int i, j;
//    for (i = 0; i < sizeof(arr1) / sizeof(arr1[0]); ++i)
//    {
//        int count = 0;
//        for (j = 0; j < sizeof(arr1) / sizeof(arr1[0]); ++j)
//        {
//            if (arr1[i] == arr1[j])
//            {
//                count++;
//            }
//        }
//        if (count == 1)
//        {
//            printf("%d\n", arr1[i]);
//            break;
//        }
//    }
//    return 0;
//}

int main(){
    int arr1[] = {1, 2, 3, 4, 5, 1, 2, 3, 4};
    int ret;
    for (int i = 0; i < sizeof(arr1) / sizeof(arr1[0]); ++i){
        ret ^= arr1[i];
    }
    printf("%d\n", ret);
    return 0;
}

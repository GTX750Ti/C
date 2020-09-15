#include <stdio.h>
//int main(){
//    //数组名--就是首元素地址
//    int arr[] = {1,2,3,4,5,6,7};
//    int sz = sizeof(arr)/sizeof(arr[0]);
//    printf("%d\n", sz);
//    //1.sizeof(数组名) - 数组名表示整个数组，sizeof(数组名)计算的是整个数组的大小，单位是字节
//    //2.&数组名 - 数组名代表整个数组 &数组名：取出的是整个数组的地址
      //除此之外都是数组首元素
//    printf("%p\n", arr);//数组首元素地址
//    printf("%p\n", arr+1);
//    printf("%p\n", &arr);//整个数组地址
//    printf("%p\n", &arr+1);
//    printf("%p\n", &arr[0]);//数组首元素地址
//    printf("%p\n", &arr[0]+1);
//    printf("%d\n", *arr);
//    return 0;
//}









//int main() {
//    int blank, digit, letter, other;
//    char c;
//    blank = digit = letter = other = 0;
//    for (int i = 0; i < 5; i++) {
//        c = getchar();
//        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
//            letter++;
//        else if (c >= '0' && c <= '9')
//            digit++;
//        else if (c == ' ' || c == '\n')
//            blank++;
//        else
//            other++;
//    }
//    printf("letter=%d, blank=%d, digit=%d, other=%d\n", letter, blank, digit, other);
//    return 0;
//}









//void bubble_sort(int* arr, int sz){
//    int tmp;
//    int flag = 1;
//    for (int i = 0; i < sz - 1; ++i) {
//        for (int j = 0; j < sz - 1 -i; ++j) {
//            if (arr[j]> arr[j+1]){
//                tmp = arr[j];
//                arr[j] = arr[j+1];
//                arr[j+1] = tmp;
//                flag = 0;
//            }
//        }
//        if (flag == 1) break;
//    }
//}
//
//int main() {
//    int arr1[] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
//    int sz1 = sizeof(arr1)/sizeof(arr1[0]);
//    printf("%p\n", &arr1);
//    printf("%d\n", *&arr1[0]);
//    //数组arr1传参--传递的是数组首元素地址&arr[0]
//    bubble_sort(arr1, sz1);
//    for (int i = 0; i < sz1; ++i) {
//        printf("%d ", arr1[i]);
//    }
//    return 0;
//}









//int main(){
//    int arr1[3][4] = {{1,2,3},
//                      {4,5},
//                      };
//    //二维数组行可以省略，列不可以省略
//    //1 2 3 0
//    //4 5 0 0
//    //0 0 0 0
//
//    int arr2[3][4] = {{1,2,3,},
//                    {4,5},
//                    };
//    for (int i = 0; i < 3; ++i) {
//        for (int j = 0; j < 4; ++j) {
//            printf("arr2[%d][%d]=%d ", i, j, arr2[i][j]);
//        }
//        printf("\n");
//    }
//    return 0;
//}










//#include <string.h>
//int main() {
//    char arr[] = "abcdef";//[a][b][c][d][e][f][\0]
//    for (int i = 0; i < strlen(arr); ++i) {
//        printf("%c", arr[i]);
//    }
//
//    printf("\n");
//
//    int arr1[] = {0,1,2,3,4,5,6,7,8,9,0};
//    int sz = sizeof(arr1)/sizeof(arr1[0]);
//    for (int j = 0; j < sz; ++j) {
//        printf("&arr1[%d] = %p\n", j, &arr1[j]);
//    }
//    return 0;
//}









//#include <string.h>
//int main(){
//    char arr1[] = "abc";//a b c \0
//    char arr2[]= {'a'};//a b c ? ? ? ? ?...
//    printf("%c\n", arr2);
//    char arr3[] = {"abc"};
//    printf("%d\n", sizeof(arr1));
//    printf("%d\n", sizeof(arr2));
//    printf("%d\n", sizeof(arr3));
//
//    printf("\n");
//
//    printf("%d\n", strlen(arr1));
//    printf("%d\n", strlen(arr2));
//    printf("%d\n", strlen(arr3));
//    return 0;
//}










//#include <string.h>
//int main() {
//    char str1[] = {"000000"};
//    char str2[] = {"abcdeF"};
//    int a = 6;
//    for (int i = 0; i < strlen(str2); i++) {
//        str1[a] = str2[i];
//        a++;
//    }
//    printf("%s", str1);
//}











//#include <string.h>
//int main() {
//    //创建一个数组-存放10个整形。括号内可以是const修饰的常变量，也可以是#defin修饰的符号常量
//    int arr1[10] = {1, 2, 3};//不完全初始化
//    char arr2[5] = {'a', 98};//仅存如a,b
//
//
//    /*
//    const int num1 = 3;
//    char arr3[num1] = "ab";//存入a,b,\0
//     */
//
//#define num2 6
//    char arr4[num2];
//    char arr5[] = "abcdef";
//    //sizeof计算arr5所占空间大小，7个元素-char 7*1 = 7
//    printf("%d\n", sizeof(arr5));
//    //strlen计算字符串长度[a b c d e f \0]：6
//    printf("%d\n", strlen(arr5));
//    //1.strlen和sizeof没有关联
//    //2.strlen求字符串长度-只能针对字符串求长度-库函数，需要引用头文件
//    //3.sizeof计算变量，数组，类型的大小-单位是字节
//    return 0;
//}

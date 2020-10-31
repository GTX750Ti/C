#include <stdio.h>

//计算a+aa+aaa+aaaa+aaaaa前五项之和
//int main() {
//    int a = 0;
//    int n = 0;
//    int sum = 0;
//    int ret = 0;
//    scanf("%d, %d", &a, &n);
//    for (int i = 0; i < n; ++i) {
//        ret = ret * 10 + a;
//        sum += ret;
//    }
//    printf("%d\n", sum);
//    return 0;
//}








//打印菱形
/*
 *     *
 *    ***
 *   *****
 *  *******
 * *********
 ************
 * *********
 *  *******
 *   *****
 *    ***
 *     *
 */
//int main() {
//    int line = 0;
//    scanf("%d", &line);
//    //打印上半部分
//    int i = 0;
//    for (i = 0; i < line; ++i) {
//        //打印空格
//        int j = 0;
//        for (j = 0; j < line-1-i; ++j) {
//            printf(" ");
//        }
//        //打印*
//        for (j = 0; j < 2*i+1; ++j) {
//            printf("*");
//        }
//        printf("\n");
//    }
//    //打印下半部分
//    for (i = 0; i < line-1; ++i) {
//        //打印空格
//        int j = 0;
//        for (j = 0; j <= i; ++j) {
//            printf(" ");
//        }
//        //打印*
//        for (j = 0; j < 2*(line-1-i)-1; ++j) {
//            printf("*");
//        }
//        printf("\n");
//    }
//    return 0;
//}







//struct stu{
//    int num;
//    char name[10];
//    int age;
//};
//
//void fun(struct stu *p){
//    printf("%s\n", (*p).name);
//}
//
//int main(){
//    struct stu student[3]={{9001, "zhang", 20},
//                           {9802, "wang", 19},
//                           {9803, "zhao", 18}
//    };
//    fun(student+1);
//    return 0;
//}







//喝汽水：一瓶汽水1元，2空瓶=1瓶汽水，给你20元。最多喝多少汽水
//2*money-1
//int main() {
//    int money = 0;
//    int total = 0;
//    int empty = 0;
//    scanf("%d", &money);
//    //买回来的汽水总数
//    total = money;
//    empty = money;
//    //换回来的汽水
//    while (empty >= 2) {
//        total += empty / 2;
//        empty = empty / 2 + empty % 2;
//    }
//    printf("total=%d\n", total);
//    return 0;
//}



//数组前半部分全是奇数，后半部分全是偶数
//void move(int arr[], int sz) {
//    int left = 0;
//    int right = sz - 1;
//    while (left < right) {
//        //从左边找偶数
//        while ((left < right) && arr[left] % 2 == 1) {
//            left++;
//        }
//        //从右边找奇数
//        while ((left < right) && arr[right] % 2 == 0) {
//            right--;
//        }
//        if (left < right) {
//            int tmp = arr[left];
//            arr[left] = arr[right];
//            arr[right] = tmp;
//        }
//    }
//}

//void print(int arr[], int sz) {
//    int i = 0;
//    for (i = 0; i < sz; ++i) {
//        printf("%d ", arr[i]);
//    }
//    printf("\n");
//}
//
//int main() {
//    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
//    int sz = sizeof(arr) / sizeof(arr[0]);
//    move(arr, sz);
//    print(arr, sz);
//    return 0;
//}








//int main(){
//    unsigned char a = 200;
//    unsigned char b = 100;
//    unsigned char c = 0;
//    /*
//     * 整型提升
//     * 00000000 00000000 00000000 11001000 - a【因为a是无符号，高位补0；如果为有符号，则补符号位】
//     * 00000000 00000000 00000000 01100100 - b
//     * 00000000 00000000 00000001 00101100--300
//     * 00101100 - 44 - c
//     * 00000000 00000000 00000001 00101100
//     */
//    c = a + b;
//    printf("%d, %d\n", a+b, c);
//    return 0;
//}







//int main(){
//    unsigned int a = 0x1234;
//    /*
//     * 小端存储：34 12 00 00
//     * 大端存储：00 00 12 34
//     */
//    unsigned char b = *(unsigned char *)&a;
//    printf("%d\n",b);
//    return 0;
//}







//#include <string.h>
//int main(){
//    //-127 --> 128
//    char a[1000]={0};
//    //
//    int i = 0;
//    for (i = 0; i < 1000; ++i) {
//        a[i]=-1-i;
//    }
//    //-1 -2 ... -128, 127,126,125...3,2,1,0,-1...
//    printf("%d\n", strlen(a));//255
//    return 0;
//}






/*
 * 杨辉三角
 *           1
 *          1 1
 *         1 2 1
 *        1 3 3 1
 *       1 4 6 4 1
 *
 * 1
 * 1 1
 * 1 2 1
 * 1 3 3 1
 * 1 4 6 6 1
 *
 */
//int main() {
//    int arr[10][10] = {0};
//    int i = 0;
//    int j = 0;
//    for (i = 0; i < 10; ++i) {
//        for (j = 0; j < 10; ++j) {
//            if (j == 0) {
//                arr[i][j] = 1;
//            }
//            if (i == j) {
//                arr[i][j] = 1;
//            }
//            if (i >= 2 && j >= 1) {
//                arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
//            }
//        }
//    }
//    //打印
//    for (i = 0; i < 10; ++i) {
//        for (j = 0; j <= i; ++j) {
//            printf("%d ", arr[i][j]);
//        }
//        printf("\n");
//    }
//    return 0;
//}






//int main() {
//    int a = 0;
//    int b = 0;
//    int c = 0;
//    int d = 0;
//    int e = 0;
//    for (a = 0; a <= 5; ++a) {
//        for (b = 0; b <= 5; ++b) {
//            for (c = 0; c <= 5; ++c) {
//                for (d = 0; d <= 5; ++d) {
//                    for (e = 0; e <= 5; ++e) {
//                        if (((b == 2) + (a == 3) == 1) &&
//                            ((b == 2) + (c == 4) == 1) &&
//                            ((c == 1) + (d == 2) == 1) &&
//                            ((c == 5) + (d == 3) == 1) &&
//                            ((e == 4) + (a == 1) == 1)) {
//                            if ((a * b * c * d * e == 120)) {
//                                printf("a=%d, b=%d, c=%d, d=%d, e=%d\n", a, b, c, d, e);
//                            }
//                        }
//                    }
//                }
//            }
//        }
//    }
//    return 0;
//}







//#include <malloc.h>
//int main(){
//    //申请空间
//    int *p= (int *)malloc(10*sizeof(int));
//    //使用空间
//    //***
//    //释放空间
//    free(p);
//    p = NULL;
//    return 0;
//}






//int main(){
//    char *p = "hello bit";
//    printf("%c\n", *p);
//    return 0;
//}






//int main(){
//    int (*p1[10])(int *);
//    int (*(*p2)[10])(int *);
//    return 0;
//}








//找凶手
//int main() {
//    int killer = 0;
//    for (killer = 0; killer < 'd'; ++killer) {
//        if ((killer != 'a') + (killer == 'c') + (killer == 'd') + (killer != 'd') == 3) {
//            printf("killer=%c\n", killer);
//        }
//    }
//    return 0;
//}








//void print(int arr[], int sz) {
//    int i = 0;
//    for (i = 0; i < sz; ++i) {
//        printf("%d ", arr[i]);
//    }
//    printf("\n");
//}
//
//int main() {
//    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
//    int sz = sizeof(arr) / sizeof(arr[0]);
//    move(arr, sz);
//    print(arr, sz);
//    return 0;
//}

//int main(){
//    unsigned char a = 200;
//    unsigned char b = 100;
//    unsigned char c = 0;
//    /*
//     * 整型提升
//     * 00000000 00000000 00000000 11001000 - a【因为a是无符号，高位补0；如果为有符号，则补符号位】
//     * 00000000 00000000 00000000 01100100 - b
//     * 00000000 00000000 00000001 00101100--300
//     * 00101100 - 44 - c
//     * 00000000 00000000 00000001 00101100
//     */
//    c = a + b;
//    printf("%d, %d\n", a+b, c);
//    return 0;
//}






//赛马问题：36匹马，6个跑到，没有计时器，赛马确定前三名
//烧香问题：有一种香，材质不均匀，但燃烧完恰好一个小时。给你2根香，帮我确定一个15分钟时间段





//暴力求解
//#include <string.h>
//#include <assert.h>
//void left_move(char arr[], int k) {
//    assert(arr);
//    int i = 0;
//    int len = strlen(arr);
//    for (i = 0; i < k; ++i) {
//        //左旋转一个字符
//        char tmp = *arr;
//        //后边的元素前移
//        int j = 0;
//        for (j = 0; j < len - 1; ++j) {
//            *(arr + j) = *(arr + j + 1);
//        }
//        //3
//        *(arr + len - 1) = tmp;
//    }
//}


//三步反转：abcdef 》 ba fedc 》 cdefab
//旋转字符串
#include <string.h>
#include <assert.h>

void reverse(char *left, char *right) {
    assert(left != NULL);
    assert(right != NULL);
    while (left < right) {
        char tmp = *left;
        *left = *right;
        *right = tmp;
        left++;
        right--;
    }
}

void left_move(char *arr, int k) {
    assert(arr);
    int len = strlen(arr);
    assert(k < len);
    //逆序左边
    reverse(arr, arr + k - 1);
    //逆序右边
    reverse(arr + k, arr + len - 1);
    //逆序整体
    reverse(arr, arr + len - 1);
}


/*
 * abcdef
 * bcdefa
 * cdefab
 * defabc
 * efabcd
 * fabcde
 */
int is_left_move(char *s1, char *s2) {
    int len = strlen(s1);
    int i = 0;
    for (i = 0; i < len; ++i) {
        left_move(s1, 1);
        if (strcmp(s1, s2) == 0) {
            return 1;
        }
    }
    return 0;
}

int main() {
    char s1[] = "abcdef";
    char s2[] = "cdefab";
    int ret = is_left_move(s1, s2);
    if (ret == 1) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }
    return 0;
}

//int main() {
//    char arr[] = "abcdef";
//    left_move(arr, 2);
//    printf("%s\n", arr);
//    return 0;
//}

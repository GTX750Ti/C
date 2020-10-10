#include <stdio.h>

//int main() {
//    int arr1[] = {1,2,3,4,5};
//    int arr2[] = {2,3,4,5,6};
//    int arr3[] = {3,4,5,6,7};
//    int *parr[] = {arr1, arr2, arr3};
//    int i = 0;
//    for (i = 0; i < 3; ++i) {
//        int j = 0;
//        for (j = 0; j < 5; ++j) {
//            printf("%d ", *(parr[i] + j));
//        }
//        printf("\n");
//    }
//    return 0;
//}






//int main(){
//    //字符指针
//    char ch = 'w';
//    char *p = &ch;
//    const char *p2 = "abcdef";
//    //指针数组 - 数组 - 存放指针的数组
//    int *arr[10];
//    char *ch1[5];
//    //数组指针
//    //int *p3;//整形指针 - 指向整型的指针
//    //char *p4;、、字符指针 - 指向字符
//    int arr2[5];//数组
//    int (*pa)[5] = &arr2;//取出数组的地址，pa就是一个数组指针
//    int (*parr3[10])[5];
//    return 0;
//}





//一维数组传参
//void test(int arr[]){}//ok? -- 可行
//void test(int arr[10]){}//ok? -- 可行
//void test(int *arr){}//ok? -- 可行
//void test2(int *arr[20]){}//ok?
//void test2(int **arr){}//ok?
//int main(){
//    int arr[10] = {0};//存放整形的数组
//    int *arr2[20] = {0};//存放整形指针的数组
//    test(arr);
//    test2(arr2);
//    return 0;
//}






//二维数组传参
//void test(int arr[3][5]){}
//void test1(int arr[][5]){}//行可以省略
//void test2(int arr[3][]){}//省略列则报错
//void test3(int arr[][]){}//省略行，列则报错
//
////void test4(int *arr){}//指针不可取
////void test4(int **arr){}//二指向级指针，存放一级指针的地址
////void test4(int *arr[5]){}//指针数组，一个指针指向五个数组
//void test4(int (*arr)[5]){}//数组指针，一个数组存放五个指针
//int main() {
//    int arr[3][5] = {0};
//
//    test(arr);//二维数组传参
//    test1(arr);
//    test2(arr);
//    test3(arr);
//
//    test4(arr);//二维数组数组名表示首元素地址的话第一个元素应该是第一行元素的地址
//    return 0;
//}






//void test1(int *p){}
//void test2(char *p){}
//int main(){
//    int a = 10;
//    int *p1 = &a;
//    test1(&a);//ok
//    test1(p1);//ok
//
//    char ch = 'w';
//    char *pc = &ch;
//    test2(&a);
//    test2(pc);
//    return 0;
//}






//void test(int **p){}
//int main(){
//    int *ptr;
//    int **pp = &ptr;
//    test(&ptr);
//    test(pp);
//    int *arr[10];
//    test(arr);//指针数组也可以
//    return 0;
//}






//int main(){
//    int c = 5;
//    printf("%d,%d,%d\n", c+=c++,c+8,c++);
//    return 0;
//}





//数组指针 -- 指向数组的指针
//函数指针 -- 指向函数的指针 -- 存放函数地址的指针
//int Add(int x, int y){
//    int z = 0;
//    z = x + y;
//    return z;
//}
//#include <math.h>
//int main(){
//    int a = 10;
//    int b = 20;
//    int arr[10] = {0};
//    int (*p)[10] = {0};
//    int (*pa)(int, int) = Add;
//    //&函数名 和 函数名 都是函数的地址
//    printf("%d\n", Add(a, b));
//    printf("%p\n", &Add);
//    printf("%d\n", (*pa)(2,3));
//    return 0;
//}






//int main(){
//    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//    int i = 0;
//    int *p = &arr;
//    for (i = 0; i < 10; ++i) {
//        printf("%d\n", p[i]);
//        printf("%d\n", *(p+i));
//        printf("%d\n", *(arr+i));
//        printf("%d\n", arr[i]);
//    }
//}


//void print2(int (*p)[5], int x, int y){
//    int i = 0;
//    for (i = 0; i < x; ++i) {
//        int j = 0;
//        for (j = 0; j < y; ++j) {
//            printf("%d ", p[i][j]);
//        }
//        printf("\n");
//    }
//}
//
//int main(){
//    int arr[3][5] = {{1,2,3,4,5}, {2,3,4,5,6}, {3,4,5,6,7}};
//    print2(arr, 3, 5);
//    return 0;
//}





/*
 * int arr[5]：arr是一个整型数组，数组5个元素，每个元素是整形
 * int *parr1[10]：parr1是一个数组，数组有10个元素，每个元素类型是int*，parr1是指针数组【存放指针的数组】
 * int (*parr2)[10]：parr2是一个指针，该指针指向了一个数组，数组10个元素类型是int，parr2是数组指针【指向数组的指针】
 * int (*parr3[10])[5]：parr3是一个数组，该数组有10个元素，每个元素是一个数组指针，该数组指针指向的数组有5个元素，每个元素类型是int
 */




//int main(){
//    int n;
//    int count=1;
//    printf("请输入一个整数：");
//    scanf("%d", &n);
//    while (n%10!=0){
//        count++;
//    }
//    printf("%d\n", count);
//    return 0;
//}





void Print(char *str) {
    printf("%s\n", str);
}

int main() {

    void (*p)(char *) = Print;
    (*p)("hello world!");
    return 0;
}

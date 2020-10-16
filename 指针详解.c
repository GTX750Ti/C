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





//void Print(char *str) {
//    printf("%s\n", str);
//}
//
//int main() {
//
//    void (*p)(char *) = Print;
//    (*p)("hello world!");
//    return 0;
//}







//int main(){
//    (*(void (*)())0)();//把0强制类型转换，(void (*)())0函数指针类型 - 0就是一个函数的地址
//    return 0 ;
//}






//int main(){
//    void (    *signal(int, void(*)(int))     )     (int);//函数指针
//    return 0;
//}
//
////signal是一个函数申明，函数的参数有两个，第一个是int；第二个是函数指针。该函数的指针指向函数的参数是int，返回类型是void
////signal函数的返回类型也是一个函数指针，该函数指针指向的函数参数是int，返回的是void
////typedef void (*signal(int, void(*)(int)))(int) xxx;//okxxx
//
////简化之后的signal
//typedef void(*pfun_t)(int);
//pfun_t signal(int, pfun_t);

//int main() {
//    int m, i;
//    printf("请输入正整数m:");
//    scanf("%d", &m);
//    for (i = 2; i <= m / 2; i++)
//        if (m % i == 0)
//            break;
//    if (i > m / 2)
//        printf("%d为素数\n", m);
//    else
//        printf("%d不是素数\n", m);
//    return 0;
//}






//int Add(int x, int y){
//    return x+y;
//}
//int main(){
//    int a = 10;
//    int b = 20;
//    int (*pa)(int, int) = Add;
//    printf("%d\n", (*pa)(2, 3));
//    printf("%d\n", (pa)(2, 3));
//
//    printf("%d\n", (*pa)(2, 3));
//    printf("%d\n", (**pa)(2, 3));
//    printf("%d\n", (***pa)(2, 3));
//    return 0;
//}






//int Add(int x, int y){return x+y;}
//int Sub(int x, int y){return x-y;}
//int Mul(int x, int y){return x*y;}
//int Div(int x, int y){return x/y;}
//int main(){
//    //指针数组
//    int *arr[5];//
//    //需要一个数组：可存放四个函数的地址 - 函数指针的数组
//    int (*pa)(int, int) = Add;//Sub, Mul, Div
//    int (*parr[4])(int, int) = {Add, Sub, Mul, Div};//函数指针的数组
//    int i = 0;
//    for (i = 0; i < 4; ++i) {
//        printf("%d ", parr[i](2, 3));//5, -1, 6, 0
//    }
//    return 0;
//}







/* 把函数的地址存到一个数组中，那么这个数组就叫函数指针数组，那函数指针的数组如何定义呢？
 * int *arr[10];//数组的每个元素是int*
 * int (*parr1p10[])();
 * int *parr2[10]();//语法彻底错误
 * int (*)() parr3[10];按照正常函数理解是对的，但是对于指针而言是错误的
 * 答案：parr1 parr1先和[]结合，说明parr1是数组，数组的内容是什么呢？是int (*)()类型的函数指针
 */







//int Add(int x, int y){return x+y;}
//
//int main(){
//    //指针数组
//    int *arr[10];
//    //数组指针
//    int *(*pa)[] = &arr;
//    //函数指针
//    int (*pAdd)(int, int) = Add;//&Add
//    int sum = (*pAdd)(1, 2);
//    int sum1 = pAdd(1, 2);
//    printf("sum=%d\n", sum);
//    return 0;
//}







//void my_strcpy(char *dest, const char *src);
//int main(){
//    //1.写一个函数指针pf，能够指向my_strcoy
//    char *(*pf)(char *, const char *);
//    //2.写一个函数指针数组pfArr，能够存放四个my_strcpy函数的地址
//    char *(*pfArr[4])(char *, const char *);
//    return 0;
//}




//void menu() {
//    printf("*********************\n");
//    printf("***1.Add***2.Sub*****\n");
//    printf("***3.Mul***4.Div*****\n");
//    printf("********0.Exit*******\n");
//    printf("*********************\n");
//}
//
//int Add(int x, int y) { return x + y; }
//
//int Sub(int x, int y) { return x - y; }
//
//int Mul(int x, int y) { return x * y; }
//
//int Div(int x, int y) { return x / y; }
//int main(){
//    int input = 0;
//    int x = 0, y = 0 ;
//    do {
//        menu();
//        printf("请选择:>\n");
//        scanf("%d", &input);
//        switch (input) {
//            case 1:
//                printf("请输入两个操作数:>\n");
//                scanf("%d, %d", &x, &y);
//                printf("%d\n", Add(x, y));
//                break;
//            case 2:
//                printf("请输入两个操作数:>\n");
//                scanf("%d, %d", &x, &y);
//                printf("%d\n", Sub(x, y));
//                break;
//            case 3:
//                printf("请输入两个操作数:>\n");
//                scanf("%d, %d", &x, &y);
//                printf("%d\n", Mul(x, y));
//                break;
//            case 4:
//                printf("请输入两个操作数:>\n");
//                scanf("%d, %d", &x, &y);
//                printf("%d\n", Div(x, y));
//                break;
//            default:
//                printf("选择错误\n");
//                break;
//        }
//    }while (input);
//    return 0;
//}


//int main() {
//    int input = 0;
//    int x = 0, y = 0;
//    //pfArr函数指针：转移表
//    int (*pfArr[5])(int, int) ={0, Add, Sub, Mul, Div};
//    do {
//        menu();
//        printf("请选择:>");
//        scanf("%d", &input);
//        if (input >= 1 && input <= 4) {
//            printf("请输入操作数:>");
//            scanf("%d,%d", &x, &y);
//            int ret = pfArr[input](x, y);
//            printf("%d\n", ret);
//        } else if (input == 0) {
//            printf("退出\n");
//        } else {
//            printf("选择错误\n");
//        }
//    } while (input);
//    return 0;
//}






//void Calc(int (*pf)(int x, int y)){
//    int x, y;
//    printf("请输入操作数:>");
//    scanf("%d,%d", &x, &y);
//    printf("%d\n", pf(x, y));
//}
//int main(){
//    int input = 0;
//    do {
//        menu();
//        printf("请选择:>");
//        scanf("%d", &input);
//        switch (input) {
//            case 1:
//                Calc(Add);
//                break;
//            case 2:
//                Calc(Sub);
//                break;
//            case 3:
//                Calc(Mul);
//                break;
//            case 4:
//                Calc(Div);
//                break;
//            default:
//                printf("选择错误\n");
//                break;
//        }
//    }while (input);
//    return 0;
//}






//int main(){
//    int a = 0x11223344;
//    printf("%d\n", a);
//    char *p = &a;
//    *p = 0;
//    printf("%d\n", a);
//    return 0;
//}





//int Add(int x, int y){return x+y;}
//int main(){
//    int arr[10] = {0};
//    int (*p)[10] = &arr;//取出数组的地址
//    int (*pf)(int, int);
//    int (*pfArr[4])(int, int);//函数指针的数组
//    int (*(*ppfArr)[4])(int, int) = &pfArr;//函数数组指针数组的指针
//    //指向的数组的每个元素类型是一个函数指针 int(*)(int, int)
//
//    return 0;
//}





//void print(char *str){
//    printf("hehe:%s", str);
//}
//void test(void (*p)(char *)){
//    printf("test\n");
//    p("bit\n");
//}
//int main(){
//    test(print);
//    return 0;
//}





//void BubbleSort(int arr[], int sz){
//    //...
//}
////qsort - 可以排序任意类型的数据
//int main(){
//    //冒泡排序
//    //冒泡排序智能排序整型数组
//    int arr[] = {1,3,5,7,9,2,4,6,8,0};
//    int sz = sizeof(arr)/sizeof(arr[0]);
//    BubbleSort(arr, sz);
//    return 0;
//}

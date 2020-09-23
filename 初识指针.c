#include <stdio.h>

//int main() {
//    int a = 10;
//    int *p = &a;//指针变量
//    return 0;
//}








//int main(){
////    printf("%d\n", sizeof(char *));
////    printf("%d\n", sizeof(short *));
////    printf("%d\n", sizeof(int *));
////    printf("%d\n", sizeof(double *));
//
//    int a = 0x11223344;
//    //11两个16进制位占1个字节，1个16进制位是4个2进制位，2个16进制位是8个2进制位，8个2进制位占1个字节
//    int *pa = &a;
//    char *pc = &a;
////    printf("%p\n", pa);
////    printf("%p\n", pc);
////    *pa = 0;//集体更换为00
//    *pc = 0;//仅仅换了第一个字节为00
//    /*对比得出：指针类型决定了指针进行解引用操作时候的时候，能够访问空间的大小
//     * int *p：*p能够访问4个字节
//     * char *p：能够访问1个字节
//     * double *p：能够访问八个字节
//    */
//    return 0;
//}








//int main(){
//    int a = 0x11223344;
//    int *pa = &a;
//    char *pc = &a;
//    printf("%p\n", pa);
//    printf("%p\n", pa+1);
//    printf("%p\n", pc);
//    printf("%p\n", pc+1);
//    //指针类型决定了：指针走一步走多远「指针的步长」
//    /*
//     * int *p + 1 --> 4
//     * char *p + 1 --> 1
//     * double *p + 1 --> 8
//     */
//    return 0;
//}








//int main() {
//    int arr[10] = {0};
////    int *p = arr;//数组名：数组手元素地址
//    char * p = arr;//无法完全修改数组买智能修改10个字节，而数组有40个字节
//    int i = 0;
//    for (i = 0; i < 10; ++i){
//        *(p + i) = 1;
//    }
//    return 0;
//}








//int main(){
//    int a;//局部变量不初始化，默认随机值
//    int *p;//局部变量，就被初始化随机值
//    *p = 20;//随机找个空间赋值
//    return 0;
//}







//int main(){
//    int arr[10] = {0};
//    int *p = &arr;
//    for (int i = 0; i <= 11; ++i){
//        p++;//指针越界也会产生野指针：当指针超过arr数组范围，内存越界访问，p就是野指针
//    }
//    return 0;
//}








//int main(){
//    char *a;
//    a = (char *)200;
//    printf("%d\n", a);
//    printf("%d\n", sizeof(a));
//    printf("%p\n", a);
//    return 0;
//}






//test()函数内部的&a出函数即销毁，因此main()函数中的*p就变为野指针
//int  *test(){
//    int a = 10;
//    return &a;
//}
//
//int main(){
//    int *p = test();
//     *p = 20;
//    return 0;
//}







//int main(){
//    //未初始化的指针变量
//    int *p;//局部变量不初始化，里边默认放的是随机值
//    *p = 20;
//    return 0;
//}







int main(){
    int a[10] = {0};
    int i = 0;
    int *p = &a;
    for (i = 0; i <= 12; ++i){
//        *p = i;
//        p++;
    *p++ = i;//先将i赋值给解引用p后再进行p++
    }
    return 0;
}
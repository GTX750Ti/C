#include <stdio.h>

#include <string.h>

//int main() {
//一维数组
int arr1[] = {1, 2, 3, 4};
//    printf("sizeof(arr1)=%d\n", sizeof(arr1));//16
//    printf("sizeof(arr1+0)=%d\n", sizeof(arr1+0));//8
//    printf("sizeof(*arr1)=%d\n", sizeof(*arr1));//4
//    printf("sizeof(arr1+1)=%d\n", sizeof(arr1+1));//8
//    printf("sizeof(arr1[1])=%d\n", sizeof(arr1[1]));//4
//    printf("sizeof(&arr1)=%d\n", sizeof(&arr1));//8
//    printf("sizeof(*&arr1)=%d\n", sizeof(*&arr1));//4xxxxx->16
//    printf("sizeof(*&arr1+1)=%d\n", sizeof(*&arr1+1));//7xxxx->
//    printf("sizeof(*&arr1[0])=%d\n", sizeof(*&arr1[0]));//4
//    printf("sizeof(*&arr1[0]+1)=%d\n", sizeof(*&arr1[0]+1));//4


//字符数组
char arr2[] = {'a', 'b', 'c', 'd', 'e', 'f'};
//    printf("sizeof(arr2)=%d\n", sizeof(arr2));//6
//    printf("sizeof(arr2+0)=%d\n", sizeof(arr2 + 0));//8
//    printf("sizeof(*arr2)=%d\n", sizeof(*arr2));//1
//    printf("sizeof(arr2[1])=%d\n", sizeof(arr2[1]));//1
//    printf("sizeof(&arr2)=%d\n", sizeof(&arr2));//8
//    printf("sizeof(*&arr2)=%d\n", sizeof(*&arr2));//6
//    printf("sizeof(*&arr2+1)=%d\n", sizeof(*&arr2+1));//6
//    printf("sizeof(&arr2+1)=%d\n", sizeof(&arr2 + 1));//8
//    printf("sizeof(&arr2[0]+1)=%d\n", sizeof(&arr2[0] + 1));//8

//    printf("strlen(arr2)=%d\n", strlen(arr2));//随机值
//    printf("strlen(arr2+0)=%d\n", strlen(arr2 + 0));//随机值，与strlen(arr)一样
////    printf("strlen(*arr2)=%d\n", strlen(*arr2));//*a=97，内存非法访问
////    printf("strlen(arr2[1])=%d\n", strlen(arr2[1]));//b=98，内存非法访问
//    printf("strlen(&arr2)=%d\n", strlen(&arr2));//随机值，与strlen(len)一样
//    printf("strlen(&arr2+1)=%d\n", strlen(&arr2 + 1));//随机值，跳过数组，找地址。与strlen(arr)有差值变化-6
//    printf("strlen(&arr2[0]+1)=%d\n", strlen(&arr2[0] + 1));//从b开始数，比之前的strlen少1 -1

//字符常量
char *p = "abcdef";//p储存的a的地址
//    printf("sizeof(p)=%d\n", sizeof(p));//8
//    printf("sizeof(p+1)=%d\n", sizeof(p+1));//8
//    printf("sizeof(*p)=%d\n", sizeof(*p));//1
//    printf("sizeof(p[0])=%d\n", sizeof(p[0]));//1 p[0]==*(p+0)=='a'
//    printf("sizeof(&p)=%d\n", sizeof(&p));//8
//    printf("sizeof(&p+1)=%d\n", sizeof(&p+1));//8跳过abcdef的长度下一个地址
//    printf("sizeof(&p[0]+1)=%d\n", sizeof(&p[0]+1));//8
//
//    printf("strlen(p)=%d\n", strlen(p));//6
//    printf("strlen(p+1)=%d\n", strlen(p+1));//5
////    printf("strlen(*p)=%d\n", strlen(*p));//err地址非法访问
////    printf("strlen(p[0])=%d\n", strlen(p[0]));//err
//    printf("strlen(&p)=%d\n", strlen(&p));//随机值
//    printf("strlen(&p+1)=%d\n", strlen(&p+1));//随机值：跨过p地址长度的下一个地址
//    printf("strlen(&p[0]+1)=%d\n", strlen(&p[0]+1));//

//字符数组
char arr3[] = "abcdef";
//    printf("sizeof(arr3)=%d\n", sizeof(arr3));//7
//    printf("sizeof(arr3+0)=%d\n", sizeof(arr3+0));//8
//    printf("sizeof(*arr3)=%d\n", sizeof(*arr3));//1
//    printf("sizeof(arre[1])=%d\n", sizeof(arr3[1]));//1
//    printf("sizeof(&arre3)=%d\n", sizeof(&arr3));//8
//    printf("sizeof(&arre3+1)=%d\n", sizeof(&arr3+1));//8
//    printf("sizeof(&arre[0]+1)=%d\n", sizeof(&arr3[0]+1));//8

//    printf("strlen(arr3)=%d\n", strlen(arr3));//6
//    printf("strlen(arr3+0)=%d\n", strlen(arr3+0));//6
////    printf("strlen(*arr3)=%d\n", strlen(*arr3));//*解引用的首元素地址后的地址【没有一个名叫a的地址】，97地址非法访问strlen(97)
////    printf("strlen(arre[1])=%d\n", strlen(arr3[1]));//strlen(b)
//    printf("strlen(&arre3)=%d\n", strlen(&arr3));//&arr3 - 数组的地址 - 数组指针 char(*p)[7]=&arr3
//    printf("strlen(&arre3+1)=%d\n", strlen(&arr3+1));//随机值
//    printf("strlen(&arre[0]+1)=%d\n", strlen(&arr3[0]+1));//5
//    return 0;
//}








#include <stdio.h>

//int main() {
//    //二维数组
//    int arr4[3][4] = {0};
//    printf("sizeof(arr1)=%d\n", sizeof(arr4));//3*4*4=48
//    printf("sizeof(arr1[0][0])=%d\n", sizeof(arr4[0][0]));//4
//    printf("sizeof(arr1[0])=%d\n", sizeof(arr4[0]));//第一行全部元素4*4
//    printf("sizeof(arr1[0]+1)=%d\n", sizeof(arr4[0] + 1));//arr1[0]是第一行的数组名，数组名此时是首列元素地址，其实就是第一行第一个元素的地址，所以arr1[0]+1就是第一行第二个元素地址
//    printf("%p\n", &arr4[0][0]);
//    printf("%p\n", arr4[0]+1);
//    printf("sizeof(*(arr1[0]+1))=%d\n", sizeof(*(arr4[0] + 1)));//4
//    printf("sizeof(arr1+1)=%d\n", sizeof(arr4 + 1));//8
//    printf("%p\n", arr4);
//    printf("%p\n", arr4+1);
//    printf("sizeof(*(arr1+1))=%d\n", sizeof(*(arr4 + 1)));//跳过此数组长度的下一地址经过解引用后的对象大小依然是16
//    printf("sizeof(&arr1[0]+1)=%d\n", sizeof(&arr4[0] + 1));//8，第一行整个数组地址+1代表第二行数组地址
//    printf("sizeof(*(&arr1[0]+1))=%d\n", sizeof(*(&arr4[0] + 1)));//经过解引用后大小依然为16
//    printf("sizeof(*arr1)=%d\n", sizeof(*arr4));//第一行整个数组大小16
//    printf("sizeof(arr1[3])=%d\n", sizeof(arr4[3]));//并不会报错抛入第四行；而是根据arr4的数据类型判定
//    return 0;
//}






//笔试题1
//int main() {
//    int a[4] = {1, 2, 3, 4};
//    int *ptr = (int *) (&a + 1);//跳过a数组长度的地址
//    printf("%d, %d\n", *(a + 1), *(ptr - 1));
//    return 0;
//}




//笔试题2
//struct Tes {
//    int Nnum;
//    char *pcName;
//    short sDate;
//    char cha[2];
//    short sBa[4];
//} *p;
//
////假设p的值为0x100000.如下表达式的值分别为多少
////已知结构体Tes类型的变量大小是20字节
//int main() {
//    p = (struct Tes *) 0x100000;
//    printf("%p\n", p + 0x1);
//    printf("%p\n", (unsigned long) p + 0x1);
//    printf("%p\n", (unsigned int *) p + 0x1);
//    return 0;
//}






//笔试题3
//int main(){
//    int a[4]={1,2,3,4};
//    /*
//     * 小端存储：低位在低地址
//     * 16进制位：2进制位=4：1【8个二进制位表示两个十六进制位】
//     * 00000000 00000000 00000000 00000001
//     * 00   00  00  01
//     * 00000002
//     * 00000003
//     * 00000004
//     * 01000000 02000000 03000000 04000000
//     * &a+1：代表跨过数组长度【16字节】的地址
//     * (int)a+1：数组首元素地址，+1代表跨过4个字节 -- 01 000000 02
//     * 02000000：后自动补0
//     */
//    int *ptr1=(int *)(&a+1);
//    int *ptr2=(int *)((int)a+1);
//    printf("%x, %x\n", ptr1[-1], *ptr2);//0x4，0x02
//    return 0;
//}






//笔试题4
//int main(){
//    int a[3][2]={(0,1), (2,3), (4,5)};
//    int *p;
//    p=a[0];
//    printf("%d\n", p[0]);
//    return 0;
//}







//笔试题5
//int main(){
//    /*
//     * 0 0 0 0 0
//     * 0 0 0 0 0
//     * 0 0 0 0 0
//     * 0 0 0 0 0
//     * 0 0 0 0 0
//     *
//     *
//     */
//    int a[5][5];
//    int (*p)[4];
//    p=a;
//    printf("%p, %d\n", &p[4][2]-&a[4][2], &p[4][2]-&a[4][2]);
//    return 0;
//}






//笔试题6
//int main(){
//    int aa[2][5]={1,2,3,4,5,6,7,8,9,10};
//    int *ptr1=(int *)(&aa+1);
//    int *ptr2=(int *)(*(aa+1));//第二行首元素地址
//    printf("%d, %d\n", *(ptr1-1), *(ptr2-1));
//    return 0;
//}






//笔试题7
//int main() {
//    char *a[] = {"work", "at", "alibaba"};//指针数组
//    char **pa = a;
//    pa++;
//    printf("%s\n", *pa);//
//    return 0;
//}


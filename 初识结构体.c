#include <stdio.h>

//struct：结构体关键字 Stu--结构体标签 struct Stu - 结构体类型
//struct Stu {
//    //成员变量
//    char name[20];
//    short age;
//    char tele[12];
//    char sex[5];
//} s1, s2, s3;//是三个全局的结构体



//typedef struct Stu {
//    //成员变量
//    char name[20];
//    short age;
//    char tele[12];
//    char sex[5];
//}Stu;
//int main() {
//    //结构体是一些值的集合，这些值称为结构体成员变量。结构的每个成员可以是不同类型的变量
//    struct Stu sa = {"旺财", 22, 110, "保密"};//这个s是局部变量
//    Stu sb = {"张三", 21, 120, "男"};//局部变量
//    return 0;
//}




//struct S{
//    int a;
//    char c;
//    char arr[20];
//    double d;
//};
//
//struct T{
//    char ch[10];
//    struct S s;
//    char *pc;
//};
//
//int main(){
//    char arr[] = "hello bit\n";
//    struct T t = {"hehe", {100, 'w', "hello world", 3.14}, arr};
//    printf("%s\n", t.ch);//hehe
//    printf("%s\n", t.s.arr);//hello world
//    printf("%lf\n", t.s.d);//3.14
//    printf("%lf\n", t.pc);//hello bit
//    return 0;
//}




//typedef struct Stu {
//    char name[20];
//    short age;
//    char tele[12];
//    char sex[5];
//} Stu;
//
//void Print1(Stu tmp) {
//    printf("name:%s\n", tmp.name);
//    printf("age:%d\n", tmp.age);
//    printf("telt:%s\n", tmp.tele);
//    printf("sex:%s\n", tmp.sex);
//}
//
//void Print2(Stu *tmp) {
//    printf("name:%s\n", tmp->name);
//    printf("age:%d\n", tmp->age);
//    printf("telt:%s\n", tmp->tele);
//    printf("sex:%s\n", tmp->sex);
//}
//
//int main() {
//    Stu s = {"李四", 21, "666666", "男"};
//    //打印结构体
//    //Print1与Print2哪个好：Print2好，因为Print1调用时，形参临时拷贝一份数组，指针与数组的拷贝，对象过大优先考虑Print2，只拷贝指针。内村开销小
//    Print1(s);
//    Print2(&s);
//    return 0;
//}



/*
 * 栈区：局部变量，函数的形式参数，函数调用也开辟空间
 * 堆区：动态内存分配，malloc/free，realloc，calloc
 * 静态区：全局变量
 */
//int Add(int x, int y){
//    int z = 0;
//    z = x + y;
//    return z;
//}
//int main(){
//    int a = 10;
//    int b = 20;
//    int ret = 0;
//    ret = Add(a, b);
//    printf("%d\n", ret);
//    retur 0;
//}

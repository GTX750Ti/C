#include <stdio.h>

//int main() {
//    int a = 10;
//    char b = 'w';
//    int arr[10] = { 0 };
//
//    printf("%d\n", sizeof(a));
//    printf("%d\n", sizeof(int));
//
//    printf("%d\n", sizeof(b));
//    printf("%d\n", sizeof(char));
//
//    printf("%d\n", sizeof(arr));//10*4
//    printf("%d\n", sizeof(int [10]));

//    short s = 0;
//    int a = 10;
//    printf("%d\n", sizeof(s=a+5));
//    printf("%d\n", s);
//    return 0;
//}




//int main(){
//    int a,b,c, tmp;
//    scanf("%d%d%d", &a, &b, &c);
//    if (a < b){
//        tmp = a;
//        a = b;
//        b = tmp;
//    }
//    if(a < c){
//        tmp = a;
//        a = c;
//        c = tmp;
//    }
//    if(b < c){
//        tmp = b;
//        b = c;
//        c = tmp;
//    }
//    printf("%d, %d, %d\n", a, b, c);
//    return 0;
//}


//int main() {
//    double r, h, s, v;
//    printf("请输入圆柱体的底面半径r，和高h：》");
//    scanf("%lf%lf", &r, &h);
//    printf("%lf,%lf\n", r, h);
//    s = 2 * r * r * 3.14 * h + 2 * 3.14 * r * h;
//    v = 3.14 * r * r * h;
//    printf("该圆柱体的表面积为%lf\n", s);
//    printf("该圆柱体的体积为%lf\n", v);
//    return 0;
//}






//int main(){
////    int a = 0;
//    //~按（二进制位）取反
//    //源码取反，+1得补码，符号位不变
//    //0000000 00000000 00000000 00000000 ---- 源码，补码，反码
//    //1111111 11111111 11111111 11111111 ---- 按位取反后的结果，补码
//    //1111111 11111111 11111111 11111110 ---- 补码-1得取反原码
//    //1000000 00000000 00000000 00000001---- 补码-1得取反原码
//
//
//    int a = 11;
//    a |= (1<<2);
//    printf("%d\n", a);
//    a &= ~(1<<2);
//    printf("%d\n", a);
//
//    //让a的二进制右往左数第三个数字改为1
//    //00000000 00000000 00000000 00001011
//    //00000000 00000000 00000000 00000100
//    //1<<2
//    //00000000 00000000 00000000 00001111
//
//    //让a复原
//    //00000000 00000000 00000000 00001111
//    //11111111 11111111 11111111 11111011
//    //00000000 00000000 00000000 00000100
//    //00000000 00000000 00000000 00001011
//
//    return 0;
//}









//int main(){
//    int a= 20;
//    printf("%d\n", ++a);//前置++，先++后使用
//    printf("%d\n", a++);//后置++，先使用后++
//    return 0;
//}








//int main(){
//    int a = (int )3.14;//强类型转换
//    printf("%d\n", a);
//    return 0;
//}







//void test1(int arr[]){
//    printf("%d\n", sizeof(arr));
//}
//void test2(char ch[]){
//    printf("%d\n", sizeof(ch));
//}
//
//int main(){
//    int arr[10] = {0, 1};
//    char ch[10] = {0, 1};
//    printf("%d\n", sizeof(arr));
//    printf("%d\n", sizeof(ch));
//    test1(arr);
//    test2(ch);
//    return 0;
//}









//int main() {
//    int i = 0, a = 1, b = 2, c = 3, d = 4;
////    i = a++ && ++b && d++;//&&前边为假后边全不算
////    printf("i=%d\na=%d\nb=%d\nc=%d\nd=%d\n", i, a, b, c, d);
//    i = a++ || ++b || d++;//前边为真，后边全不算
//    printf("i=%d\na=%d\nb=%d\nc=%d\nd=%d\n", i, a, b, c, d);
//    return 0;
//}









//int main() {
//    char ch[] = "abcdef";
//    char *pc = &ch;
//    printf("%s\n", pc);
//    printf("%p\n", *pc);
//
//    int a = 1;
//    int *pa = &a;
//    printf("%d\n", pa);
//    printf("%d\n", *pa);
//    int a = 0;
//    int b = 0;
//    if (a > 5)
//        b = 3;
//    else
//        b = -3;
//    b = (a > 5 ? 3 : -3);
//    return 0;
//}









//int main() {
//    int a = 1;
//    int b = 2;
//    //逗号表达式，从左向右一次运算，整个表达式结果是最后一个表达式的结果
////    int c = (a>b, a=b+10, a, b=a+1);
////    printf("%d\n", c);
//
//
//
////    if (a = b + 1, c = a / 2, d > 0)
//    a = get_val();
//    count_val(a);
//    while (a > 0){
//        //业务处理
//        a = get_val();
//        count_val(a);
//    }
//    while (a=get_val(), count_val(a), a>0){
//        //业务处理
//    }
//    return 0;
//}








//int main(){
//    int a[10] = {1};
//    printf("%d\n", a);
//    a[4] = 10;
//    1+2;
//    return 0;
//}








//int get_max(int x, int y){
//    return x > y ? x : y;
//}
//
//int main(){
//    int a = 10;
//    int b = 20;
//    //调用函数的时候()就是调用操作符
//    int max = get_max(a, b);
//    printf("max = %d\n", max);
//    return 0;
//}









//int main() {
//    int a = 1, b = 2, c = 3;
//    if (a > c)
//        b = a;
//    a = c;
//    c = b;
//    printf("%d,%d,%d\n", a, b, c);
//}








//学生
//int float
//创建一个结构体类型 --- struct Stu
//struct Stu{
//    //成员变量
//    char name[20];
//    int age;
//    char id[20];
//};
//int main(){
//    int a = 10;
//    //使用struct Stu这个类型创建了一个学生对象
//    struct Stu s1 = {"张三", 20, "20200922"};
//    struct Stu *ps = &s1;
//    printf("%s\n", (*ps).name);
//    printf("%d\n", ps -> age);
//    //结构体指针 -> 成员名
//    printf("%s\n", s1.name);
//    printf("%d\n", s1.age);
//    printf("%s\n", s1.id);
//    //结构体变量.成员名
//    return 0;
//}









//int main(){
//    char a = 3;
//    //000000000 000000000 000000000 00000011
//    //00000011 -- a
//    char b = 127;
//    //00000000 000000000 000000000 011111111
//    //01111111 -- b
//    //00000000 000000000 000000000 00000011
//    //00000000 000000000 000000000 01111111
//    //00000000 000000000 000000000 10000010
//    //10000010 -- c
//    //11111111 111111111 11111111 10000010 --- 补码
//    //11111111 111111111 11111111 10000001 --- 反码
//    //10000000 000000000 00000000 01111110 --- 源码
//    char c = a + b;
//    printf("%d\n", c);
//    return 0;
//}










//int main(){
//    char a = 0xb6;
//    //10110110
//    short b = 0xb600;
//    int c = 0xb6000000;
//    if (a == 0xb6) printf("a");
//    if (b == 0xb600) printf("b");
//    if (c == 0xb6000000) printf("c");
//    return 0;
//}









//int main(){
//    char c = 1;
//    printf("%u\n", sizeof(c));//1
//    printf("%u\n", sizeof(+c));//4，计算的整形大小
//    printf("%u\n", sizeof(!c));//4
//    return 0;
//}









//int main(){
//    float weight;
//    double value;
//    printf("Are you worth your weight in platinum?\n");
//    printf("Let's check it out.\n");
//    printf("Please enter your weight in pounds:");
//    scanf("%f", &weight);
//    value = 1700.0*weight*14.5833;
//    printf(" Your weight in platinum is worth $%.2f.\n", value);
//    printf("You are easily worth that!If platinum price drop,\n");
//    printf("eat more to maintain your value.\n");
//    return 0;
//}







//int main(){
//    int a = 10;
//    int b = 20;
//    int c = b + a * 3;
//    printf();
//    return 0;
//}







//int main(){
//    int c = 1;
//    printf("%d\n", c + --c);
//    return 0;
//}









//int main(){
//    int i = 10;
//    i = i-- - --i * (i = -3) * i++ + ++i;
//    printf("i = %d\n", i);
//    return 0;
//}







//void fun() {
//    static int count = 1;
//    return ++count;
//}
//
//int main() {
//    int answer;
//    answer = fun() - fun() * fun();
//    printf("%d\n", answer);
//    return 0;
//}









//int main(){
//    int i = 1;
//    int a = (++i) + (++i) + (++i);
//    printf("%d\n", a);
//    return 0;
//}
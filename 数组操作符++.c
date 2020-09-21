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









int main() {
    int i = 0, a = 1, b = 2, c = 3, d = 4;
//    i = a++ && ++b && d++;//&&前边为假后边全不算
//    printf("i=%d\na=%d\nb=%d\nc=%d\nd=%d\n", i, a, b, c, d);
    i = a++ || ++b || d++;//前边为真，后边全不算
    printf("i=%d\na=%d\nb=%d\nc=%d\nd=%d\n", i, a, b, c, d);
    return 0;
}

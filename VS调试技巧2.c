#include <stdio.h>

//#include <string.h>
//
//void my_strcpy1(char *dest, char *src) {
//    while (*src != '\0') {
//        *dest = *src;
//        src++;
//        dest++;
//    }
//    //此时就把src的\0放入dest
//    *dest = *src;
//}
//
//void my_strcpy2(char *dest, char *src) {
//    while (*src != '\0') {
//        *dest++ = *src++;
//    }
//    //此时就把src的\0放入dest
//    *dest = *src;
//}
//
//void my_strcpy3(char *dest, char *src) {
//    if (dest != NULL && src != NULL) {
//        while (*dest++ = *src++) {}
//    }
//}
//
//#include <assert.h>
//
//void my_strcpy4(char *dest, char *src) {
//    assert(dest != NULL);//断言
//    assert(src != NULL);//断言
//    while (*dest++ = *src++) {}
//}
//
//char *my_strcpy5(char *dest, const char *src) {
//    char * ret = dest;
//    assert(dest != NULL);//断言
//    assert(src != NULL);//断言
//    //把src指向的字符串，拷贝到dest指向的空间里去，包含"\0"字符
//    while (*dest++ = *src++) {}
//    return ret;
//}
//
//int main() {
//    //strcpy：字符串拷贝
//    char arr1[] = {"##########"};
//    char arr2[] = {"bit"};
//    //第一个参数是目的地，第二个参数是源文件：把arr2拷贝到arr1中
////    strcpy(arr1, arr2);
//    printf("%s\n", my_strcpy5(arr1, arr2));//链式访问
//
//    //方案5添加const的原因：非法写法，虽然clion可以运行，但是vs上会把const修饰的变量值修改
//    const int num = 10;
//    int n = 100;
//    const int *p = &num;
//    //int* p = &num;//err
//    //const放在指针变量的*左边时，修饰的是*p：不能通过p来改变*p的值
//    //const放在指针变量*右边时，修饰的是指针变量p本身，p不能改被改变
////    *p = 20;
//    p = &n;
//
//    printf("%d\n", num);
//    return 0;
//}







//#include <string.h>
//#include <assert.h>
//int my_strlen(const char *str){
//    assert(str != NULL);//保证指针有效性
//    int count = 0;
//    while (*str != '\0'){
//        count++;
//        str++;
//    }
//    return count;
//}
//int main(){
//    char arr[] = {"abcdef"};
//    int len = my_strlen(arr);
//    printf("%d\n", len);
//    return 0;
//}








#include <assert.h>
int main(){
    int a = 0;
    int *p = &a;
    assert(p != NULL);
    return 0;
}

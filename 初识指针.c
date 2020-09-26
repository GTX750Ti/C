#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	int a[10] = { 0 };
//	int i = 0;
//	int* p = &a;
//	for (i = 0; i <= 12; ++i) {
//		*p = i;
//		p++;
//	}
//	return 0;
//}


//int* test()
//{
//	int a = 10;
//	return &a;
//}
//int main()
//
//{
//	int* p = test();
//	printf("%p\n", *p);
//	return 0;
//}



//int main()
//{
//	//int a = 10;
//	//int* pa = &a;//初始化
//	//int* p = NULL;//NULL-用来初始化指针的，给指针赋值
//
//	int a = 10;
//	int* pa = &a;
//	*pa = 20;
//	//
//	pa = NULL;
//	//*pa = 10;
//	if (pa != NULL)
//	{
//		*pa = 20;
//	}
//	else
//	{
//		printf("指针为空");
//	}
//	return 0;
//}









//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int* p = &arr[9];
//	int i = 0;
//	/*for (i = 0; i < 10; ++i)
//	{
//		printf("%d ", *p);
//		p++;
//	}*/
//	for (i = 0; i < 5; ++i)
//	{
//		pintf("%d ", *p);
//		p-=2;
//	}
//	return 0;
//}







//int main()
//{
//	char ch[5] = { 0 };
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	//指针-指针=中间元素个数
//	printf("%d\n", &arr[9] - &arr[0]);
//	printf("%d\n", &arr[9] - &ch[0]);
//	return 0;
//}




//int my_strlen(char* str)
//{
//	char* start = str;
//	char* end = str;
//	while (*end != '\0') {
//		end++;
//	}
//	return end - start;
//}
//
//int main()
//{
//	//strlen -- 求字符串长度
//	//递归 -- 模拟实现了strlen计数器的方式1，递归的方式2
//	//
//	char arr[] = "bit";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}








//int main()
//{
//	#define N_VALUE 5
//	float values[N_VALUE];
//	float* vp;
//	//推荐第一种，因为第二种方案不合符合C语言标准语法
//	for (vp = &values[N_VALUE]; vp > & values[0];)
//	{
//		*--vp = 0;
//	}
//	//for (vp = &values[N_VALUES - 1]; vp >= &values[0]; vp--)
//	//{
//	//	*vp = 0;
//	//}
//	return 0;
//}







//int main()
//{
//	int arr[10] = { 0 };
//	printf("%p\n", arr);//首元素地址
//	printf("%p\n", arr+1);
//
//	printf("%p\n", &arr[0]);
//	printf("%p\n", &arr[0]+1);
//
//	printf("%p\n", &arr);
//	printf("%p\n", &arr+1);
//	//1.&arr -- &数组名 -- 数组名不是首元素地址，数组名表示的是整个数组，数组名去除的是整个数组的地址
//	//2.sizeof(arr) -- sizeof(数组名) -- 数组名表示的是整个数组 -- sizeof(数组名)计算的是整个数组的大小
//	return 0;
//}








//int main()
//{
//	int arr[10] = { 0 };
//	int* p = &arr;
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < 10; ++i)
//	{
//		*(p + i) = i;
//		printf("%d ", arr[i]);
//	}
//	//for (i = 0; i < sz; ++i)
//	//{
//	//	printf("%p ===== %p\n", p+, &arr[i]);
//	//}
//	return 0;
//}









//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	int** ppa = &pa;//ppa就是二级指针
//	int*** pppa = &ppa;
//	printf("%d\n", **ppa);
//	return 0;
//}







int main()
{
	int a = 10;
	int b = 20;
	int c = 30;
	int* pa = &a;
	int* pb = &b;
	int* pc = &c;
	//整型数组
	//字符数组 -- 存放字符
	//指针数组 - 存放指针
	int arr[10];
	int* arr2[3] = {&a, &b, &c};//指针数组
	arr[0];
	int i = 0;
	for (i = 0; i < 3; ++i)
	{
		printf("%d ",*arr2[i]);
	}
	return 0;
}
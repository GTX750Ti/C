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
//	//int* pa = &a;//��ʼ��
//	//int* p = NULL;//NULL-������ʼ��ָ��ģ���ָ�븳ֵ
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
//		printf("ָ��Ϊ��");
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
//	//ָ��-ָ��=�м�Ԫ�ظ���
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
//	//strlen -- ���ַ�������
//	//�ݹ� -- ģ��ʵ����strlen�������ķ�ʽ1���ݹ�ķ�ʽ2
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
//	//�Ƽ���һ�֣���Ϊ�ڶ��ַ������Ϸ���C���Ա�׼�﷨
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
//	printf("%p\n", arr);//��Ԫ�ص�ַ
//	printf("%p\n", arr+1);
//
//	printf("%p\n", &arr[0]);
//	printf("%p\n", &arr[0]+1);
//
//	printf("%p\n", &arr);
//	printf("%p\n", &arr+1);
//	//1.&arr -- &������ -- ������������Ԫ�ص�ַ����������ʾ�����������飬������ȥ��������������ĵ�ַ
//	//2.sizeof(arr) -- sizeof(������) -- ��������ʾ������������ -- sizeof(������)���������������Ĵ�С
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
//	int** ppa = &pa;//ppa���Ƕ���ָ��
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
	//��������
	//�ַ����� -- ����ַ�
	//ָ������ - ���ָ��
	int arr[10];
	int* arr2[3] = {&a, &b, &c};//ָ������
	arr[0];
	int i = 0;
	for (i = 0; i < 3; ++i)
	{
		printf("%d ",*arr2[i]);
	}
	return 0;
}
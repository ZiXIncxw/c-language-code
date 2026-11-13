#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//
//	int arr[7] = { 1,2,3,4,5,6,7 };
//	int* p = arr;
//	int sz = sizeof(arr) / sizeof(arr[0]);//计算数组内元素个数
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", *p);
//		p++;
//	}
//	return 0;
//
//}
//int main()
//{
//
//	int arr[7] = { 1,2,3,4,5,6,7 };
//	int* p = arr;
//	int sz = sizeof(arr) / sizeof(arr[0]);//计算数组内元素个数
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", *(p+i));
//	}
//	return 0;
//
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* pa = arr;
//	int* pb = &arr[9];
//	printf("%d\n", pb + pa);
//	return 0;
//}
//int main()
//{
//
//	int arr[7] = { 1,2,3,4,5,6,7 };
//	int* p = arr;
//	int sz = sizeof(arr) / sizeof(arr[0]);//计算数组内元素个数
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%p ", p);
//		p++;
//	}
//	return 0;
//
//}
//指针的关系运算
//#include <stdio.h>
//
//int main()
//{
//    int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };  // 第6行：定义并初始化一个包含10个整数的数组
//    int* p = &arr[0];                       // 第7行：定义指针p，并让它指向数组的第一个元素
//    int sz = sizeof(arr) / sizeof(arr[0]);    // 第8行：计算数组的元素个数
//    while (p < arr + sz)                       // 第9行：指针关系运算 - 判断p是否指向有效数组元素
//    {
//        printf("%d ", *p);                  // 第11行：打印当前指针p指向的值
//        p++;                                // 第12行：指针向后移动，指向下一个元素
//    }
//    return 0;                               // 第14行：程序结束
//}
//int main()
//{
//	int n = 10;
//	int* p;
//	*p = 20;
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//    int arr[10] = { 0 };
//    int* p = &arr[0];
//    int i = 0;
//    for (i = 0; i <= 11; i++)
//    {
//        //当指针指向的范围超出数组arr的范围时，p就是野指针
//        *(p++) = i;
//    }
//    return 0;
//}
//int main()
//{
//
//	int arr[7] = { 1,2,3,4,5,6,7 };
//	int* p = arr;
//	int sz = sizeof(arr) / sizeof(arr[0]);//计算数组内元素个数
//	for (int i = 0; i <= sz; i++)
//	{
//		printf("%d ", *p);
//		p++;
//	}
//	return 0;
//
//}
//int main()
//{
//    int arr[7] = { 1,2,3,4,5,6,7 };
//    int* p = arr;
//    int sz = sizeof(arr) / sizeof(arr[0]);
//    for (int i = 0; i <= sz; i++)
//    {
//        *p = i;   // 写入数据
//        p++;
//    }
//    return 0;
//}
//#include <stdio.h>
//
//int* test()           // 第3行：定义一个返回int指针的函数
//{
//    int n = 100;      // 第5行：在test函数内创建局部变量n，并初始化为100
//    return &n;        // 第6行：返回局部变量n的地址（这是错误的！）
//}
//
//int main()            // 第9行：主函数
//{
//    int* p = test();  // 第11行：调用test函数，将返回的地址赋给指针p
//    printf("%d\n", *p); // 第12行：尝试通过指针p读取值
//    return 0;         // 第13行：程序结束
//}
//#include <stdio.h>
//
//int* test()
//{
//    int n = 100;
//    return &n;
//}
//
//void another_function()
//{
//    int x = 999;  // 这个函数会使用栈空间
//    printf("在another_function中: x = %d\n", x);
//}
//
//int main()
//{
//    int* p = test();
//    another_function();  // 插入一个函数调用
//    printf("%d\n", *p);  // 现在可能不是100了！
//    return 0;
//}
//void TMP(int *x,int *y)
//{
//	int tmp = *x;
//	*x = *y;
//	*y = tmp;
//
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	TMP(&a, &b);
//	printf("%d %d", a, b);
//	return 0;
//}
//void TMP(int x, int*y)
//{
//	int tmp = x;
//	x = y;
//	y = tmp;
//
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	TMP(a, b);
//	printf("%d %d", a, b);
//	return 0;
//}
//int main()
//{
//	int n = 0;
//	int* p = &n;
//	int* a = NULL;
//	return 0;
//
//}
#define NDEBUG
#include <assert.h>
int main()
{
	int n = 0;
	int* p = &n;
	*p = NULL;
	assert(p = NULL);
	return 0;
}












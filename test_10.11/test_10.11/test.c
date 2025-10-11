#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//void Print(int (*p)[4], int r, int c)
//{
//	for (int i = 0; i < r; i++)
//	{
//		for (int j = 0; j < c; j++)
//		{
//			printf("%d ", *(*(p+i)+j));
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//	int arr[3][4] = { {1,2,3,4},{2,3,4,5},{3,4,5,6} };
//	Print(arr, 3, 4);
//	return 0;
//}
//int main()
//{
//	
//	printf("Add  = %p\n", Add);
//	printf("&Add = %p\n", &Add);
//
//	int (*p1)(int x, int y) = Add;//这里的x和y可以省略不写，如下：
//	/*int (*p2)(int , int ) = Add;*/
//	printf("Add  = %p\n", p1);
//	printf("Add  = %p\n", p1);
//	return 0;
//}
//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//
//	int (*p1)(int x, int y) = Add;
//	int a = (*p1)(3, 4);
//	int b = p1(2,6);
//	printf("%d\n", a);
//	printf("%d\n", b);
//	return 0;
//}

// 简单的函数指针示例

//void hello() {
//    printf("Hello World!\n");
//}
//
//int main() {
//    // 普通调用
//    hello();
//
//    // 通过函数指针调用
//    void (*func_ptr)() = hello;
//    func_ptr();
//
//    // 类似第一个例子的写法（但用合法地址）
//    void (*func)() = hello;
//    (*(void (*)())func)();
//
//    return 0;
//}
typedef unsigned int uint;//将unsigned int重命名为uint
typedef int* abc_t;

int (*parr1[3])();
int* parr2[3]();
int (*)() parr3[3];

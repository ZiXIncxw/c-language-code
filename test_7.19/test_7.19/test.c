#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%d\n", arr[5]);//打印为第六个元素，即为6
//	printf("%d\n", arr[7]);//打印为第八个元素，即为8
//	return 0;
//}
//int main()
//{
//	int arr[10] = {1,3,5,7,9,11,13,15,17,19};
//	int x = 0;
//	for (x = 0; x < 10; x++)
//	{
//		printf("%d\n", arr[x]);//循环打印第x+1个元素
//	}
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int x = 0;
//	for (x = 0; x < 10; x++)
//	{
//		scanf("%d", &arr[x]); // 循环输入第x+1个元素
//	}
//	for (x = 0; x < 10; x++)
//	{
//		printf("%d\n", arr[x]); // 循环打印第x+1个元素
//	}
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int x = 0;
//	for (x = 0; x < 10; x++)
//	{
//		printf("arr[%d] = %p\n", x, &arr[x]); // 循环打印第x+1个元素的地址
//	}
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%d\n", sizeof(arr)); // 打印数组的大小
//	return 0;
//}
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	printf("元素个数 = %d\n", sizeof(arr) / sizeof(arr[0]));
	return 0;
}






































#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int m = Add(a,b );
//	printf("%d", m);
//	return 0;
//}
//int set_arr(int arr[10], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = -1;
//	}
//}
//int printf_arr(int arr[10], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	set_arr(arr,sz);
//	printf_arr(arr, sz);
//	return 0;
//}
int set_arr(int arr[10], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		arr[i] = -1;
	}
}
int printf_arr(int arr[10], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
}
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	set_arr(arr,sz);
	printf_arr(arr,sz);
	return 0;
}



















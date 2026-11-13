#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//void Test(int arr[3][5], int x, int y)
//{
//	for (int i = 0; i < x; i++)
//	{
//		for (int j = 0; j < y; j++)
//		{
//			printf("%d ", *(*(arr + i) + j));
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	/*int* p1[10] = { 0 };
//	int (*p2)[10];*/
//	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
//	/*Test(arr, 3, 5);*/
//	int (*p1)(int, int);
//
//	return 0;
//}
int Add(int x, int y)
{
	return x + y;
}

int main()
{
	int (*p1)(int, int) = Add;
	int ret = p1(3, 2);
	printf("%d\n", ret);
	return 0;
}










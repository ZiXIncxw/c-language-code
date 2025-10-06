#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,5 };
//	int* p1 = &arr[0];
//	int* p2 = arr;
//	printf("%p\n", p1);
//	printf("%p\n", p2);
//	return 0;
//}
//int main()
//{
//	int arr[5] = { 1,2,3,4,5 };
//	int sz = sizeof(arr);
//	printf("%d\n", sz);
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%p\n", arr);
//	printf("%p\n", &arr);
//	printf("%p\n", &arr[0]);
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%p\n", arr);
//	printf("%p\n", arr+1);
//	printf("%p\n", &arr[0]);
//	printf("%p\n", &arr[0] + 1);
//	printf("%p\n", &arr);
//	printf("%p\n", &arr+1);
//	
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int* p = arr;
//	for (int i = 0; i < sz; i++)
//	{
//		scanf("%d", p + i);
//	}
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", i[p]);
//	}
//	return 0;
//}
//void Print(int* p,int sz1)
//{
//	printf("%d\n", sz1);
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz1 = sizeof(arr) / sizeof(arr[0]);
//	Print(arr,sz1);
//	return 0;
//}
//void MaoPao(int* arr, int sz,int flag)
//{
//	for (int i = 0; i < sz - 1; i++)
//	{
//		flag = 1;
//		for (int j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				flag = 0;
//			}
//		}
//		if (flag == 1)
//		{
//			break;
//		}
//	}
//}
//int main()
//{
//	int arr[10] = { 9,1,2,3,4,5,6,7,8,10 };
//	int flag = 1;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	MaoPao(arr, sz,flag);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int* p = &a;
//	int** pp = &p;
//	printf("%p\n", p);
//	printf("%p\n", pp);
//	printf("%d\n", *p);
//	printf("%d\n", **pp);
//	return 0;
//}
//int main()
//{
//	int arr1[5] = {1,2,3,4,5};
//	int arr2[5] = { 2,3,4,5,6};
//	int arr3[5] = { 3,4,5,6,7};
//	int* arr4[3] = { arr1,arr2,arr3 };
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 5; j++)
//		{
//			printf("%d ", arr4[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}
































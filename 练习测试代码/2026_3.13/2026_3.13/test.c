#define _CRT_SECURE_NO_WARNINGS 1

#include "Heap.h"

//int main()
//{
//	int arr[] = { 4,200,1,8,5,10,6,77,100 };
//	HP hp;
//	HPInit(&hp);
//	int j = sizeof(arr) / sizeof(arr[0]);
//	for(int i = 0;i < j;i++)
//	{
//		HPPush(&hp,arr[i]);
//	}
//	while (!HPEmpty(&hp))
//	{
//		printf("%d ", HPTop(&hp));
//		HPPop(&hp);
//	}
//	HPDestroy(&hp);
//	return 0;
//}


//void HeapSort(int* a, int n)
//{
//	// 降序，建小堆
//	// 升序，建大堆
//	/*for (int i = 1; i < n; i++)
//	{
//		AdjustUp(a, i);
//	}*/
//
//	for (int i = (n - 1 - 1) / 2; i >= 0; i--)
//	{
//		AdjustDown(a, n, i);
//	}
//
//	int end = n - 1;
//	while (end > 0)
//	{
//		Swap(&a[0], &a[end]);
//		AdjustDown(a, end, 0);
//		--end;
//	}



//int main()
//{
//	int arr[] = { 4,200,1,8,5,10,6,77,100 };
//	HP hp;
//	HPInit(&hp);
//	int j = sizeof(arr) / sizeof(arr[0]);
//	for (int i = 0; i < j; i++)
//	{
//		HPPush(&hp, arr[i]);
//	}
//	while (!HPEmpty(&hp))
//	{
//		printf("%d ", HPTop(&hp));
//		HPPop(&hp);
//	}
//
//	HPDestroy(&hp);
//	TestHeap2();
//	return 0;
//}

for (int i = (n - 1 - 1) / 2; i >= 0; i--)
{
	AdjustDown(a, n, i);
}
void HeapSort(int* a, int n)
{
	 /*降序，建小堆
	 升序，建大堆*/
	for (int i = 1; i < n; i++)
	{
		AdjustUp(a, i);
	}
	int end = n - 1;
	while (end > 0)
	{
		Swap(&a[0], &a[end]);
		AdjustDown(a, end, 0);
		--end;
	}
}

void TestHeap2()
{
	int a[] = { 4,2,8,1,5,6,9,7,2,7,9 };
	HeapSort(a, sizeof(a) / sizeof(int));
}


int main()
{
	TestHeap2();
	
	return 0;
}

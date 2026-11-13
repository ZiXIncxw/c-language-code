#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

void InsertSort(int* arr,int num)
{
	for (int i = 0; i < num - 1; i++)
	{
		int end = i;
		int tmp = arr[end + 1];
		while (end >= 0)
		{
			if (tmp < arr[end])
			{
				arr[end + 1] = arr[end];
				end--;
			}
			else
			{
				break;
			}
			arr[end + 1] = tmp;
		}
	}
}
//4层循环，一组一组排
void ShellSort(int* arr, int num)
{
	int gap = num;
	while (gap > 1)
	{
		gap = gap / 3 + 1;
		//gap>1时为预排序
		//gap==1时为插入排序
		for (int j = 0; j < gap; j++)
		{
			for (int i = j; i < num - gap; i += gap)
			{
				int end = i;
				int tmp = arr[end + gap];
				while (end >= 0)
				{
					if (tmp < arr[end])
					{
						arr[end + gap] = arr[end];
						end -= gap;
					}
					else
					{
						break;
					}
					arr[end + gap] = tmp;
				}
			}
		}
	}
}
//3层循环，一起排
//void ShellSort(int* a, int n)
//{
//	int gap = n;
//	while (gap > 1)
//	{
//		// +1保证最后一个gap一定是1
//		// gap > 1时是预排序
//		// gap == 1时是插入排序
//		gap = gap / 3 + 1;
//
//		for (size_t i = 0; i < n - gap; ++i)
//		{
//			int end = i;
//			int tmp = a[end + gap];
//			while (end >= 0)
//			{
//				if (tmp < a[end])
//				{
//					a[end + gap] = a[end];
//					end -= gap;
//				}
//				else
//				{
//					break;
//				}
//			}
//			a[end + gap] = tmp;
//		}
//	}
//}

#include <stdio.h>

void Swap(int* a, int* b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

void SelectSort(int* a, int n)
{
	int begin = 0, end = n - 1;
	while (begin < end)
	{
		int mini = begin, maxi = begin;
		for (int i = begin + 1; i <= end; ++i)
		{
			if (a[i] > a[maxi]) maxi = i;
			if (a[i] < a[mini]) mini = i;
		}

		Swap(&a[begin], &a[mini]);

		// 如果最大值原本在 begin 位置，它已经被换到 mini 位置了
		if (maxi == begin) maxi = mini;

		Swap(&a[end], &a[maxi]);

		++begin;
		--end;
	}
}


int main()
{
	int arr[] = { 9,1,2,5,7,4,6,3 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	//InsertSort(arr,sz);
	//ShellSort(arr, sz);
	SelectSort(arr, sz);
	for (int i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}









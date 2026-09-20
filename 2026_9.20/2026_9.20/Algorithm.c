#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

void Swap(int* p1, int* p2)
{
	int tmp = *p1;
	*p1 = *p2;
	*p2 = tmp;
}

void Test_InsertSort(int* arr,int size)
{
	for (int i = 0; i < size - 1; i++)
	{
		int end = i;
		int tmp = arr[end + 1];
		while (end >= 0)
		{
			if (tmp < arr[end])
			{
				arr[end+1] = arr[end];
				end--;
			}
			else
			{
				break;
			}
		}
		arr[end + 1] = tmp;
	}
}

void Test_ShellSort_1(int* arr,int size)
{
	int gap = size;
	while(gap > 1)
	{
		gap = gap / 3 + 1;
		for (int j = 0; j < gap; j++)
		{
			for (int i = j; i < size - gap; i+=gap)
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
				}
				arr[end + gap] = tmp;
			}
		}
	}
}

void Test_ShellSort_2(int* arr, int size)
{
	int gap = size;
	while (gap > 1)
	{
		gap = gap / 3 + 1;
			for (int i = 0; i < size - gap; i++)
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
				}
				arr[end + gap] = tmp;
			}
	}
}

void Test_Select(int* arr, int size)
{
	int begin = 0;
	int end = size - 1;
	while (begin < end)
	{
		int min = begin;
		int max = begin;
		for (int i = begin + 1; i <= end; i++)
		{
			if (arr[min] > arr[i])
			{
				min = i;
			}
			if (arr[max] < arr[i])
			{
				max = i;
			}
		}
		Swap(&arr[min], &arr[begin]);
		if (max == begin)
		{
			max = min;
		}
		Swap(&arr[max], &arr[end]);
		begin++;
		end--;
	}
}

//´ó¶Ñ£¬ÉýÐò
void AdjustDown(int* arr, int size, int parent)
{
	int child = 2 * parent + 1;
	while (child < size)
	{
		if (child + 1 < size && arr[child] < arr[child + 1])
		{
			child++;
		}

		if (arr[child] > arr[parent])
		{
			Swap(&arr[child], &arr[parent]);
			parent = child;
			child = 2 * parent + 1;
		}
		else
		{
			break;
		}
	}
}

void Test_HeapSort(int* arr, int size)
{
	for (int i = (size - 1 - 1) / 2; i >= 0; i--)
	{
		AdjustDown(arr, size, i);
	}
	int end = size - 1;
	while (end >= 0)
	{
		Swap(&arr[end], &arr[0]);
		AdjustDown(arr, end, 0);
		end--;
	}
}

void Print(int* arr, int size)
{
	for(int i = 0; i < size; i++)
	{
		printf("%d ", arr[i]);
	}
}

int main()
{
	int arr[] = { 9,7,5,3,1,10,8,6,4,2 };
	int size = sizeof(arr) / sizeof(arr[0]);
	//Test_InsertSort(arr,size);
	/*Test_ShellSort_1(arr, size);*/
	/*Test_ShellSort_2(arr, size);*/
	//Test_Select(arr, size);
	Test_HeapSort(arr, size);
	Print(arr, size);
	return 0;
}





#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

void Swap(int* p1, int* p2)
{
	int tmp = *p1;
	*p1 = *p2;
	*p2 = tmp;
}

int GetMidi(int* arr, int left, int right)
{
	int mid = (left + right) / 2;
	if (arr[left] < arr[mid])
	{
		if (arr[mid] < arr[right])
		{
			return mid;
		}
		else//L<M && M>R
		{
			if (arr[left] > arr[right])
			{
				return left;
			}
			else
			{
				return right;
			}
		}
	}
	else//L>M
	{
		if (arr[mid] > arr[right])
		{
			return mid;
		}
		else//L>M && M<R
		{
			if (arr[left] > arr[right])
			{
				return right;
			}
			else
			{
				return left;
			}
		}
	}
}

//1,4,5,3,6,8,4,2
void InsertSort(int* arr, int nums)
{
	
	for (int i = 0; i < nums - 1; i++)
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

void AdjustDown(int* arr, int num, int parent)
{
	int child = 2 * parent + 1;
	while (child < num)
	{
		if (child + 1 < num && arr[child + 1] > arr[child])
		{
			child++;
		}
		//找到左右孩子中大的一个
		if (arr[child] > arr[parent])
		{
			Swap(&arr[child], &arr[parent]);
			parent = child;
			child = (parent * 2) + 1;
		}
		else
		{
			break;
		}
	}
}
void HeapSort(int* arr, int num)
{
	for(int i = (num - 1 - 1) / 2; i >= 0; i--)
	{
		AdjustDown(arr, num, i);
	}
	int end = num - 1;
	while (end >= 0)
	{
		Swap(&arr[0], &arr[end]);
		AdjustDown(arr, end, 0);
		end--;
	}
}

void TestHeapSort()
{
	int arr[] = {1,4,5,3,6,8,4,2};
	int sz = sizeof(arr) / sizeof(arr[0]);
	HeapSort(arr, sz);
	for (int i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
}

void BubbleSort(int* arr, int num)
{
	for (int j = 0; j < num - 1; j++)
	{
		int flag = 1;
		for (int i = 0; i < num - 1-j; i++)
		{
			if (arr[i] > arr[i + 1])
			{
				Swap(&arr[i], &arr[i + 1]);
				flag = 0;
			}
		}
		if (flag == 1)
		{
			break;
		}
	}
}

void TestBubbleSort()
{
	int arr[] = { 1,4,5,3,6,8,4,2 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	BubbleSort(arr, sz);
	for (int i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
}

void QuickSort(int* arr,int left,int right,int nums)
{
	if (left >= right)
	{
		return;
	}
	if (nums < 10)
	{
		InsertSort(arr+left, nums);
	}
	else
	{
		//三位取中
		int mid = GetMidi(arr, left, right);
		Swap(&arr[left], &arr[mid]);

		int keyi = left;
		int begin = left;
		int end = right;
		while (begin < end)
		{
			//右边找小
			while (begin < end && arr[end] >= arr[keyi])
			{
				end--;
			}
			//左边找大
			while (begin < end && arr[begin] <= arr[keyi])
			{
				begin++;
			}
			Swap(&arr[begin], &arr[end]);
		}
		Swap(&arr[keyi], &arr[begin]);
		keyi = begin;
		QuickSort(arr, left, keyi - 1, nums);
		QuickSort(arr, keyi + 1, right, nums);
	}
	
}

void TestQuickSort()
{
	int arr[] = { 1,4,5,3,6,8,4,2 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	QuickSort(arr,0,sz-1,sz);
	for (int i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
}

void TestInsertSort()
{
	int arr[] = { 1,4,5,3,6,8,4,2 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	InsertSort(arr, sz);
	for (int i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
}


int main()
{
	//TestHeapSort();
	//TestBubbleSort();
	TestQuickSort();
	//TestInsertSort();
	return 0;
}







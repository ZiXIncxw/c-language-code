#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <stdlib.h>


void MergeNonSort(int* arr, int num)
{
	int gap = 1;
	int* tmp = (int*)malloc(sizeof(int) * num);
	if (tmp == NULL)
	{
		perror("malloc fail");
		return;
	}

	while (gap < num)
	{
		for (int i = 0; i < num; i += 2 * gap)
		{
			int begin1 = i, end1 = i + gap - 1;
			int begin2 = i + gap, end2 = i + gap * 2 - 1;

			if (begin2 >= num)
			{
				break;
			}
			if (end2 >= num)
			{
				end2 = num - 1;
			}
			int j = i;
			while (begin1 <= end1 && begin2 <= end2)
			{
				if (arr[begin1] < arr[begin2])
				{
					tmp[j++] = arr[begin1++];
				}
				else
				{
					tmp[j++] = arr[begin2++];
				}
			}

			while (begin1 <= end1)
			{
				tmp[j++] = arr[begin1++];
			}

			while (begin2 <= end2)
			{
				tmp[j++] = arr[begin2++];
			}

			memcpy(arr + i, tmp + i, (end2 - i + 1) * sizeof(int));
		}
		gap *= 2;
	}
	free(tmp);
}

void _MergeSort(int* arr,int* tmp,int begin,int end)
{
	
	if (begin >= end)
	{
		return;
	}

	int mid = (begin + end) / 2;
	//[begin,mid][mid+1,end]
	_MergeSort(arr, tmp, begin, mid);
	_MergeSort(arr, tmp, mid+1, end);

	int begin1 = begin, end1 = mid;
	int begin2 = mid + 1, end2 = end;
	int i = begin;
	while (begin1 <= end1 && begin2 <= end2)
	{
		if (arr[begin1] < arr[begin2])
		{
			tmp[i++] = arr[begin1++];
		}
		else
		{
			tmp[i++] = arr[begin2++];
		}
	}

	while (begin1 <= end1)
	{
		tmp[i++] = arr[begin1++];
	}

	while (begin2 <= end2)
	{
		tmp[i++] = arr[begin2++];
	}

	memcpy(arr+begin, tmp+begin, (end-begin+1) * sizeof(int));

}
void MergeSort(int* arr,int num)
{
	int* tmp = (int*)malloc(sizeof(int) * num);
	if (tmp == NULL)
	{
		perror("malloc fail");
		return;
	}
	_MergeSort(arr,tmp,0,num-1);
	
	free(tmp);
	tmp = NULL;
}

void TestMergeSort()
{
	int arr[] = { 9,1,2,5,7,4,6,3,8,10};
	int sz = sizeof(arr) / sizeof(arr[0]);
	MergeSort(arr,sz);
	for (int i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
}

void TestMergeSort1()
{
	int arr[] = { 9,1,2,5,7,4,6,3,8,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	MergeNonSort(arr, sz);
	for (int i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
}

int main()
{
	//TestMergeSort();
	TestMergeSort1();
	return 0;
}





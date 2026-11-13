#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdbool.h>
#include <math.h>

int bin_search(int arr[], int left, int right, int key)
{
	while (left <= right)
	{
		int mid = left + (right - left) / 2;
		if (arr[mid] < key)
		{
			left = mid + 1;
		}
		if (arr[mid] == key)
		{
			return mid;
		}
		if (arr[mid] > key)
		{
			right = mid - 1;
		}
	}
	return -1;
}

void Test_1()
{
	int num;
	scanf("%d", &num);
	for (int i = 1; i <= num; i++)
	{
		for (int j = i; j <= num; j++)
		{
			printf("%d*%d = %2d ", i, j, i * j);
		}
		printf("\n");
	}
}

bool Test_IsLeapYear(int year)
{
	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
	{
		return true;
	}
	return false;

}

bool Test_Is_Prime(int num)
{
	if (num < 2)
	{
		return false;
	}
	for (int i = 2; i <= sqrt(num); i++)
	{
		if (num % i == 0)
		{
			return false;
		}
	}
	return true;
}

void Init(int* arr,int size)
{
	for (int i = 0; i < size; i++)
	{
		arr[i] = 0;
	}
}
void Print(int* arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}
void Reverse(int* arr, int size)
{
	int begin = 0;
	int end = size - 1;
	while (begin < end)
	{
		int tmp = arr[begin];
		arr[begin] = arr[end];
		arr[end] = tmp;
		begin++;
		end--;
	}
}
int main()
{
	int arr[] = { 1,3,5,7,9,2,4,6,8,10 };
	int size = sizeof(arr) / sizeof(arr[0]);
	/*int ret = bin_search(arr, 0, size - 1, 7);
	printf("5的下标为：%d", ret);*/
	//Test_1();
	//printf("%d", Test_IsLeapYear(2001));
	//printf("%d", Test_Is_Prime(9));
	//Init(arr, size);
	Print(arr, size);
	Reverse(arr, size);
	Print(arr, size);
	return 0;
}








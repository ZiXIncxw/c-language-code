#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int Test_SingleDog(int* arr, int size)
{
	int result = 0;
	for (int i = 0; i < size; i++)
	{
		result ^= arr[i];
	}
	return result;
}

int main()
{
	int arr[] = { 1,2,3,4,5,1,2,3,4 };
	int size = sizeof(arr) / sizeof(arr[0]);
	printf("%d ", Test_SingleDog(arr, size));
	
	return 0;
}
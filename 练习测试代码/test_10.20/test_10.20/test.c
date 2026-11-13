#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
void Print(int* base,size_t sz)
{
	for (int i = 0; i < sz; i++)
	{
		printf("%d ", (*base) + i);
	}
}
void Swap(char* buf1, char* buf2, size_t width)
{
	for (int i = 0; i < width; i++)
	{
		int tmp = *buf1;
		*buf1 = *buf2;
		*buf2 = tmp;
		*buf1++;
		*buf2++;
	}
}
int cmp(const void* p1, const void* p2)
{
	return (*(int*)p1 - *(int*)p2);
}
void bubble_sort(void* base, size_t sz, size_t width, int (*cmp)(const void* p1, const void* p2))
{
	for (int i = 0; i < sz - 1; i++)
	{
		for (int j = 0; j < sz - 1 - i; j++)
		{
			if (cmp((char*)base + j * width, (char*)base + (j + 1) * width)>0)
			{
				Swap((char*)base + j * width, (char*)base + (j + 1) * width,width);
			}
		}
	}
}
int main()
{
	int arr[10] = { 10,9,8,7,6,5,4,3,2,1 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr, sz, sizeof(arr[0]), cmp);
	Print(arr,sz);
	return 0;
}
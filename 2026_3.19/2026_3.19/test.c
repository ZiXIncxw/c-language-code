#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//void InsretSort(int* arr,int num)
//{
//	for (int i = 0; i < num - 1; i++)
//	{
//		int end = i;
//		int tmp = arr[end + 1];
//		while (end >= 0)
//		{
//			if (tmp < arr[end])
//			{
//				arr[end + 1] = arr[end];
//				end--;
//			}
//			else
//			{
//				break;
//			}
//		}
//		arr[end + 1] = tmp;
//	}
//}


int main()
{
	int arr[] = { 1,5,7,3,2,9,6 };
	InsretSort(arr, 7);
	for (int i = 0; i < 7; i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;
}










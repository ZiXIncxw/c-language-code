#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

void Insert(int* arr,int n)
{
	for (int i = 0; i < n - 1; i++)//n-1
	{
		int end = i;
		int tmp = arr[end + 1];
		while (end >= 0)//ри╣Ц
		{
			if (tmp < arr[end])//arr[tmp]
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

void Print(int* arr,int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("%d ", arr[i]);
	}
}

int main()
{
	int arr[] = { 10,5,2,6,7,1,3,4,9,8 };
	Insert(arr,sizeof(arr)/sizeof(arr[0]));
	Print(arr, sizeof(arr) / sizeof(arr[0]));

	return 0;
}


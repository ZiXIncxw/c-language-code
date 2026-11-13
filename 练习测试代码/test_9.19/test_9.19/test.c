#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//
//int main()
//{
//    int n = 0;
//    int i = 0;
//    int j = 0;
//    int k = 0;
//    int arr[100] = { 0 };
//    scanf("%d", &n);
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    for (i = 0; i < n; i++)
//    {
//        for (j = i + 1; j < n; j++)
//        {
//            if (arr[j] == arr[i])
//            {
//                for (k = j; k < n - 1; k++)
//                {
//                    arr[k] = arr[k + 1];
//                }
//                n--;//É¾³ýÔªËØ
//                j--;//·ÀÖ¹ÖØ¸´
//            }
//
//        }
//    }
//    for (i = 0; i < n; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//    return 0;
//}
#include <stdio.h>

int main()
{
	int n = 0;
	int m = 0;
	int i = 0;
	int k = 0;
	int j = 0;
	int arr1[1000] = { 0 };
	int arr2[1000] = { 0 };
	int arr3[2000] = { 0 };
	scanf("%d %d", &n, &m);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr1[i]);
	}
	for (i = 0; j < m; j++)
	{
		scanf("%d", &arr2[j]);
	}
	i = 0;
	j = 0;
	while (i < n && j < m)
	{
		if (arr1[i] < arr2[j])
		{
			arr3[k++] = arr1[i++];
		}
		else
		{
			arr3[k++] = arr2[j++];
		}
	}
	if (i == n)
	{
		for (; j < m; j++)
		{
			arr3[k++] = arr2[j];
		}
	}
	else
	{
		for (; i < n; i++)
		{
			arr3[k++] = arr1[i];
		}
	}
	for (i = 0; i < k; i++)
	{
		printf("%d ", arr3[i]);
	}
	return 0;
}
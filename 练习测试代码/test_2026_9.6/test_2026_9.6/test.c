#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <math.h>

//int main()
//{
//	
//	int i = 0;
//	int j = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		int	IsPrime = 1;
//		for (j = 2; j < sqrt(i); j++)
//		{
//			if (i % j == 0)
//			{
//				IsPrime = 0;
//				break;
//			}
//		}
//		if (IsPrime == 1)
//		{
//			printf("%d ", i);
//		}
//		
//	}
//
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 0 };
//	int sum = 0;
//	for (int i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (int i = 0; i < 10; i++)
//	{
//		sum += arr[i];
//	}
//	printf("%d\n", sum / 10);
//	return 0;
//}

int main()
{
	int arr1[5] = { 1,2,3,4,5 };
	int arr2[5] = { 6,7,8,9,10 };

	int* p1 = arr1;
	int* p2 = arr2;
	int tmp = 0;
	for (int i = 0; i < 5; i++)
	{
		tmp = *p1;
		*p1 = *p2;
		*p2 = tmp;;
		p1++;
		p2++;
	}
	for (int i = 0; i < 5; i++)
	{
		printf("%d ", arr1[i]);
	}
	printf("\n");
	for (int i = 0; i < 5; i++)
	{
		printf("%d ", arr2[i]);
	}
}



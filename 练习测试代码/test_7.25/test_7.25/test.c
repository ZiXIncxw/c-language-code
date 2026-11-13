#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,78,84,9,10 };
//	int i = 0;
//	int max = arr[0];
//	for (i = 0; i < 10; i++)
//	{
//		if (max < arr[i])
//		{
//			max = arr[i];
//		}
//	}
//	printf("%d\n", max);
//	return 0;
//}
//int main()
//{
//	int a = 1;
//	int i = 1;
//	double sum = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		sum = sum + 1.0 / i*a;
//		a = -a;
//	}
//	printf("%lf\n", sum);
//	return 0;
//}
//int main()
//{
//	double sum = 0;
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 2 == 1)//ÆæÊý
//		{
//			sum += 1.0 / i;
//		}
//		else if (i % 2 == 0)//Å¼Êý
//		{
//			sum -=1.0 / i;
//		}
//	}
//	printf("%lf\n", sum);
//	return 0;
//}
//int main()
//{
//	int a = 18;
//	int b = 24;
//	int c = a % b;//18,
//	while (c != 0)
//	{
//		a = b;//24,18
//		b = c;//18,6
//		c = a % b;//6,0
//	}
//	printf("%d\n", b);
//	return 0;
//}
//int main()
//{
//	int n = 0;
//	while (scanf("%d", &n) != EOF)
//	{
//		
//		for (int i = 0; i < n; i++)
//		{
//			for (int j = 0; j < n; j++)
//			{
//				if (i == j || i + j == n - 1)
//				{
//					printf("*");
//				}
//				else
//				{
//					printf(" ");
//				}
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int n = 0;;
//	while (scanf("%d", &n) != EOF)
//	{
//		for (int i = 0; i < n; i++)
//		{
//			for (int j = 0; j < n; j++)
//			{
//				if(i == 0 || i == n-1)
//				{
//					printf("*");
//	            }
//				else if (j == 0 || j == n - 1)
//				{
//					printf("*");
//				}
//				else
//				{
//					printf(" ");
//				}
//			}
//			printf("\n");
//        }
//	}
//	return 0;
//}
//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d %d", &m, &n);
//	int arr[m][n];
//	for (int i = 0; i < m; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < m; j++)
//		{
//			printf("%d ", arr[j][i]);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i <= 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (i = 9; i >=0; i--)
//	{
//		printf("%d", arr[i]);
//	}
//	return 0;
//}
//int main()
//{
//	int i;
//	int n;
//	int m;
//	scanf("%d %d", &m, &n);
//	int arr1[1000] = { 0 };
//	int arr2[1000] = { 0 };
//	for (i = 0; i < m; i++)
//	{
//		scanf("%d", &arr1[i]);
//	}
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr2[i]);
//	}
//	i = 0;
//	int j = 0;
//	while (i < m && j < n)
//	{
//		if (arr1[i] < arr2[j])
//		{
//			printf("%d ", arr1[i]);
//			i++;
//		}
//		else
//		{
//			printf("%d ", arr2[j]);
//			j++;
//		}
//	}
//	while (i < m)
//	{
//		printf("%d ", arr1[i]);
//		i++;
//	}
//	while (j < n)
//	{
//		printf("%d ", arr2[j]);
//		j++;
//	}
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int sum = 0;
//	double a = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	for (i = 0; i < 10; i++)
//	{
//		sum += arr[i];
//	}
//	a = sum / 10.0;
//	printf("%lf\n", a);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int t = 0;
//	int arr1[3] = { 1,2,3 };
//	int arr2[3] = { 2,7,9 };
//	for (i = 0; i < 3; i++)
//	{
//		t = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = t;
//	}
//	for (i = 0; i < 3; i++)
//	{
//		printf("%d", arr1[i]);
//	}
//	printf("\n");
//	for (i = 0; i < 3; i++)
//	{
//		printf("%d", arr2[i]);
//	}
//	return 0;
//}











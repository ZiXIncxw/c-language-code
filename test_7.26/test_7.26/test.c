#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
//int main()
//{
//	int i = 16;
//	int m = sqrt(i);
//	printf("%d\n", m);
//	return 0;
//}
//int Add(int x, int y)
//{
//	int z = x + y;
//	return z;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int c = Add(a, b);
//	printf("%d\n", c);
//	return 0;
//}
//void set_arr(int arr[],int sz);
//void printf_arr(int arr[],int sz);
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	set_arr(arr, sz);
//	printf_arr(arr, sz);
//	return 0;
//}
//void set_arr(int arr[],int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = -1;
//	}
//}
//void printf_arr(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d\n", arr[i]);
//	}
//}

//int is_leap_year(int year)
//{
//	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//}
//int get_months_of_years(int year, int month)
//{
//	int days[] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
//	int day = days[month-1];
//	if (is_leap_year(year) && month == 2)
//	{
//		day++;
//	}
//	else
//	{
//		return day;
//	}
//}
//int main()
//{
//	int year = 0;
//	int month = 0;
//	scanf("%d %d", &year, &month);
//	int d = get_months_of_years(year,month);
//	printf("%d\n", d);
//	return 0;
//}
//#include <string.h>
//int main()
//{
//	printf("%d\n", strlen("abcdef"));
//	return 0;
//}
//int main()
//{
//	printf("%d", printf("%d", printf("%d", 43)));
//	return 0;
//}
//int main()
//{
//	int n = 0;
//	while (scanf("%d", &n)!=EOF)
//	{
//		int i = 0;
//		int j = 0;
//		for (i = 0; i < n; i++)
//		{
//			for (j = 0; j < n; j++)
//			{
//				if (i == j)
//				{
//					printf("*");
//				}
//				else if (i + j == n - 1)
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
//	    int n = 0;
//	    scanf("%d", &n);
//		int i = 0;
//		int j = 0;
//		for (i = 0; i < n; i++)
//		{
//			for (j = 0; j < n; j++)
//			{
//				if (i == j)
//				{
//					printf("*");
//				}
//				else if (i + j == n - 1)
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
//	return 0;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			if (i == 0 || i == n - 1)
//			{
//				printf("* ");
//			}
//			else if (j == 0 || j == n - 1)
//			{
//				printf("* ");
//			}
//			else
//			{
//				printf("  ");
//			}
//		}
//		printf("\n");
//	}
//	return 0;
//}
//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d %d", &m, &n);
//	int arr[m][n];
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < m; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < m; j++)
//		{
//			printf("%d", arr[j][i]);
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int arr[10] = {0};
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (i = 9;i >=0;i-- )
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int m = 0;
//	int n = 0;
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
//			printf("%d", arr1[i]);
//			i++;
//		}
//		else
//		{
//			printf("%d", arr2[j]);
//			j++;
//		}
//	}
//		while (i < m)
//		{
//			printf("%d", arr1[i]);
//			i++;
//		}
//		while (j < n)
//		{
//			printf("%d", arr2[j]);
//			j++;
//		}
//	return 0;
//}
//void init( int arr[],int sz)
//{
//	for (int i = 0; i < sz; i++)
//	{
//		arr[i] = 0;
//	}
//}
//void print(int arr[], int sz)
//{
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//void reverse(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left < right)
//	{
//		int t = arr[left];
//		arr[left] = arr[right];
//		arr[right] = t;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	int i;
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	init(arr,sz);
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = i + 1;
//	}
//	print(arr,sz);
//	reverse(arr,sz);
//	print(arr, sz);
//	return 0;
//}
//int is_leap_year(int year)
//{
//	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//}
//int main()
//{
//	int year = 0;
//	scanf("%d", &year);
//	if (is_leap_year(year) == 1)
//	{
//		printf("是闰年");
//	}
//	else
//	{
//		printf("不是闰年");
//	}
//	return 0;
//}
//void print_multiplication_table(int n)
//{
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= i; j++)
//		{
//			printf("%d*%d =%2d ", i ,j,i*j);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int n;
//	printf("请输入");
//	scanf("%d", &n);
//	print_multiplication_table(n);
//	return 0;
//}


//void print_multiplication_table(int n)
//{
//    for (int i = 1; i <= n; i++)       // 控制行数
//    {
//        for (int j = 1; j <= i; j++)   // 控制列数（每行有i列）
//        {
//            // 格式化输出：乘积占2位，右对齐
//            printf("%d*%d=%2d   ", j, i, i * j);
//        }
//        printf("\n");  // 每行结束后换行
//    }
//}
//
//int main()
//{
//    int n = 0;
//    printf("请输入乘法口诀表的大小: ");
//    scanf("%d", &n);
//
//    print_multiplication_table(n);
//
//    return 0;
//}
//int is_prime(int num)
//{
//	if (num < 2)
//	{
//		return 0;
//	}
//	if (num == 2)
//	{
//		return 1;
//	}
//	if (num % 2 == 0)
//	{
//		return 0;
//	}
//	int a = sqrt(num);
//	for (int i = 3; i <= a; i += 2)
//	{
//		if (num % i == 0)
//		{
//			return 0;
//		}
//	}
//}
//int main()
//{
//	int count = 0;
//	for (int num = 100; num<= 200; num++)
//	{
//		if (is_prime(num))
//		{
//			printf("%d ", num);
//			count++;
//		}
//	}
//	printf("共打印%d次素数", count);
//	return 0;
//}































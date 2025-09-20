#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//
//int main()
//{
//	int n = 0;
//	int m = 0;
//	int i = 0;
//	int k = 0;
//	int j = 0;
//	int arr1[1000] = { 0 };
//	int arr2[1000] = { 0 };
//	int arr3[2000] = { 0 };
//	scanf("%d %d", &n, &m);
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr1[i]);
//	}
//	for (i = 0; j < m; j++)
//	{
//		scanf("%d", &arr2[j]);
//	}
//	i = 0;
//	j = 0;
//	while (i < n && j < m)
//	{
//		if (arr1[i] < arr2[j])
//		{
//			arr3[k++] = arr1[i++];
//		}
//		else
//		{
//			arr3[k++] = arr2[j++];
//		}
//	}
//	if (i == n)
//	{
//		while (j < m)
//		{
//			arr3[k++] = arr2[j++];
//		}
//	}
//	else
//	{
//		while (i < n)
//		{
//			arr3[k++] = arr1[i++];
//		}
//	}
//	for (i = 0; i < k; i++)
//	{
//		printf("%d ", arr3[i]);
//	}
//	return 0;
//}
//用while循环实现有序数组排列
//#include <stdio.h>
//
//int main()
//{
//    float score[5][5] = { 0.0 };
//    for (int i = 0; i < 5; i++)
//    {
//        float sum = 0.0;
//        for (int j = 0; j < 5; j++)
//        {
//            scanf("%f", &score[i][j]);
//            sum += score[i][j];
//            printf("%.1f ", score[i][j]);
//        }
//        printf("%.1f\n", sum);
//    }
//
//    return 0;
//}
//#include <stdio.h>
//int main()
//{
//    int n = 0;
//    int m = 0;
//    scanf("%d %d", &n, &m);
//    int arr[100][100] = { 0 };
//    for (int i = 0; i < n; i++)
//    {
//        for (int j = 0; j < m; j++)
//        {
//            scanf("%d", &arr[i][j]);
//        }
//    }
//    int x = 0;
//    int y = 0;
//    scanf("%d %d", &x, &y);
//    printf("%d ", arr[x - 1][y - 1]);
//
//    return 0;
//
//}
//#include <stdio.h>
//
//int main()
//{
//    int n = 0;
//    int m = 0;
//    scanf("%d %d", &n, &m);
//    int arr1[100][100] = { 0 };
//    for (int i = 0; i < n; i++)
//    {
//        for (int j = 0; j < m; j++)
//        {
//            scanf("%d", &arr1[i][j]);
//        }
//    }
//    for (int i = 0; i < n; i++)
//    {
//        for (int j = 0; j < m; j++)
//        {
//            printf("%d ", arr1[i][j]);
//        }
//        printf("\n");
//    }
//
//    return 0;
//}
//#include <stdio.h>
//int main()
//{
//    int n = 0;
//    int m = 0;
//    int max = 0;
//    int i = 0;
//    int j = 0;
//    scanf("%d %d", &n, &m);
//    int arr[100][100] = { 0 };
//    for (i = 0; i < n; i++)
//    {
//        for (j = 0; j < m; j++)
//        {
//            scanf("%d", &arr[i][j]);
//        }
//    }
//    i = 0;
//    j = 0;
//    int x = 0;
//    int y = 0;
//    for (i = 0; i < n; i++)
//    {
//        for (j = 0; j < m; j++)
//        {
//            if (arr[i][j] > max)
//            {
//                max = arr[i][j];
//                x = i + 1;
//                y = j + 1;
//            }
//        }
//    }
//    printf("%d %d", x, y);
//
//    return 0;
//
//}
//#include <stdio.h>
//
//int main()
//{
//    int flag = 1;
//    int n = 0;
//    int m = 0;
//    scanf("%d %d", &n, &m);
//    int arr1[100][100] = { 0 };
//    int arr2[100][100] = { 0 };
//    for (int i = 0; i < n; i++)
//    {
//        for (int j = 0; j < m; j++)
//        {
//            scanf("%d", &arr1[i][j]);
//        }
//    }
//    for (int i = 0; i < n; i++)
//    {
//        for (int j = 0; j < m; j++)
//        {
//            scanf("%d", &arr2[i][j]);
//        }
//    }
//    for (int i = 0; i < n; i++)
//    {
//        for (int j = 0; j < m; j++)
//        {
//            if (arr1[i][j] != arr2[i][j])
//            {
//                flag = 0;
//                break;
//            }
//        }
//    }
//    if (flag)
//    {
//        printf("Yes\n");
//    }
//    else
//    {
//        printf("No\n");
//    }
//    return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//    int n = 0;
//    int i = 0;
//    int j = 0;
//    scanf("%d", &n);
//    int arr[10][10] = { 0 };
//    for (i = 0; i < n; i++)
//    {
//        for (j = 0; j < n; j++)
//        {
//            scanf("%d", &arr[i][j]);
//        }
//    }
//    for (i = 0; i < n; i++)
//    {
//        for (j = 0; j < n; j++)
//        {
//            if (i > j)
//            {
//                if (arr[i][j] != 0)
//                {
//                    printf("NO\n");
//                    return 0;
//                }
//            }
//        }
//    }
//    printf("YES\n");
//    return 0;
//}

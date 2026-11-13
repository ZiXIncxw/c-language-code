#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//
//int main()
//{
//    int n = 0;
//    while (~scanf("%d", &n))
//    {
//        int arr[101] = { 0 };
//        for (int i = 0; i <= n; i++)
//        {
//            arr[i] = i;
//        }
//        int i = 0;
//        for (i = 2; i <= n; i++)
//        {
//            int j = 0;
//            for (j = i + 1; j <= n; j++)
//            {
//                if (arr[j] % i == 0)
//                {
//                    arr[j] = 0;
//                }
//            }
//        }
//        int count = 0;
//        for (int i = 2; i <= n; i++)
//        {
//            if (arr[i] != 0)
//            {
//                printf("%d ", arr[i]);
//            }
//            else
//            {
//                count++;
//            }
//        }
//        printf("\n%d", count);
//    }
//    return 0;
//}
//#include <stdio.h>
//int is_p(int n)
//{
//    for (int i = 2; i < n; i++)
//    {
//        if (n % i == 0)
//        {
//            return 0;
//        }
//        else
//        {
//            return 1;
//        }
//    }
//}
//int main()
//{
//    int n = 0;
//    while (~scanf("%d", &n))
//    {
//        int count = 0;
//        for (int i = 2; i <= n; i++)
//        {
//            if (is_p(n) == 1)
//            {
//                printf("%d", i);
//            }
//            else {
//                count++;
//            }
//        }
//        printf("%d", count);
//    }
//    return 0;
//}
//#include <stdio.h>
//int main()
//{
//    int n = 0;
//    int count = 0;
//    while (~scanf("%d", &n))
//    {
//        for (int i = 2; i <= n; i++)
//        {
//            int j = 0;
//            for (j = 2; j < i; j++)
//            {
//                if (i % j == 0)
//                {
//                    count++;
//                    break;
//                }
//            }
//            if (i == j)
//            {
//                printf("%d ", j);
//            }
//        }
//        printf("\n%d", count);
//    }
//
//    return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//    int count = 0;
//    int n = 0;
//    int m = 0;
//    int arr1[100][100] = { 0 };
//    int arr2[100][100] = { 0 };
//    scanf("%d %d", &n, &m);
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
//            if (arr1[i][j] == arr2[i][j])
//            {
//                count++;
//            }
//        }
//    }
//    printf("%.2f", 100.0 * count / (m * n));
//
//    return 0;
//}
//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//    char name[100] = { 0 };
//    char pass[100] = { 0 };
//    while (~scanf("%s  %s", &name, &pass))
//    {
//        if (strcmp(name, "admin") == 0 && strcmp(pass, "admin") == 0)
//        {
//            printf("Login Success!\n");
//        }
//        else {
//            printf("Login Fail!\n");
//        }
//    }
//    return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//    int count = 0;
//    for (int i = 1; i <= 2019; i++)
//    {
//        int x = i;
//        while (x)
//        {
//            if (x % 10 == 9)
//            {
//                count++;
//                break;
//            }
//            x /= 10;
//        }
//    }
//    printf("%d\n", count);
//    return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//    int n = 0;
//    int count1 = 0;
//    int count2 = 0;
//    scanf("%d", &n);
//    for (int i = 1; i <= n; i++)
//    {
//        if (i % 2 == 1)
//        {
//            count1++;
//        }
//        else
//        {
//            count2++;
//        }
//    }
//    printf("%d %d\n", count1, count2);
//    return 0;
//}
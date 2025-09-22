#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//
//int main()
//{
//    int n = 0;
//    int m = 0;
//    int i = 0;
//    int j = 0;
//    scanf("%d %d", &n, &m);
//    int arr[10][10] = { 0 };
//    for (i = 0; i < n; i++)
//    {
//        for (int j = 0; j < m; j++)
//        {
//            scanf("%d", &arr[i][j]);
//        }
//    }
//    int k = 0;
//    char t = 0;
//    scanf("%d", &k);
//    int a = 0;
//    int b = 0;
//    for (i = 0; i < k; i++)
//    {
//        scanf(" %c %d %d", &t, &a, &b);
//        if (t == 'r')
//        {
//            for (j = 0; j < m; j++)
//            {
//                int tmp = arr[a - 1][j];
//                arr[a - 1][j] = arr[b - 1][j];
//                arr[b - 1][j] = tmp;
//            }
//        }
//        else if (t == 'c')
//        {
//            for (j = 0; j < n; j++)
//            {
//                int tmp = arr[j][a - 1];
//                arr[j][a - 1] = arr[j][b - 1];
//                arr[j][b - 1] = tmp;
//            }
//        }
//    }
//    for (i = 0; i < n; i++)
//    {
//        for (int j = 0; j < m; j++)
//        {
//            printf("%d ", arr[i][j]);
//        }
//        printf("\n");
//    }
//
//    return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//    int n = 0;
//    int arr[100][100] = { 0 };
//    scanf("%d", &n);
//    for (int i = 0; i < n; i++)
//    {
//        for (int j = 0; j <= i; j++)
//        {
//            if (i == j || j == 0)
//            {
//                arr[i][j] = 1;
//            }
//            else
//            {
//                arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
//            }
//        }
//    }
//    for (int i = 0; i < n; i++)
//    {
//        for (int j = 0; j <= i; j++)
//        {
//            printf("%5d", arr[i][j]);
//        }
//        printf("\n");
//    }
//    return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//    char K, O, B;
//    char flag = 'O';
//    char arr[3][3] = { 0 };
//    for (int i = 0; i < 3; i++)
//    {
//        for (int j = 0; j < 3; j++)
//        {
//            scanf(" %c", &arr[i][j]);
//        }
//    }
//    for (int i = 0; i < 3; i++)
//    {
//        if (arr[i][0] == arr[i][1] && arr[i][1] == arr[i][2] && arr[i][1] != 'O')
//        {
//            flag = arr[i][1];
//            break;
//        }
//        if (arr[0][i] == arr[1][i] && arr[1][i] == arr[2][i] && arr[0][i] != 'O')
//        {
//            flag = arr[0][i];
//            break;
//        }
//    }
//    if (arr[0][0] == arr[1][1] && arr[1][1] == arr[2][2] && arr[2][2] != 'O')
//    {
//        flag = arr[0][0];
//    }
//    if (arr[0][2] == arr[1][1] && arr[1][1] == arr[2][0] && arr[2][0] != 'O')
//    {
//        flag = arr[2][0];
//    }
//    if (flag == 'K')
//    {
//        printf("KiKi wins!\n");
//    }
//    else if (flag == 'B')
//    {
//        printf("BoBo wins!\n");
//    }
//    else
//    {
//        printf("No winner!\n");
//    }
//    return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//    int n = 0;
//    int arr[100] = { 0 };
//    int i = 0;
//    scanf("%d", &n);
//    while (n)
//    {
//        arr[i] = n % 6;
//        i++;
//        n /= 6;
//    }
//    for (i = i - 1; i >= 0; i--)
//    {
//        printf("%d", arr[i]);
//    }
//    return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    long long sum = 0;
//    for (int i = 1; i <= n; i++)
//    {
//        sum += i;
//    }
//    printf("%lld\n", sum);
//    return 0;
//}
#include <stdio.h>

int main()
{
    int k = 0;
    int a = 0;
    int b = 0;
    scanf("%d:%d %d", &a, &b, &k);
    int h = ((b + k) / 60 + a) % 24;
    int m = (b + k % 60) % 60;
    printf("%02d:%02d", h, m);
    return 0;
}
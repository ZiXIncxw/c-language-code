#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
    int N = 0;
    int arr[51] = { 0 };
    int m = 0;
    int i = 0;
    scanf("%d", &N);
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &m);
    for (i = N; i>0; i--)
    {
        if (arr[i - 1] > m)
        {
            arr[i] = arr[i - 1];
        }
        else
        {
            arr[i] = m;
            break;
        }
    }
    if (i == 0)
    {
        arr[i] = m;
    }
    for (int i = 0; i <= N; i++)
    {
        printf("%d", arr[i]);
    }
    return 0;
}
//#include <stdio.h>
//int main()
//{
//    int n = 0;
//    int arr[50] = { 0 };
//    int m = 0;//要插入的数据
//    //输入数据
//    scanf("%d", &n);
//    int i = 0;
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    scanf("%d", &m);
//    //处理
//    for (i = n; i > 0; i--)
//    {
//        if (arr[i - 1] > m)
//        {
//            arr[i] = arr[i - 1];
//        }
//        else
//        {
//            arr[i] = m;
//            break;
//        }
//    }
//    //如果插入数字小于所有的数字
//    if (i == 0)
//    {
//        arr[i] = m;
//    }
//    //打印
//    for (i = 0; i < n + 1; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//    return 0;
//}
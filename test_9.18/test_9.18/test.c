#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//
//int main()
//{
//    int arr[11] = { 0 };
//    int count1 = 0;
//    int count2 = 0;
//    for (int i = 0; i < 10; i++)
//    {
//        scanf("%d", &arr[i]);
//        if (arr[i] < 0)
//        {
//            count1++;
//        }
//        if (arr[i] > 0)
//        {
//            count2++;
//        }
//    }
//    printf("positive:%d\n", count2);
//    printf("negative:%d\n", count1);
//    return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//    int n = 0;
//    int t = 0;
//    int sum = 0;
//    scanf("%d", &n);
//    for (int i = 0; i < n; i++)
//    {
//        scanf("%d", &t);
//        sum += t;
//    }
//    printf("%d\n", sum);
//    return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//    int n = 0;
//    int t = 0;
//    int max = 0;
//    int min = 100;
//    scanf("%d", &n);
//    for (int i = 0; i < n; i++)
//    {
//        scanf("%d", &t);
//        if (t > max)
//        {
//            max = t;
//        }
//        if (t < min)
//        {
//            min = t;
//        }
//    }
//    printf("%d\n", max - min);
//    return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//    int n = 0;
//    int flag1 = 0;
//    int flag2 = 0;
//    int arr[51] = { 0 };
//    scanf("%d", &n);
//    for (int i = 0; i < n; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    for (int i = n - 1; i > 0; i--)
//    {
//        if (arr[i] > arr[i - 1])
//        {
//            flag1 = 1;
//        }
//        else if (arr[i] < arr[i - 1])
//        {
//            flag2 = 1;
//        }
//    }
//    if (flag1 + flag2 == 2)
//    {
//        printf("unsorted\n");
//    }
//    else 
//    {
//        printf("sorted\n");
//    }
//
//    return 0;
//}


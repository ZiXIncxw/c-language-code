#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//
//int main()
//{
//    int n = 0;
//    int score[50] = { 0 };
//    scanf("%d", &n);
//    for (int i = 0; i < n; i++)
//    {
//        scanf("%d ", &score[i]);
//    }
//    for (int i = 0; i < n; i++)
//    {
//        for (int j = 0; j < n - i - 1; j++)
//        {
//            if (score[j] < score[j + 1])
//            {
//                int tmp = score[j];
//                score[j] = score[j + 1];
//                score[j + 1] = tmp;
//            }
//        }
//    }
//    printf("%d %d %d %d %d", score[0], score[1], score[2], score[3], score[4]);
//    return 0;
//}
//#include <stdio.h>
//#include <stdlib.h>
//int compare_desc(const void* a, const void* b)
//{
//    return *(int*)b - *(int*)a;
//}
//
//int main()
//{
//    int n = 0;
//    int score[50] = { 0 };
//    scanf("%d", &n);
//    for (int i = 0; i < n; i++)
//    {
//        scanf("%d ", &score[i]);
//    }
//    for (int i = 0; i < n; i++)
//    {
//        for (int j = 0; j < n - i - 1; j++)
//        {
//            if (score[j] < score[j + 1])
//            {
//                int tmp = score[j];
//                score[j] = score[j + 1];
//                score[j + 1] = tmp;
//            }
//        }
//    }
//    qsort(score, n, 4, compare_desc);
//        printf("%d %d %d %d %d", score[0], score[1], score[2], score[3], score[4]);
//    return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//    char arr[100] = { 0 };
//    gets(arr);
//    int i = 0;
//    int flag = 0;
//    while (arr[i] != '0')
//    {
//        if (arr[i] == 'A')
//        {
//            flag++;
//        }
//        else if (arr[i] == 'B')
//        {
//            flag--;
//        }
//        i++;
//    }
//    if (flag < 0)
//    {
//        printf("B");
//    }
//    else if (flag > 0)
//    {
//        printf("A");
//    }
//    else if (flag == 0)
//    {
//        printf("E");
//    }
//    return 0;
//}












#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//
//int main()
//{
//    double sum = 0.0;
//    double high[10] = { 0.0 };
//    for (int i = 0; i < 5; i++)
//    {
//        scanf("%lf", &high[i]);
//        sum += high[i];
//    }
//    printf("%.2lf", sum / 5.00);
//    return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//    int n = 0;
//    while (~scanf("%d", &n))
//    {
//        switch (n)
//        {
//        case 200:
//            printf("OK\n");
//            break;
//        case 202:
//            printf("Accepted\n");
//            break;
//        case 400:
//            printf("Bad Request\n");
//            break;
//        case 403:
//            printf("Forbidden\n");
//            break;
//        case 404:
//            printf("Not Found\n");
//            break;
//        case 500:
//            printf("Internal Server Error\n");
//            break;
//        case 502:
//            printf("Bad Gateway\n");
//            break;
//        }
//    }
//    return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//    int n = 0;
//    while(~scanf("%d",&n))
//    {
//        for(int i = 1;i<=n;i++)
//        {
//            for(int j = 1;j<=i;j++)
//            {
//                printf("%d ",j);
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//    int score[7] = { 0 };
//    int sum = 0;
//    int max = 0;
//    int min = 100;
//    int i = 0;
//    double total = 0.0;
// 
//    for (i = 0; i < 7; i++)
//    {
//        scanf("%d", &score[i]);
//        sum += score[i];
//    }
//    for (i = 0; i < 7; i++)
//    {
//        if (score[i] > max)
//        {
//            max = score[i];
//        }
//        if (score[i] < min)
//        {
//            min = score[i];
//        }
//    }
//    total = (sum - max - min) / 5.00;
//    printf("%.2f", total);
//    return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//    int score = 0;
//    int sum = 0;
//    int max = 0;
//    int min = 100;
//    int i = 0;
//    double total = 0.0;
//    while (scanf("%d", &score) != EOF)
//        for (i = 0; i < 7; i++)
//        {
//            sum += score;
//        }
//    for (i = 0; i < 7; i++)
//    {
//        if (score > max)
//        {
//            max = score;
//        }
//        if (score < min)
//        {
//            min = score;
//        }
//    }
//    total = (sum - max - min) / 5.00;
//    printf("%.2f", total);
//    return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//    int score = 0;
//    int sum = 0;
//    int max = 0;
//    int min = 100;
//    int count = 0;
//    while (scanf("%d", &score) != EOF)
//    {
//        if (score > max)
//        {
//            max = score;
//        }
//        if (score < min)
//        {
//            min = score;
//        }
//        sum += score;
//        count++;
//        if (count == 7)
//        {
//            printf("%.2lf\n", (sum - max - min) / 5.00);
//            count = 0;//重置
//            max = 0;//重置
//            min = 100;//重置
//            sum = 0;//重置
//        }
//    }
//    return 0;
//}



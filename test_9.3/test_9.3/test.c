#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//
//int main()
//{
//    int n = 0;
//    int h = 0;
//    int m = 0;
//    while (~scanf("%d %d %d", &n, &h, &m))
//    {
//        if (m % h == 0)
//        {
//            printf("%d\n", n - m / h);
//        }
//        else if (m % h != 0)
//        {
//            printf("%d\n", n - m / h - 1);
//        }
//    }
//
//    return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//    printf("I lost my cellphone!");
//    return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//    printf("Name    Age    Gender\n");
//    printf("---------------------\n");
//    printf("Jack    18     man\n");
//
//    return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//    int a = 0;
//    int b = 0;
//    scanf("%x %o", &a, &b);
//    printf("%d\n", a + b);
//
//    return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//    float price = 0.0;
//    int month = 0;
//    int day = 0;
//    int flag = 0;
//    scanf("%f %d %d %d", &price, &month, &day, &flag);
//
//    if (month == 11 && day == 11)
//    {
//        if (flag == 1)
//        {
//            if (price * 0.7 - 50.0 < 0.0)
//            {
//                printf("0.00");
//            }
//            else
//                printf("%.2f", price * 0.7 - 50.0);
//        }
//        else if (flag == 0)
//        {
//            printf("%.2f", price * 0.7);
//        }
//
//    }
//    if (month == 12 && day == 12)
//    {
//        if (flag == 1)
//        {
//            if (price * 0.8 - 50.0 < 0.0)
//            {
//                printf("0.00");
//            }
//            else
//                printf("%.2f", price * 0.8 - 50.0);
//        }
//        else if (flag == 0)
//        {
//            printf("%.2f", price * 0.8);
//        }
//        if (price < 0.0)
//        {
//            printf("0.00");
//        }
//    }
//    return 0;
//}
//ÊºÉ½´úÂë£¡
#include<stdio.h>

int main()
{
    double price = 0.0;
    int month = 0;
    int day = 0;
    int flag = 0;

    scanf("%lf %d %d %d", &price, &month, &day, &flag);
    if (month == 11 && day == 11)
    {
        price = price * 0.7 - 50.0 * flag;
    }
    else if (month == 12 && day == 12)
    {
        price = price * 0.8 - 50 * flag;
    }
    if (price < 0)
    {
        printf("0.00\n");
    }
    else
    {
        printf("%.2lf\n", price);
    }

    return 0;
}








#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    if (n >= 140)
//    {
//        printf("Genius");
//    }
//    return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//    int score = 0;
//    scanf("%d", &score);
//    if (score >= 90 && score <= 100)
//    {
//        printf("Perfect");
//    }
//    return 0;
//}
//#include <stdio.h>
//int main()
//{
//    int n = 0;
//    while (~scanf("%d", &n))
//        if (n >= 60)
//        {
//            printf("Pass\n");
//        }
//        else
//        {
//            printf("Fail");
//        }
//    return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//    int n = 0;
//    while (scanf("%d", &n) != EOF)
//    {
//        if (n % 2 == 1)
//        {
//            printf("Odd\n");
//        }
//        else
//        {
//            printf("Even\n");
//        }
//    }
//    return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//    int a = 0;
//    int b = 0;
//    int c = 0;
//    int max = 0;
//    scanf("%d %d %d", &a, &b, &c);
//    if (a > max)
//    {
//        max = a;
//    }
//    if (b > max)
//    {
//        max = b;
//    }
//    if (c > max)
//    {
//        max = c;
//    }
//    printf("%d\n", max);
//    return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//    char arr[100] = "AaEeIiOoUu";
//    char n = 0;
//    while (scanf("%c\n", &n) != EOF)
//    {
//        int i = 0;
//        for (i = 0; i < 10; i++)
//        {
//            if (n == arr[i])
//            {
//                printf("Vowel\n");
//                break;
//            }
//        }
//        if (i == 10)
//        {
//            printf("Consonant\n");
//        }
//    }
//    return 0;
//}
//#include <ctype.h>
//#include <stdio.h>
//
//int main()
//{
//    char n = 0;
//    while (~scanf(" %c", &n))
//    {
//        if (isalpha(n))
//        {
//            printf("%c is an alphabet.\n", n);
//        }
//        else
//        {
//            printf("%c is not an alphabet.\n", n);
//        }
//    }
//    return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//    char n = 0;
//    while (~scanf(" %c", &n))
//    {
//        if (n >= 65 && n <= 90)
//        {
//            printf("%c\n", n + 32);
//        }
//        if (n >= 97 && n <= 122)
//        {
//            printf("%c\n", n - 32);
//        }
//    }
//
//    return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//    int t = 0;
//    while (~scanf(" %d", &t))
//    {
//        if (t > 0)
//        {
//            printf("1\n");
//        }
//        if (t == 0)
//        {
//            printf("0.5\n");
//        }
//        if (t < 0)
//        {
//            printf("0\n");
//        }
//    }
//    return 0;
//}
//
#include <stdio.h>
int main()
{
    int a = 0;
    int b = 0;
    int c = 0;
    while (scanf("%d %d %d", &a, &b, &c) != EOF)
    {
        if (a + b > c && a + c > b && b + c > a)
        {
            if (a == b && b == c)
            {
                printf("Equilateral triangle!\n");
            }
            else if (a == b || a == c || b == c)
            {
                printf("Isosceles triangle!\n");
            }
            else
            {
                printf("Ordinary triangle!\n");
            }
        }
        else
        {
            printf("Not a triangle!\n");
        }
    }
    return 0;
}


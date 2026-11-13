#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//
//int main()
//{
//    printf("%#o %#X", 1234, 1234);
//    return 0;
//}
//
//#include <stdio.h>
//
//int main()
//{
//    int n = 1234;
//    scanf("%d", &n);
//    while (n)
//    {
//        printf("%d", n % 10);
//        n /= 10;
//    }
//    return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//    int ch = 0;
//    while ((ch = getchar()) != EOF)
//    {
//        putchar(ch + 32);
//        printf("\n");
//        getchar();
//    }
//    return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//    for (int i = 0; i < 2; i++)
//    {
//        for (int j = 0; j < 5; j++)
//        {
//            printf(" ");
//        }
//        for (int j = 0; j < 2; j++)
//        {
//            printf("**");
//        }
//        printf("\n");
//    }
//    for (int i = 0; i < 2; i++)
//    {
//        for (int j = 0; j < 12; j++)
//        {
//            printf("************");
//        }
//        printf("\n");
//    }
//    for (int i = 0; i < 2; i++)
//    {
//        for (int j = 0; j < 4; j++)
//        {
//            printf("    ");
//        }
//        for (int j = 0; j < 1; j++)
//        {
//            printf("*");
//        }
//        for (int j = 0; j < 2; j++)
//        {
//            printf("  ");
//        }
//        for (int j = 0; j < 1; j++)
//        {
//            printf("*");
//        }
//        printf("\n");
//    }
//    return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//    for (int i = 0; i < 2; i++)
//    {
//        for (int j = 0; j < 5; j++)
//        {
//            printf(" ");
//        }
//        for (int j = 0; j < 2; j++)
//        {
//            printf("*");
//        }
//        printf("\n");
//    }
//    for (int i = 0; i < 2; i++)
//    {
//        for (int j = 0; j < 12; j++)
//        {
//            printf("*");
//        }
//        printf("\n");
//    }
//    for (int i = 0; i < 2; i++)
//    {
//        for (int j = 0; j < 4; j++)
//        {
//            printf(" ");
//        }
//        for (int j = 0; j < 1; j++)
//        {
//            printf("*");
//        }
//        for (int j = 0; j < 2; j++)
//        {
//            printf(" ");
//        }
//        for (int j = 0; j < 1; j++)
//        {
//            printf("*");
//        }
//        printf("\n");
//    }
//    return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//    printf("%15d", 0xABCDEF);
//    return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//    int n = printf("Hello world!");
//    printf("\n");
//    printf("%d\n", n);
//    return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int id = 0;
//	float c = 0.0;
//	float math = 0.0;
//	float english = 0.0;
//	scanf("%d;%f,%f,%f", &id, &c, &math, &english);
//	printf("The each subject score of No. %d is %.2f, %.2f, %.2f.", id, c, math, english);
//	return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//    char ch = 0;
//    if (65 <= ch <= 90 && 97 <= ch <= 122)
//    {
//        printf("YES\n");
//    }
//    else
//    {
//        printf("NO\n");
//    }
//    return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//    char ch = 0;
//    scanf("%c", &ch);
//    for (int i = 0; i < 5; i++)
//    {
//        for (int j = 0; j < 5 - i - 1; j++)
//        {
//            printf(" ");
//        }
//        for (int k = 0; k <= i; k++)
//        {
//            printf("%c ", ch);
//        }
//        printf("\n");
//    }
//}
//#include <stdio.h>
//
//int main()
//{
//    char arr[100] = { 73,32,99,97,110,32,100,111,32,105,116,33};
//    printf("%s", arr);
//    return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//	int year = 0;
//	int month = 0;
//	int date = 0;
//	scanf("%d%d%d", &year, &month, &date);
//		printf("year=%d\n", year);
//	printf("month=%d\n", month);
//	printf("date=%d\n", date);
//	return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//	int year = 0;
//	int month = 0;
//	int date = 0;
//	scanf("%4d%2d%2d", &year, &month, &date);
//	printf("year=%d\n", year);
//	printf("month=%02d\n", month);
//	printf("date=%02d\n", date);
//	return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int result = 1 << n;
//    printf("%d\n", result);
//
//    return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("a=%d,b=%d", &a, &b);
//	c = a;
//	a = b;
//	b = c;
//	printf("a=%d,b=%d", a, b);
//	return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//    char ch = 0;
//    scanf("%c", &ch);
//    printf("%d\n", ch);
//    return 0;
//}
#/*include <stdio.h>

int main()
{
    int a = 40;
    int c = 212;
    int b = (-8 + 22) * a - 10 + c / 2;
    printf("%d\n", b);
    return 0;
}*/
//#include <stdio.h>
//
//int main()
//{
//    int a = 0;
//    int b = 0;
//    scanf("%d %d", &a, &b);
//    printf("%d %d", a / b, a % b);
//    return 0;
//}



#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//    printf("The size of short is %zd bytes.\n", sizeof(short));
//    printf("The size of int is %zd bytes.\n", sizeof(int));
//    printf("The size of long is %zd bytes.\n", sizeof(long));
//    printf("The size of long long is %zd bytes.\n", sizeof(long long));
//
//    return 0;
//}
#include <stdio.h>

int main()
{
    //解法一：直接输出
//     printf("     **\n");
//     printf("     **\n");
//     printf("************\n");
//     printf("************\n");
//     printf("    *  *\n");
//     printf("    *  *\n");

    //解法二：循环

    //飞机头
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf(" ");
        }
        for (int k = 0; k < 2; k++)
        {
            printf("*");
        }
        printf("\n");
    }
    //飞机身
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 12; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    //飞机尾
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf(" ");
        }
        for (int k = 0; k < 2; k++)
        {
            printf("*  ");
        }
        printf("\n");
    }
    return 0;
}












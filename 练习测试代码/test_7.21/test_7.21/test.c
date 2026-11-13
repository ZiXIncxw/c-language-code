#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int main()
//{
//    int a = 0;
//    int b = 0;
//    int c = 0;
//    int d = 0;
//    scanf("%d %d ", &a, &b);
//    c = a / b;
//    d = a % b;
//    printf("%d %d ", c, d);
//    return 0;
//}
//int main()
//{
//    int a = 0;
//    int b = 0;
//    scanf("%d %d", &a, &b);
//    if (a > b)
//    {
//        printf("%d>%d", a, b);
//    }
//    else if (a < b)
//    {
//        printf("%d<%d", a, b);
//    }
//    else
//    {
//        printf("%d=%d", a, b);
//    }
//
//    return 0;
//}
//int main()
//{
//    int a = 0;
//    int b = 0;
//    while((scanf("%d %d", &a, &b) != EOF))
//    {
//        if (a > b)
//        {
//            printf("%d>%d\n", a, b);
//        }
//        else if (a < b)
//        {
//            printf("%d<%d\n", a, b);
//        }
//        else
//        {
//            printf("%d=%d\n", a, b);
//        }
//    }
//    return 0;
//}
//int main()
//{
//    int a = 0;
//    while ((scanf("%d", &a)) != EOF)
//    {
//        int i = 0;
//        for (i = 0; i < a; i++)
//        {
//            printf("*");
//        }
//        printf("\n");
//    }
//    return 0;
//}
//int main()
//{
//	int num = 0;
//	for(num = 1; num <= 100; num++)
//	{
//		if (num % 3 == 0)
//		{
//			printf("%d\n", num);
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d %d %d", &a, &b, &c);
//	if (a < b)
//	{
//		int t = a; a = b; b = t;
//	}// 确保 a >= b
//	if (a < c)
//	{
//		int t = a; a = c; c = t;
//	}// 确保 a >= c
//	if (b < c)
//	{
//		int t = b; b = c; c = t;
//	}// 确保 b >= c
//	printf("%d %d %d\n", a, b, c);
//	return 0;
//}
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
void menu()
{
	printf("--------------------\n");
	printf("----  1.play  ----\n");
	printf("----  0.exit  ----\n");
	printf("--------------------\n");
}
void game()
{
	int guess = 0;
	int random = rand() % 100 + 1;
	while (1)
	{
		scanf("%d", &guess);
		if (guess < random)
		{
			printf("猜小了\n");
		}
		else if (guess > random)
		{
			printf("猜大了\n");
		}
		else
		{
			printf("猜对了\n");
			break;
		}
	}
}
int main()
{
	int input = 0;
	srand((unsigned)time(NULL));
	do
	{
		menu();
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("游戏开始\n");
			game();
			break;
		case 0:
			printf("游戏结束\n");
			break;
		default:
			printf("输入错误，请重新输入\n");
			break;
		}
	} while (input);
	return 0;
}
//void menu()
//{
//	printf("--------------------\n");
//	printf("----  1.play  ----\n");
//	printf("----  0.exit  ----\n");
//	printf("--------------------\n");
//}
//void game()
//{ 
//	int guess = 0;
//	int random = rand() % 100 + 1;
//	while (1)
//	{
//		scanf("%d", &guess);
//		if (guess < random)
//		{
//			printf("猜小了\n");
//		}
//		else if (guess > random)
//		{
//			printf("猜大了\n");
//		}
//		else
//		{
//			printf("猜对了\n");
//			break;
//		}
//	}
//}
//void menu()
//{
//	printf("-----------------------\n");
//	printf("----  1. play  ----\n");
//	printf("----  0. exit  ----\n");
//	printf("-----------------------\n");
//}
//void game()
//{
//	int random = rand() % 100 + 1;
//	int guess = 0;
//	while (1)
//	{
//		printf("请猜数字");
//		scanf("%d", &guess);
//		if (guess < random)
//		{
//			printf("猜小了\n");
//		}
//		else if (guess > random)
//		{
//			printf("猜大了\n");
//		}
//		else
//		{
//			printf("猜对了\n");
//			break;
//		}
//	}
//}
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do
//	{
//		menu();
//		printf("请选择数字");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			printf("开始游戏\n");
//			game();
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("输入错误，请重新输入\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}

















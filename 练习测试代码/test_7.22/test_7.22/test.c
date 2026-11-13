#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	int a = 0, b = 0;
//	for (a = 1, b = 1; a <= 100; a++)
//	{
//		if (b >= 20) break;
//		if (b % 3 == 1)
//		{
//			b = b + 3;
//			continue;
//		}
//		b = b - 5;
//	}
//	printf("%d\n", a);
//	return 0;
//}
//int main()
//{
//	int i;
//	int numbers[10];
//	int max;
//	printf("请输入10个整数");
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &numbers[i]);
//}
//	max = numbers[0];
//	for (i = 1; i < 10; i++)
//	{
//		if (max < numbers[i])
//		{
//			max = numbers[i];
//		}
//	}
//	printf("最大值为%d", max);
//	return 0;
//}
//int main()
//{
//	int i;
//	double sum = 0.0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 2 == 1)
//		{
//			sum += 1.0 / i;
//		}
//		else
//		{
//			sum -= 1.0 / i;
//		}
//	}
//	printf("%f", sum);
//	return 0;
//}
//int main()
//{
//	int i;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 9 == 0)
//		{
//			count++;
//		}
//	}
//	printf("%d", count);
//	return 0;
//}
//int main()
//{
//	int i;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)
//		{
//			count++;
//		}
//		if (i / 10 == 9)
//		{
//			count++;
//		}
//	}
//	printf("一共出现了%d个9", count);
//	return 0;
//}
//int main()
//{
//	int count = 0;
//	int a = 1000;
//	int b = 2000;
//	for (a = 1000; a <= b; a++)
//	{
//		if ((a % 4 == 0 && a % 100 != 0) || (a % 400 == 0))
//		{
//			printf("%d\n", a);
//			count++;
//		}
//	}
//	printf("一共%d个闰年", count);
//	return 0;
//}
//#include <stdlib.h>
//#include <time.h>
//void menu()
//{
//	printf("-------------------\n");
//	printf("----  1.play  ----\n");
//	printf("----  0.exit  ----\n");
//	printf("-------------------\n");
//}
//void game()
//{
//
//	int guess = 0;
//	int random = rand() % 100 + 1;
//	printf("请猜数字");
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
//int main()
//{
//	printf("请输入数字\n");
//	int input = 0;
//	srand((unsigned)time(NULL));
//	do
//	{
//		menu();
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			printf("游戏开始\n");
//			game();
//			break;
//		case 0:
//				printf("游戏结束\n");
//				break;
//		default:
//			printf("输入错误,请重新输入\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}
//int main()
//{
//    int a = 0;
//    int b = 0;
//    int c = 0;
//    while (scanf("%d %d %d", &a, &b, &c) != EOF)
//    {
//        if (a + b > c && a + c> b && b + c > a)
//        {
//            if (a == b && b == c)
//            {
//                printf("Equilateral triangle!");
//            }
//            else if (a == b || a == c || b == c)
//            {
//                printf("lsosceles triangle!");
//            }
//            else
//            {
//                printf("Ordinary triangle!");
//            }
//        }
//        else
//        {
//            printf("Not a triangle!");
//        }
//    }
//    return 0;
//}
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%d ", i, j, i * j);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		int flag = 1;
//		for (j = 2; j < i; j++)
//		{
//			if (i % j == 0)
//			{
//				flag = 0;
//				break;
//			}
//		}
//		if (flag)
//		{
//			printf("%d ", i);
//		}
//	}
//	printf("\n");
//	return 0;
//}
//#include <stdio.h>
//
//int main() {
//    int i, j;
//    printf("100~200之间的素数有:\n");
//
//    for (i = 100; i <= 200; i++) {
//        // 跳过1和小于1的数（100~200不需要）
//        
//
//        int is_prime = 1; // 假设i是素数（初始清白）
//
//        // 尝试所有可能的除数（从2到i-1）
//        for (j = 2; j < i; j++) {
//            // 检查是否能整除
//            if (i % j == 0) {
//                is_prime = 0; // 找到因子，推翻假设（有罪）
//                break;        // 不用再检查其他除数
//            }
//        }
//
//        // 如果假设仍然成立（找不到任何因子）
//        if (is_prime) {
//            printf("%d ", i);
//        }
//    }
//
//    printf("\n");
//    return 0;
//}


















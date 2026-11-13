#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//
//int main()
//{
//	int c = 0;
//	int e = 0;
//	int n = 0;
//	scanf("%d", &n);
//	switch (n)
//	{
//		
//	case 1:
//		is_c(c);
//		break;
//	case 2:
//		is_e(e);
//		break;
//	}
//	return 0;
//}
//void is_c(int c)
//{
//	printf("请输入想要转化为欧元的金额\n");
//	scanf("%d", &c);
//	printf("欧元=%.2f\n", c * 0.2);
//}
//void is_e(int e)
//{
//	printf("请输入想要转化为人民币的金额\n");
//	scanf("%d", &e);
//	printf("人民币=%.2f\n", e * 5.0);
//}
//#include <stdio.h>
//
//#include <time.h>
//
//#include <stdlib.h>
//
//void menu()
//
//{
//
//	printf("--------------------\n");
//
//	printf("---- 1.play ----\n");
//
//	printf("---- 0.exit ----\n");
//
//	printf("--------------------\n");
//
//}
//
//void game()
//
//{
//
//	int guess = 0;
//
//	int random = rand() % 100 + 1;
//
//	while (1)
//
//	{
//
//		scanf("%d", &guess);
//
//		if (guess < random)
//
//		{
//
//			printf("猜小了\n");
//
//		}
//
//		else if (guess > random)
//
//		{
//
//			printf("猜大了\n");
//
//		}
//
//		else
//
//		{
//
//			printf("猜对了\n");
//
//			break;
//
//		}
//
//	}
//
//}
//
//int main()
//
//{
//
//	int input = 0;
//
//	srand((unsigned)time(NULL));
//
//	do
//
//	{
//
//		menu();
//
//		scanf("%d", &input);
//
//		switch (input)
//
//		{
//
//		case 1:
//
//			printf("游戏开始\n");
//
//			game();
//
//			break;
//
//		case 0:
//
//			printf("游戏结束\n");
//
//			break;
//
//		default:
//
//			printf("输入错误，请重新输入\n");
//
//			break;
//
//		}
//
//	} while (input);
//
//	return 0;
//
//}
#include <stdio.h>

int main()
{
    int n = 0;
    int arr[51] = { 0 };
    int del = 0;
    int j = 0;
    int i = 0;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &del);
    for (i = 0; i < n; i++)
    {
        if (arr[i] != del)
        {
            arr[j] = arr[i];
            j++;
        }
    }
    for (i = 0; i < j; i++)
    {
        printf("%d ", arr[i]);
    }
    
    return 0;
}
//#include <stdio.h>
//int main()
//{
//    int n = 0;
//    int arr[50] = { 0 };
//    int m = 0;
//    //输入数据
//    scanf("%d", &n);
//    int i = 0;
//    int j = 0;
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    scanf("%d", &m);
//    for (i = 0; i < n; i++)
//    {
//        if (arr[i] != m)
//        {
//            arr[j++] = arr[i];
//        }
//    }
//    for (i = 0; i < j; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//    return 0;
//}
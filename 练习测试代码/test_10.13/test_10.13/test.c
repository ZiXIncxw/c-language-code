#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//void menu()
//{
//	printf("----------------------\n");
//	printf("-----1.Add   2.Sub -----\n");
//	printf("-----3.Mul   4.Div -----\n");
//	printf("------  0. exit  ------\n");
//}
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//int main()
//{
//	int ret = 0;
//	int x = 0;
//	int y = 0;
//	int input = 0;
//	do
//	{
//		menu();
//		printf("请输入想要选择的方式计算\n");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 0:
//			printf("程序结束\n");
//			break;
//		case 1:
//			printf("请输入两个数字\n");
//			scanf("%d %d", &x, &y);
//			ret = Add(x, y);
//			printf("%d\n", ret);
//			break;
//		case 2:
//			printf("请输入两个数字\n");
//			scanf("%d %d", &x, &y);
//			ret = Sub(x, y);
//			printf("%d\n", ret);
//			break;
//		case 3:
//			printf("请输入两个数字\n");
//			scanf("%d %d", &x, &y);
//			ret = Mul(x, y);
//			printf("%d\n", ret);
//			break;
//		case 4:
//			printf("请输入两个数字\n");
//			scanf("%d %d", &x, &y);
//			ret = Div(x, y);
//			printf("%d\n", ret);
//			break;
//		default :
//			printf("输入错误，请重新输入\n");
//		}
//	} while (input);
//	return 0;
//}


//void menu()
//{
//	printf("----------------------\n");
//	printf("-----1.Add   2.Sub -----\n");
//	printf("-----3.Mul   4.Div -----\n");
//	printf("------  0. exit  ------\n");
//}
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//void calc(int (*p)(int, int))
//{
//	int ret, x, y;
//	printf("请输入两个数字\n");
//	scanf("%d %d", &x, &y);
//	ret = p(x, y);
//	printf("%d\n", ret);
//}
//int main()
//{
//	int ret = 0;
//	int x = 0;
//	int y = 0;
//	int input = 0;
//	//int(*pp[5])(int, int) = { 0,Add,Sub,Mul,Div };
//	do
//	{
//		menu();
//		printf("请输入想要选择的方式计算\n");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 0:
//			printf("程序结束\n");
//			break;
//		case 1:
//		    calc(Add);
//			break;
//		case 2:
//			calc(Sub);
//			break;
//		case 3:
//			calc (Mul);
//			break;
//		case 4:
//			calc(Div);
//			break;
//		default:
//			printf("输入错误，请重新输入\n");
//		}
//	} while (input);
//	return 0;
//}

int main()
{
	printf("%d\n", 6/2);
	printf("2+3\n");
	return 0;
}




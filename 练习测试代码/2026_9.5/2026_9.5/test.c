#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int a = -10;
//	int b = 3.0;
//	printf("%d",a % b);
//
//	return 0;
//}

//void Print()
//{
//	for (int i = 1; i <= 100; i++)
//	{
//		if (i % 3 == 0)
//		{
//			printf("%d ", i);
//		}
//	}
//}

//void Comparison()
//{
//	int a, b, c, tmp;
//	scanf("%d %d %d", &a, &b, &c);
//	//保证a最大
//	if (a < b)
//	{
//		tmp = a;
//		a = b;
//		b = tmp;
//	}
//	if (a < c)
//	{
//		tmp = a;
//		a = c;
//		c = tmp;
//	}
//	//b排中间
//	if (b < c)
//	{
//		tmp = b;
//		b = c;
//		c = tmp;
//	}
//	printf("%d %d %d", a, b, c);
//}

//float Sum()
//{
//	float sum1 = 0.0;
//	float sum2 = 0.0;
//	for (int i = 1; i <= 100; i += 2)
//	{
//		sum1 += 1.0 / i;
//	}
//	for (int i = -2; i >= -100; i -= 2)
//	{
//		sum2 += 1.0 / i;
//	}
//	return sum1 + sum2;
//}

//float Sum()
//{
//	float sum = 0.0;
//	int flag = 1;
//	for (int i = 1; i <= 100; i++)
//	{
//		sum += flag*(1.0 / i);
//		flag = -flag;
//	}
//	return sum;
//}

//int FindNum()
//{
//	int cout = 0;
//	for (int i = 1; i <= 100; i++)
//	{
//		if (i / 10 == 9)
//		{
//			cout++;
//		}
//		if (i % 10 == 9)
//		{
//			cout++;
//		}
//	}
//	return cout;
//}

//void PrintRun_Year()
//{
//	for (int i = 1000; i <= 2000; i++)
//	{
//		if ((i % 4 == 0 && i % 100 != 0) || (i % 400 == 0))
//		{
//			printf("%d ", i);
//		}
//	}
//}

//void FindMax()
//{
//	int arr[10];
//	int max;
//	for (int i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	max = arr[0];
//	for (int i = 1; i < 10; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("%d", max);
//}

//void NN_Table()
//{
//	
//	for (int i = 1; i <= 9; i++)
//	{
//		for (int j = 1; j <= i; j++)
//		{
//			printf("%d*%d = %-2d ", j, i, i * j);
//		}
//		printf("\n");
//	}
//}

void Max_Num()
{
	int a, b, tmp;
	scanf("%d %d", &a, &b);
	int m = a;
	int n = b;
	while (n != 0)
	{
		tmp = m % n;
		m = n;
		n = tmp;
	}
	printf("%d", m);
}

int main()
{
	//Print();
	//Comparison();
	//printf("%f", Sum());
	//printf("%d", FindNum());
	//PrintRun_Year();
	//FindMax();
	//NN_Table();
	Max_Num();
	return 0;
}
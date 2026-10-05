#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <math.h>

int GetWater_Num(int money)
{
	if (money <= 0)
	{
		return 0;
	}
	int empty = money;
	int total = money;
	int exchange = 0;
	int remaining = 0;
	while (empty >= 2)
	{
		exchange = empty / 2;
		remaining = empty % 2;
		total += exchange;
		empty = exchange + remaining;
	}
	return total;
}

int int_pow(int n, int digits)
{
	int ret = 1;
	while (digits)
	{
		ret *= n;
		digits--;
	}
	return ret;
}

void Narcissistic_number()
{
	//153
	for (int i = 0; i <= 100000; i++)
	{
		/*if (i == 153)
		{
			int a = 1;
		}*/
		int n = 0;
		int tmp = i;
		int tmp_tmp = i;
		int cout = 0;
		int sum = 0;
		
		if (tmp == 0)
		{
			cout = 1;
		}
		//算出为几位数
		while (tmp_tmp)
		{
			cout++;
			tmp_tmp /= 10;
		}
		
		while (tmp)
		{
			n = tmp % 10;
			sum += int_pow(n,cout);//n*cout的三次方
			tmp /= 10;
		}
		if (sum == i)
		{
			printf("%d ", i);
		}
	}
}

//求Sn=a+aa+aaa+aaaa+aaaaa的前5项之和，其中a是一个数字，
//例如：2 + 22 + 222 + 2222 + 22222

//11,1111
int Add_Sum()
{
	int n = 0;
	int sum = 0;
	int a = 0;
	scanf("%d", &n);
	a = n;
	for (int i = 0; i < 5; i++)
	{
		sum += n;
		n = n * 10 + a;
	}
	//2,22,
	return sum;
}

//求第n个斐波那契数

//1 1 2 3 5 8 13
//递归
int Fibonacci_sequence_1(int n)
{
	if (n <= 1)
	{
		return n;
	}
	
	return Fibonacci_sequence_1(n - 1) + Fibonacci_sequence_1(n - 2);
}
//1 1 2 3 5 8 13
//非递归
int Fibonacci_sequence_2(int n)
{
	if (n <= 1)
	{
		return n;
	}
	int a = 0;
	int b = 1;
	int c = 0;
	//f(1) = 1;f(2) = 1;
	for (int i = 2; i <= n; i++)
	{
		c = a + b;
		a = b;
		b = c;
	}
	return b;
}
//递归
//2的5次方：2*2*2*2*2
//编写一个函数实现n的k次方，使用递归实现。
int Pow(int base ,int exp)//(2,5)
{
	if (exp == 0)
	{
		return 1;
	}
	if (exp == 1)
	{
		return base;
	}
	return base*Pow(base, exp - 1);
}
//1729
//写一个递归函数DigitSum(n)，输入一个非负整数，返回组成它的数字之和
//例如，调用DigitSum(1729)，则应该返回1 + 7 + 2 + 9，它的和是19
//输入：1729，输出：19


int DigitSum(int n)
{
	if (n < 10)
	{
		return n;
	}
	return n % 10 + DigitSum(n / 10);//9+d(172),2+d(17),7+d(1),1
}

//递归和非递归分别实现求n的阶乘（不考虑溢出的问题）

//递归
int factorial_1(int n)
{
	if (n == 1)
	{
		return 1;
	}
	return n*factorial_1(n - 1);
}

//非递归

int factorial_2(int n)
{
	int ret = 1;
	while (n)
	{
		ret *= n;
		n--;
	}
	return ret;
}

//递归方式实现打印一个整数的每一位

//1729
void Print_D(int n)
{
	if (n < 10)
	{
		printf("%d ", n);
		return;
	}
	Print_D(n / 10);
	printf("%d ",n % 10);
	
}

int main()
{
	//printf("%d", GetWater_Num(20));
	//Narcissistic_number();
	//printf("%d", Fibonacci_sequence_2(10));
	//printf("%d ", Add_Sum());
	//printf("%d", Pow(2,10));
	//printf("%d", DigitSum(1729));
	//printf("%d",factorial_2(5));
	Print_D(1729);
	return 0;
}








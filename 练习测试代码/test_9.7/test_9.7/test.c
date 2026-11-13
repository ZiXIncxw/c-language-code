#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//void Print()
//{
//	printf("hello\n");
//	Print();
//}
//int main()
//{
//	Print();
//	return 0;
//}
//#include <stdio.h>
//int Factorial(int n)
//{
//	if (n == 0)
//	{
//		return 1;
//	}
//	else
//	{
//		return n * Factorial(n-1);
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Factorial(n);
//	printf("%d\n", ret);
//
//	return 0;
//}
//#include <stdio.h>
//void Print(int m)
//{
//	if (m > 9)
//	{
//		Print(m / 10);
//		printf("%d ", m % 10);
//	}
//	else
//	printf("%d ", m % 10);
//}
//int main()
//{
//	int m = 0;
//	scanf("%d", &m);
//	Print(m);
//
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = 1;
//	for (int i = 1; i <= n; i++)
//	{
//		ret *= i;
//	}
//	printf("%d\n", ret);
//
//	return 0;
//}
//#include <stdio.h>
//int count = 0;
//int Fib(int n)
//{
//	if (n == 3)
//	{
//		count++;
//	}
//	if (n <= 2)
//	{
//		return 1;
//	}
//	else if(n>2)
//	{
//		return Fib(n - 1) + Fib(n - 2);
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fib(n);
//	printf("%d\n", ret);
//	printf("count = %d", count);
//	return 0;
//}

int Fib(int n)
{
	int a = 1;
	int b = 1;
	int c = 1;
	while (n > 2)
	{
		c = a + b;
		a = b;
		b = c;
		n--;
	}
	return c;
}

	





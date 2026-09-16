#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int count = 0;
int Fact(int n)
{
	if (n < 2)
	{
		return 1;
	}
	else if (n > 0)
	{
		return n * Fact(n - 1);
	}
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	int ret = Fact(n);
	printf("%d\n", ret);
	return 0;
}

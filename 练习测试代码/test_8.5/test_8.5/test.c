#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int sum = 0;
	scanf("%d", &sum);
	int all = sum + sum % 2;
	printf("%d\n", all);
	return 0;
}


#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	int i = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		int flag = 1;
//		int x = 0;
//		for (x = 2; x <= i - 1; x++)
//		{
//			if (i % x == 0)
//			{
//				flag = 0;
//				break;
//			}
//		}
//		if (flag == 1)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}
int main()
{
	int i = 0;
	int count = 0;
	for (i = 1; i <= 100; i++)
	{
		int x = 0;
		for (x = 2; x <= i - 1; x++)
		{
			if (i % x == 0)
			{
				break;
			}
		}
		if (i == x)
		{
			printf("%d ", i);
			count++;
		}
	}
	printf("\ncount=%d\n", count);
	return 0;
}





























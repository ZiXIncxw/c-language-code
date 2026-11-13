#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

//int main()
//
//{
//	int i = 0;
//	int n = 0;//123 456 7
//	scanf("%d", &n);
//	int k = 0;
//	char arr[14] = { 0 };
//	while (n)
//	{
//		if (k % 3 == 0 && k != 0)
//		{
//			arr[i] = ',';
//			i++;
//		}
//		arr[i] = n % 10 + '0';
//		i++;
//		k++;
//		n /= 10;
//	}
//	while (i >= 0)
//	{
//		printf("%c", arr[i]);
//		i--;
//	}
//	return 0;
//}

//int exist(char ch, char arr2[])
//{
//	int j = 0;
//	while (arr2[j])
//	{
//		if (ch == arr2[j])
//		{
//			return 1;
//		}
//		j++;
//	}
//	return 0;
//}
//
//int main()
//{
//	char arr1[101] = { 0 };
//	char arr2[101] = { 0 };
//
//	gets(arr1);
//	gets(arr2);
//	
//	int i = 0;
//	while (arr1[i])
//	{
//		if (exist(arr1[i], arr2) == 0)
//		{
//			printf("%c", arr1[i]);
//		}
//		i++;
//	}
//	return 0;
//}

//int exist(char ch, char arr2[])
//{
//	int j = 0;
//	while (arr2[j])
//	{
//		if (ch == arr2[j])
//		{
//			return 1;
//		}
//		j++;
//	}
//	return 0;
//}

int main()
{
	char arr1[101] = { 0 };
	char arr2[101] = { 0 };

	gets(arr1);
	gets(arr2);

	int i = 0;
	while (arr1[i])
	{
		if (strchr(arr2,arr1[i])==NULL)
		{
			printf("%c", arr1[i]);
		}
		i++;
	}
	return 0;
}






#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
//int main()
//{
//	const char* arr1 = "abc";
//	const char* arr2 = "abcdef";
//	printf("%zd", strlen(arr1)-strlen(arr2));
//	return 0;
//}

int my_strlen1(const char* p)
{
	int count = 0;
	while (*p)
	{
		count++;
		p++;
	}
	return count;
}
#include <assert.h>
int my_strlen2(const char* p)
{
	assert(p!=NULL);
	if (*p == '\0')
	{
		return 0;
	}
	else
	{
		return 1 + my_strlen2(p + 1);
	}
}

int main()
{
	const char* arr = "abc";
	printf("%d", my_strlen2(arr));
	return 0;
}



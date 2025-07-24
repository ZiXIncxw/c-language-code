#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
int main()
{
	char arr[20] = { 0 };
	system("shutdown -s -t 60");
	again:
	printf("请注意，系统将在60秒后关机，如果输入我是猪，则取消关机\n");
	scanf("%s", arr);
	if (strcmp("我是猪", arr) == 0)
	{
		system("shutdown -a");
	}
	else
	{
		goto again;
	}
	return 0;
}















#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num = 0;
    scanf("%d", &num);

    int* ptr = NULL;
    ptr = (int*)malloc(num * sizeof(int));  // 动态分配内存

    if (NULL != ptr)  // 必须检查是否分配成功
    {
        int i = 0;
        for (i = 0; i < num; i++)
        {
            *(ptr + i) = 0;  // 初始化内存
        }
    }

    free(ptr);   // 释放内存
    ptr = NULL;  // 有必要！避免野指针

    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int* p = (int*)calloc(10, sizeof(int));  // 分配并初始化为0

    if (NULL != p)
    {
        int i = 0;
        for (i = 0; i < 10; i++)
        {
            printf("%d ", *(p + i));  // 输出: 0 0 0 0 0 0 0 0 0 0
        }
    }

    free(p);
    p = NULL;
    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int* ptr = (int*)malloc(100);  // 分配100字节
    if (ptr != NULL)
    {
        // 业务处理
    }
    else
    {
        return 1;  // 分配失败
    }

    // 扩展容量 - 正确做法
    int* p = NULL;
    p = (int*)realloc(ptr, 1000);  // 扩展到1000字节

    if (p != NULL)
    {
        ptr = p;  // 只有成功才更新指针
    }
    // 如果 realloc 失败，ptr 仍然指向原来的100字节

    free(ptr);
    return 0;
}
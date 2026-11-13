#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <ctype.h>
//int main()
//{
//	if (isalnum('0'))
//	{
//		printf("%d\n", isalnum('0'));
//	}
//	else
//	{
//		printf("%d\n", 666);
//	}
//	return 0;
//}

//int main()
//{
//	char arr[] = "ABCDEF";
//	printf("%c\n", tolower('A'));
//	for (int i = 0; i < 6; i++)
//	{
//		tolower(arr);
//	}
//	printf("%s", arr);
//	return 0;
//}

//#include <stdio.h>
//#include <ctype.h>
//#include <string.h>
//
//int main()
//{
//    char arr[] = "ABCDEF";
//
//    for (int i = 0; i < strlen(arr); i++) 
//    {
//        arr[i] = tolower(arr[i]);
//    }
//
//    printf("%s", arr); 
//    return 0;
//}

//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	const char* str1 = "abcdef";
//	const char* str2 = "bbb";
//	if (strlen(str2) - strlen(str1) > 0)
//	{
//		printf("str2>str1\n");
//	}
//	else
//	{
//		printf("srt1>str2\n");
//	}
//	return 0;
//}

//计数器方式
#include <assert.h>

//int my_strlen(const char* str)
//{
//    int count = 0;          // 1. 初始化计数器为0
//    assert(str);            // 2. 断言检查：确保传入的指针不为NULL
//    while (*str)             // 3. 循环条件：当当前字符不是'\0'时继续循环
//    {
//        count++;            // 4. 计数器加1
//        str++;              // 5. 指针移动到下一个字符
//    }
//    return count;           // 6. 返回字符串长度（不包含'\0'）
//}
//不能创建临时变量计数器
//int my_strlen(const char* str)
//{
//    assert(str);                    // 1. 安全检查，确保指针不为NULL
//    if (*str == '\0')               // 2. 递归基：如果当前字符是结束符
//        return 0;                   // 3. 返回0，表示长度计算结束
//    else
//        return 1 + my_strlen(str + 1); // 4. 递归步：当前字符计数1 + 剩余字符串长度
//}
//
//int main()
//{
//    char arr[] = {"abcdef"};
//    int ret = my_strlen(arr);
//    printf("%d\n", ret);
//}

//int my_strlen(char* s)
//{
//    assert(s);              // 1. 安全检查
//    char* p = s;            // 2. 创建指针p，指向字符串起始位置
//    while (*p != '\0')       // 3. 循环直到遇到字符串结束符
//        p++;                // 4. 指针p向后移动
//    return p - s;             // 5. 返回两个指针之间的差值（即字符个数）
//}
//int main()
//{
//    char arr[] = { "abcdef" };
//    int ret = my_strlen(arr);
//    printf("%d\n", ret);
//    return 0;
//}

#include <stdio.h>
#include <assert.h>

//1.参数顺序
//2.函数的功能，停止条件
//3.assert
//4.const修饰指针
//5.函数返回值
//6.题目出自《高质量C/C++编程》书籍最后的试题部分
//char* my_strcpy(char* dest, const char* src)
//{
//    char* ret = dest;           // 第9行：保存目标字符串的起始地址
//    assert(dest != NULL);       // 第10行：检查目标指针是否为空
//    assert(src != NULL);        // 第11行：检查源指针是否为空
//
//    while ((*dest++ = *src++))   // 第13行：拷贝循环
//    {
//        ;                       // 第15行：空语句，循环体不需要执行其他操作
//    }
//    return ret;                 // 第17行：返回目标字符串的起始地址
//}
//
//int main()
//{
//    char src[] = "Hello World";
//    char dest[20];
//
//    printf(" %s\n", my_strcpy(dest, src));
//    return 0;
//}


//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//    char arr[] = "192.168.6.111";  // 原始字符串
//    char* sep = "./";              // 分隔符集合：点号和斜杠
//    char* str = NULL;              // 用于接收切分结果的指针
//
//    // 使用strtok切分字符串
//    for (str = strtok(arr, sep); str != NULL; str = strtok(NULL, sep))
//    {
//        printf("%s\n", str);       // 打印每个标记
//    }
//    return 0;
//}


#include <errno.h>
#include <string.h>
#include <stdio.h>

// 我们打印一下0~10这些错误码对应的信息

int main()
{
    int i = 0;
    for (i = 0; i <= 10; i++)
    {
        printf("%s\n", strerror(i));
    }
    return 0;
}
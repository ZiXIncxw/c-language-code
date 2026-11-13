#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

// 联合类型的声明
//union Un
//{
//    char c;//1
//    int i;//4
//};
//
//int main()
//{
//    // 联合变量的定义
//    union Un un = { 0 };
//    // 计算整个变量的大小
//    printf("%zd\n", sizeof(un));  // 输出：4
//    return 0;
//}


//#include <stdio.h>
//
//union Un
//{
//    char c;
//    int i;
//};
//
//int main()
//{
//    union Un un = { 0 };
//    // 下面输出的结果是一样的吗？
//    printf("%p\n", &(un.i));  
//    printf("%p\n", &(un.c));  
//    printf("%p\n", &un);      
//    return 0;
//}

//#include <stdio.h>
//
//union Un
//{
//    char c;
//    int i;
//};
//
//int main()
//{
//    union Un un = { 0 };
//    un.i = 0x11223344;  // 设置整数值
//    un.c = 0x55;        // 修改char成员
//    printf("%x\n", un.i); // 输出：11223355
//    return 0;
//}

//#include <stdio.h>
//
//union Un1
//{
//    char c[5];  // 大小5字节，对齐数1
//    int i;      // 大小4字节，对齐数4
//};
//
//union Un2
//{
//    short c[7]; // 大小14字节，对齐数2
//    int i;      // 大小4字节，对齐数4
//};
//
//int main()
//{
//    printf("%d\n", sizeof(union Un1));  // 输出：8
//    printf("%d\n", sizeof(union Un2));  // 输出：16
//    return 0;
//}


//int check_system()
//{
//	int n = 1;
//	return *(char*)&n;
//}

int check_sys()
{
	union
	{
		int i;
		char c;
	} un;
	un.i = 1;
	return un.c;  // 返回1是小端，返回0是大端
}

int main()
{
	int ret = check_sys();
	if (ret == 1)
	{
		printf("小端\n");
	}
	else
	{
		printf("大端\n");
	}
	return 0;
}



#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	struct student
//	{
//		char name[20];
//		int age;
//		char sex[5];
//		char id[20];
//	};
//	struct student s = { "zhangsan",18,"男","25001022" };
//	printf("%s\n", s.name);
//	printf("%d\n", s.age);
//	printf("%s\n", s.sex);
//	printf("%s\n", s.id);
//
//	return 0;
//}

//int main()
//{
//	struct student
//	{
//		char name[20];
//		int age;
//		char sex[5];
//		char id[20];
//	};
//	struct student s = {.age = 20,.sex = "女",.name = "lili",.id = "25001100"};
//	printf("%s\n", s.name);
//	printf("%d\n", s.age);
//	printf("%s\n", s.sex);
//	printf("%s\n", s.id);
//
//	return 0;
//}

#include <stdio.h>
struct S
{
    char a : 3;
    char b : 4;
    char c : 5;
    char d : 4;
};

int main()
{
    struct S s = { 0 };
    s.a = 10;  // 10的二进制1010，但只有3位，所以是010(2)
    s.b = 12;  // 12的二进制1100，4位正好
    s.c = 3;   // 3的二进制11，5位就是00011(3)
    s.d = 4;   // 4的二进制100，4位就是0100(4)

    // 通过调试器查看内存，可以看到三个字节：0x62, 0x03, 0x04
    return 0;
}






#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	int n = 1;
//	if (*(char*)&n == 1)
//	{
//		printf("小端\n");
//	}
//	else
//	{
//		printf("大端\n");
//	}
//
//	return 0;
//}
//int check_syetem()
//{
//	int n = 1;
//	return (*(char*)&n);
//}
//
//int main()
//{
//	
//	int ret = check_syetem();
//	if ( ret == 1)
//	{
//		printf("小端\n");
//	}
//	else
//	{
//		printf("大端\n");
//	}
//
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	char a = -1;
//	signed char b = -1;
//	unsigned char c = -1;
//	printf("a=%d,b=%d,c=%d", a, b, c);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//    char a[1000];
//    int i;
//    for (i = 0; i < 1000; i++)
//    {
//        a[i] = -1 - i;
//    }
//    printf("%d", strlen(a));
//    return 0;
//}

//#include <stdio.h>
//unsigned char i = 0;
//int main()
//{
//	for (i = 0; i <= 255; i++)
//	{
//		printf("hello world\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	unsigned int i;
//	for (i = 9; i >= 0; i--)
//	{
//		printf("%u\n", i);
//	}
//	return 0;
//}

#include <stdio.h>
// X86环境小端字节序

int main()
{
    int a[4] = { 1, 2, 3, 4 };
    int* ptr1 = (int*)(&a + 1);
    int* ptr2 = (int*)((int)a + 1);
    printf("%x,%x", ptr1[-1], *ptr2);
    return 0;
}



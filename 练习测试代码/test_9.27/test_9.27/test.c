#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//
//	//int a = 10;
//	//int *p = &a;//把a的地址取出存放在指针变量
//
//	return 0;
//
//}
//int main()
//{
//
//	char ch = 'w';
//	char* p = &ch;
//
//	return 0;
//
//}
//int main()
//{
//	int a = 10;
//	int* p = &a;
//	*p = 0;
//	printf("%d\n",*p );
//	return 0;
//}
//int main()
//{
//	printf("%zd\n", sizeof(int*));
//	printf("%zd\n", sizeof(char*));
//	printf("%zd\n", sizeof(short*));
//	printf("%zd\n", sizeof(double*));
//	return 0;
//}
//int main()
//{
//	int n = 0x11223344;
//	int* p = &n;
//	*p = 0;
//	return 0;
//
//}
//int main()
//{
//	int n = 0x11223344;
//	char *p = (char*) & n;
//	*p = 0;
//	return 0;
//}
//int main()
//{
//	int n = 10;
//	int* pa = &n;
//	char* pb = (char*)&n;
//
//	printf("%p\n", &n);
//	printf("%p\n", pa);
//	printf("%p\n", pb);
//	printf("%p\n", (pa+1));
//	printf("%p\n", (pb+1));
//	
//	return 0;
//}
//int main()
//{
//	int n = 0;
//	int* pa = &n;
//	void* pb = &n;
//	*pa = 10;
//	*pb = 20;
//	return 0;
//
//}

//int main()
//{
//	int n = 20;
//	n = 100;
//	const int m = 100;
//	int* p = &m;
//	*p = 20;
//	printf("%d\n", *p);
//	return 0;
//}

//int main()
//{
//	int n = 10;
//	int a = 100;
//	int* p = &n;
//	*p = 20;
//	printf("%d\n", *p);
//	p = &a;
//	printf("%d\n", *p);
//	return 0;
//}

int main()
{
		int n = 10;
		int a = 100;
		int const *p = &n;
		*p = 20;
		printf("%d\n", *p);
		p = &a;
		printf("%d\n", *p);
		return 0;
	
}









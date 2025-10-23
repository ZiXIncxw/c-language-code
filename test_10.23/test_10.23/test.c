#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//void menu()
//{
//	printf("***********************\n");
//	printf("*****1.Add  2.Sub  *****\n");
//	printf("*****3.Mul  4.Div  *****\n");
//	printf("*****0.exit  *****************\n");
//}
//int main()
//{
//	int input = 0;
//	do
//	{
//		int x = 0;
//		int ret = 0;
//		int y = 0;
//		menu();
//		printf("请选择计算方式\n");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 0:
//			printf("程序结束\n");
//			break;
//		case 1:
//			printf("请输入两个数字\n");
//			scanf("%d %d", &x, &y);
//			ret = Add(x, y);
//			printf("%d\n", ret);
//			break;
//		case 2:
//			printf("请输入两个数字\n");
//			scanf("%d %d", &x, &y);
//			ret = Sub(x, y);
//			printf("%d\n", ret);
//			break;
//		case 3:
//			printf("请输入两个数字\n");
//			scanf("%d %d", &x, &y);
//			ret = Mul(x, y);
//			printf("%d\n", ret);
//			break;
//		case 4:
//			printf("请输入两个数字\n");
//			scanf("%d %d", &x, &y);
//			ret = Div(x, y);
//			printf("%d\n", ret);
//			break;
//		default :
//			printf("选择错误，请重新选择\n");
//			break;
//		}
//
//	} while (input);
//
//     return 0;
//}

//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//void menu()
//{
//	printf("***********************\n");
//	printf("*****1.Add  2.Sub  *****\n");
//	printf("*****3.Mul  4.Div  *****\n");
//	printf("*****0.exit  *****************\n");
//}
//int main()
//{
//	int input = 0;
//	do
//	{
//		int x = 0;
//		int ret = 0;
//		int y = 0;
//		menu();
//		printf("请选择计算方式\n");
//		scanf("%d", &input);
//		int (*p[5])(int, int) = { 0,Add,Sub,Mul,Div };
//		if (input >= 1 && input <= 4)
//		{
//			printf("请输入两个数字\n");
//			scanf("%d %d", &x, &y);
//			ret = p[input](x, y);
//			printf("%d\n", ret);
//		}
//		else if (input == 0)
//		{
//			printf("程序结束\n");
//			break;
//		}
//		else
//		{
//			printf("输入错误，请重新输入\n");
//		}
//
//	} while (input);
//
//	return 0;
//}

//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//void menu()
//{
//	printf("***********************\n");
//	printf("*****1.Add  2.Sub  *****\n");
//	printf("*****3.Mul  4.Div  *****\n");
//	printf("*****0.exit  *****************\n");
//}
//int calc(int(*p)(int, int))
//{
//	int ret = 0;
//	int x = 0;
//	int y = 0;
//	printf("请输入两个数字\n");
//	scanf("%d %d", &x, &y);
//	ret = p(x, y);
//	printf("%d\n", ret);
//}
//int main()
//{
//	int input = 0;
//	do
//	{
//		
//		menu();
//		printf("请选择计算方式\n");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 0:
//			printf("程序结束\n");
//			break;
//		case 1:
//			calc(Add);
//			break;
//		case 2:
//			calc(Sub);
//			break;
//		case 3:
//			calc(Mul);
//			break;
//		case 4:
//			calc(Div);
//			break;
//		default :
//			printf("选择错误，请重新选择\n");
//			break;
//		}
//
//	} while (input);
//
//     return 0;
//}
//int main()
//{
//	int flag = 1;
//	int total_rounds = 0;
//	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (int i = 0; i < sz - 1; i++)
//	{
//		total_rounds++;
//		for (int j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				flag = 0;
//			}
//		}
//		if (flag == 1)
//		{
//			break;
//		}
//	}
//	printf("共交换了%d行\n", total_rounds);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d " ,arr[i]);
//	}
//	return 0;
//}
//void Print(int arr[], int sz)
//{
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//int cmp(const void* p1, const void* p2)
//{
//	return (*(int*)p1 - *(int*)p2);
//}
//int main()
//{
//	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]), cmp);
//	Print(arr, sz);
//	return 0;
//}


//struct Stu
//{
//    char name[20];
//    int age;
//};
//
//// 按年龄比较
//int cmp_stu_by_age(const void* e1, const void* e2)
//{
//    return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
//}
//
//// 按姓名比较
//int cmp_stu_by_name(const void* e1, const void* e2)
//{
//    return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
//}
//
//// 打印学生数组
//void print_students(struct Stu s[], int sz)
//{
//    for (int i = 0; i < sz; i++)
//    {
//        printf("姓名: %s, 年龄: %d\n", s[i].name, s[i].age);
//    }
//    printf("\n");
//}
//
//void test2()  // 按年龄排序
//{
//    struct Stu s[] = { {"zhangsan", 20}, {"lisi", 30}, {"wangwu", 15} };
//    int sz = sizeof(s) / sizeof(s[0]);
//
//    printf("按年龄排序前:\n");
//    print_students(s, sz);
//
//    qsort(s, sz, sizeof(s[0]), cmp_stu_by_age);
//
//    printf("按年龄排序后:\n");
//    print_students(s, sz);
//}
//
//void test3()  // 按姓名排序
//{
//    struct Stu s[] = { {"zhangsan", 20}, {"lisi", 30}, {"wangwu", 15} };
//    int sz = sizeof(s) / sizeof(s[0]);
//
//    printf("按姓名排序前:\n");
//    print_students(s, sz);
//
//    qsort(s, sz, sizeof(s[0]), cmp_stu_by_name);
//
//    printf("按姓名排序后:\n");
//    print_students(s, sz);
//}
//int main()
//{
//    test2();  // 测试按年龄排序
//    test3();  // 测试按姓名排序
//    return 0;
//}

//struct Student
//{
//	char name[20];
//	int age;
//};
//int cmp_stu_by_name(const void* p1, const void* p2)
//{
//	return strcmp(((struct Student*)p1)->name,((struct Student*)p2)->name);
//}
//int cmp_stu_by_age(const void* p1, const void* p2)
//{
//	return (((struct Student*)p1)->age - ((struct Student*)p2)->age);
//}
//void Print(struct Student s[],int sz)
//{
//	for (int i = 0; i < sz; i++)
//	{
//		printf("姓名 ：%s   年龄：%d\n", s[i].name, s[i].age);
//	}
//}
//void test2()
//{
//	struct Student s[] = { {"zhangsan",20},{"lisi",30},{"wangwu",15}};
//	int sz = sizeof(s) / sizeof(s[0]);
//	printf("按名字排序前\n");
//	Print(s, sz);
//	qsort(s, sz, sizeof(s[0]), cmp_stu_by_name);
//	printf("按名字排序后\n");
//	Print(s, sz);
//}
//void test3()
//{
//	struct Student s[] = { {"zhangsan",20},{"lisi",30},{"wangwu",15} };
//	int sz = sizeof(s) / sizeof(s[0]);
//	printf("按年龄排序前\n");
//	Print(s, sz);
//	qsort(s, sz, sizeof(s[0]), cmp_stu_by_age);
//	printf("按年龄排序后\n");
//	Print(s, sz);
//}
//int main()
//{
//	test2();
//	test3();
//	return 0;
//}
//void bubble_sort(int arr[], int sz)
//{
//	for (int i = 0; i < sz - 1; i++)
//	{
//		for (int j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//void Print(int arr[], int sz)
//{
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//int main()
//{
//	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz);
//	Print(arr, sz);
//	return 0;
//}
void Print(int arr[],int sz)
{
	for (int i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
}
void Swap(char* p1, char* p2,size_t size)
{
	for (int i = 0; i < size; i++)
	{
		char tmp = *p1;
		*p1 = *p2;
		*p2 = tmp;
		p1++;
		p2++;
	}
}
int cmp(const void* p1, const void* p2)
{
	return (*(int*)p1 - *(int*)p2);
}
void simulate_qsort(void* base,size_t num,size_t size, int (*cmp)(const void*, const void*))
{
	for (int i = 0; i < num - 1; i++)
	{
		for (int j = 0; j < num - 1 - i; j++)
		{
			if (cmp((char*)base + j * size , (char*)base + (j + 1) * size)>0)
			{
				Swap((char*)base + j * size, (char*)base + (j + 1) * size,size);
			}
		}
	}
}
int main()
{
	int arr[10] = { 1,3,5,7,9,2,4,6,8,10 };
	simulate_qsort(arr, sizeof(arr) / sizeof(arr[0]), sizeof(arr[0]), cmp);
	Print(arr, sizeof(arr) / sizeof(arr[0]));
}








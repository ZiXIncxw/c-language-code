#define _CRT_SECURE_NO_WARNINGS 1
#include "List.h"

test01()
{
	LTNode* plist = NULL;
	LTInit(&plist);
	LTPushBack(plist, 1);
	LTPrint(plist);
	LTPushBack(plist, 2);
	LTPrint(plist);
	LTPushFront(plist, 3);
	LTPrint(plist);
	LTNode* find = LTFind(plist, 3);
	LTInsert(find, 4);
	LTPrint(plist);
	LTErase(find);
	LTPrint(plist);
	LTDesTroy(plist);
	LTPrint(plist);
	/*LTPopFront(plist);
	LTPrint(plist);*/
	/*LTPopBack(plist);
	LTPrint(plist);*/
	/*LTPushBack(plist, NULL);
	LTPrint(plist);*/

}

//int main()
//{
//	//test01();
//
//	int arr1[9] = {1,2,3,4,5,6,7,8,9,};
//	int arr2[9] = {0};
//	for (int i = 0; i < 9; i++)
//	{
//		arr2[i] = arr1[8 - i];
//	}
//	for (int i = 0; i < 9; i++)
//	{
//		printf("%d ", arr2[i]);
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int n, n1, n2, n3;
//	for (n = 100; n < 1000; n++)
//	{
//		n1 = n % 10;
//		n2 = n / 10 % 10;
//		n3 = n / 100;
//		if (n == n1 * n1 * n1 + n2 * n2 * n2 + n3 * n3 * n3)
//			printf("%10d", n);
//	}
//}

#include<stdio.h>
int main()
{
	int n, n1, n2, n3;
	for(n = 100; n < 1000; n++)
	{
		n1 = n % 10;
		n2 = n / 10 % 10;
		n3 = n / 100;
		if (n == n1 * n1 * n1 + n2 * n2 * n2 + n3 * n3 * n3)
			printf("%10d", n);
	}
}
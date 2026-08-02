#define _CRT_SECURE_NO_WARNINGS 1
#include "List.h"

void Test_1()
{
	SLTNode* plist = SLTBuyNode(0);
	SLTPushBack(&plist, 1);
	SLTPushBack(&plist, 2);
	SLTPushBack(&plist, 3);
	SLTPushBack(&plist, 4);

	SLTPrint(plist);
}


Test_2()
{
	SLTNode* plist = SLTBuyNode(0);
	SLTPushFront(&plist, 1);
	SLTPushFront(&plist, 2);
	SLTPushFront(&plist, 3);
	SLTPushFront(&plist, 4);

	SLTPrint(plist);

	/*SLTPopBack(&plist);
	SLTPrint(plist);
	SLTPopBack(&plist);
	SLTPrint(plist);
	SLTPopBack(&plist);
	SLTPrint(plist);
	SLTPopBack(&plist);
	SLTPrint(plist);*/


	SLTPopFront(&plist);
	SLTPrint(plist);
	SLTNode* result = SLTFind(plist, 2);
	printf("%d\n", result->data);
	SLTPopFront(&plist);
	SLTPrint(plist);
	SLTPopFront(&plist);
	SLTPrint(plist);
	SLTPopFront(&plist);
	SLTPrint(plist);


}

void Test_3()
{
	SLTNode* plist = SLTBuyNode(0);
	SLTPushFront(&plist, 1);
	SLTPushFront(&plist, 2);
	SLTPushFront(&plist, 3);
	SLTPushFront(&plist, 4);

	SLTPrint(plist);

	SLTNode* result = SLTFind(plist, 3);

	SLTInsert(&plist, result, 5);
	SLTPrint(plist);

	SLTNode* result1 = SLTFind(plist, 5);
	SLTInsertAfter(&plist, result1, 6);
	SLTPrint(plist);
}


int main()
{
	//Test_1();
	//Test_2();
	Test_3();



	return 0;
}




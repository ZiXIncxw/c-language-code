#define _CRT_SECURE_NO_WARNINGS 1
#include "SList.h"

void test1()
{
	SLTNode* node1 = (SLTNode*)malloc(sizeof(SLTNode));
	node1->data = 1;

	SLTNode* node2 = (SLTNode*)malloc(sizeof(SLTNode));
	node2->data = 2;

	SLTNode* node3 = (SLTNode*)malloc(sizeof(SLTNode));
	node3->data = 3;

	SLTNode* node4 = (SLTNode*)malloc(sizeof(SLTNode));
	node4->data = 4;

	node1->next = node2;
	node2->next = node3;
	node3->next = node4;
	node4->next = NULL;
	SLTNode* plist = node1;
	SLTPrint(plist);
}

void test2()
{
	SLTNode* plist = NULL;
	SLTPushBack(&plist, 1);
	SLTPushBack(&plist, 2);
	SLTPushBack(&plist, 3);
	SLTPushBack(&plist, 4);
	SLTPrint(plist);
}
void test3()
{
	SLTNode* plist = NULL;
	SLTPushFront(&plist, 1);
	SLTPushFront(&plist, 2);
	SLTPushFront(&plist, 3);
	SLTPushFront(&plist, 4);
	STLPopBack(&plist);
	STLPopBack(&plist);
	SLTPrint(plist);
}
void test4()
{
	SLTNode* plist = NULL;
	SLTPushFront(&plist, 1);
	SLTPushFront(&plist, 2);
	SLTPushFront(&plist, 3);
	SLTPushFront(&plist, 4);
	/*SLTPopFront(&plist);
	SLTPopFront(&plist);*/
	SLTNode* find = SLTFind(plist, 4);
	
		/*if (find == NULL)
		{
			printf("没找到\n");
		}
		else
		{
			printf("找到了\n");
		}*/
	/*SLTInsert(&plist, find, 100);*/
	//SLTInsertAfter(find, 100);
	//SLTErase(&plist, find);
	SLTEraseAfter(find);
	SListDesTroy(&plist);
	SLTPrint(plist);
}
int main()
{
	//test1();
	//test2();
	//test3();
	test4();
	return 0;
}
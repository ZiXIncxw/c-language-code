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

int main()
{
	test01();
	return 0;
}
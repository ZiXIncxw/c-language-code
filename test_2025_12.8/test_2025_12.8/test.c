#define _CRT_SECURE_NO_WARNINGS 1

#include "SeqList.h"
void SLTest01()
{
	SL sl;
	SLInit(&sl);

	SLPushBack(&sl, 1);
	SLPushBack(&sl, 2);
	SLPushBack(&sl, 3);
	SLPushBack(&sl, 4);
	SLPrint(sl);//1 2 3 4
	printf("\n");
	/*SLBackAdd(&sl, 4, 5);
	SLPrint(sl); */
	SLDel(&sl,1);
	SLPrint(sl);
	/*SLPushFront(&sl, 5);
	SLPushFront(&sl, 6);
	SLPrint(sl); */
	//SLPopBack(&sl);
	//SLPrint(sl);//1 2 3 
	//SLPopBack(&sl);
	//SLPrint(sl);
	//SLPopBack(&sl);
	//SLPrint(sl);
	/*SLPopBack(&sl);
	SLPrint(sl);
	SLPopFront(&sl);
	SLPrint(sl);*/
	SLDestroy(&sl);
}

int main()
{
	SLTest01();
	return 0;
}

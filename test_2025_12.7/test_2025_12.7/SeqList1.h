#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

typedef int SLDataType;

typedef struct SeqList//动态顺序表
{
	SLDataType* arr;
	int size;
	int capacity;
}SL;

//顺序表初始化
void SLInit(SL* ps);
//顺序表的销毁

//头部插入删除 / 尾部插入删除
void SLPushBack(SL* ps, SLDataType x);
void SLDestroy(SL* ps);
//void SLPushFront(SL* ps, SLDataType x);
//
//void SLPopBack(SL* ps);
//void SLPopFront(SL* ps);





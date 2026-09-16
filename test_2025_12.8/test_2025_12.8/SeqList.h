#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

typedef int SLDataType;

typedef struct SeqList
{
	SLDataType* arr;
	int size;
	int capacity;
}SL;
void SLCheck(SL* ps);
void SLPrint(SL ps);
//顺序表初始化
void SLInit(SL* ps);
//顺序表的销毁
void SLDestroy(SL* ps);
//头部插入删除 / 尾部插入删除
void SLPushBack(SL* ps, SLDataType x);

void SLPushFront(SL* ps, SLDataType x);

void SLPopBack(SL* ps);
void SLPopFront(SL* ps);
void SLBackAdd(SL* ps, int pos, SLDataType x);
void SLDel(SL* ps, int pos);







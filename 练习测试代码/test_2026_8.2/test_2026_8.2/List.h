#pragma once

#include <stdio.h>
#include <assert.h>
#include <stdlib.h>

typedef int SLTTypeDate;

typedef struct SListNode
{
	struct SListNode* next;
	SLTTypeDate data;
}SLTNode;

//打印
void SLTPrint(SLTNode* phead);
//申请新节点
SLTNode* SLTBuyNode(SLTTypeDate x);
//尾插
void SLTPushBack(SLTNode** pphead,SLTTypeDate x);
//头插
void SLTPushFront(SLTNode** pphead, SLTTypeDate x);
//尾删
void SLTPopBack(SLTNode** pphead);
//头删
void SLTPopFront(SLTNode** pphead);
//查找
SLTNode* SLTFind(SLTNode* phead, SLTTypeDate x);
//在指定位置前插入数据
void SLTInsert(SLTNode** pphead,SLTNode* pos, SLTTypeDate x);
//在指定位置之后插入数据
void SLTInsertAfter(SLTNode** pphead, SLTNode* pos, SLTTypeDate x);
//删除pos节点
void SLTErase(SLTNode** pphead, SLTNode* pos);
//删除pos之后的节点
//void SLTEraseAfter(SLTNode** pphead, SLTNode* pos);
//销毁单链表
void SLTDestroy(SLTNode** pphead);










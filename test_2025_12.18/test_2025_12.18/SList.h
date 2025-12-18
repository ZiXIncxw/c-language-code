#define _CRT_SECURE_NO_WARNINGS 1
#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

typedef int SLTDataType;
typedef struct SListNode
{
	SLTDataType data;
	struct SListNode* next;
}SLTNode;

void SLTPrint(SLTNode* phead);

void SLTPushBack(SLTNode** phead, SLTDataType x);

void SLTPushFront(SLTNode** phead, SLTDataType x);

void STLPopBack(SLTNode** phead);

void SLTPopFront(SLTNode** phead);

SLTNode* SLTFind(SLTNode* phead, SLTDataType x);

void SLTInsert(SLTNode** phead, SLTNode* pos, SLTDataType x);

void SLTInsertAfter(SLTNode* pos, SLTDataType x);

void SLTErase(SLTNode** phead, SLTNode* pos);

void SLTEraseAfter(SLTNode* pos);

void SListDesTroy(SLTNode** phead);
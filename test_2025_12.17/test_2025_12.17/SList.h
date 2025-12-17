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







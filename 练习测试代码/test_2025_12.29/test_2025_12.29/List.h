#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

typedef int LTDataType;

typedef struct ListNode
{
	LTDataType data;
	struct ListNode* prev;
	struct ListNode* next;
}LTNode;


void LTInit(LTNode** phead);

void LTPrint(LTNode* phead);

// 尾插
void LTPushBack(LTNode * phead, LTDataType x);
//头插
void LTPushFront(LTNode* phead, LTDataType x);

//尾删
void LTPopBack(LTNode* phead);
//头删
void LTPopFront(LTNode* phead);


//在pos位置之后插入数据
void LTInsert(LTNode* pos, LTDataType x);
//删除pos节点
void LTErase(LTNode* pos);
LTNode* LTFind(LTNode* phead, LTDataType x);

void LTDesTroy(LTNode* phead);
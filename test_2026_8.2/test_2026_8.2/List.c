#define _CRT_SECURE_NO_WARNINGS 1

#include "List.h"

void SLTPrint(SLTNode* phead)
{
	SLTNode* pcur = phead;
	while (pcur)
	{
		printf("%d->", pcur->data);
		pcur = pcur->next;
	}
	printf("NULL\n");

}

SLTNode* SLTBuyNode(SLTTypeDate x)
{
	SLTNode* newnode = (SLTNode*)malloc(sizeof(SLTNode));
	if (newnode == NULL)
	{
		printf("malloc fail");
		exit(1);
	}
	newnode->data = x;
	newnode->next = NULL;

}

void SLTPushBack(SLTNode** pphead, SLTTypeDate x)
{
	assert(pphead);
	SLTNode* newnode = SLTBuyNode(x);
	if (*pphead == NULL)
	{
		*pphead = newnode;
	}
	else
	{
		SLTNode* ptail = *pphead;

		//找尾节点
		while (ptail->next)
		{
			ptail = ptail->next;
		}
		ptail->next = newnode;
	}
	

}

void SLTPushFront(SLTNode** pphead, SLTTypeDate x)
{
	assert(pphead);

	SLTNode* newnode = SLTBuyNode(x);
	newnode->next = *pphead;
	*pphead = newnode;

}

void SLTPopBack(SLTNode** pphead)
{
	assert(pphead);
	assert(*pphead);
	//处理单节点请况
	if ((*pphead)->next == NULL)
	{
		free(*pphead);
		(*pphead) = NULL;
	}
	SLTNode* ptail = *pphead;
	SLTNode* prev = *pphead;
	//找尾节点
	while (ptail->next)
	{
		prev = ptail;
		ptail = ptail->next;
	}
	prev->next = NULL;
	free(ptail);
	ptail = NULL;

}

void SLTPopFront(SLTNode** pphead)
{
	assert(pphead);
	assert(*pphead);

	SLTNode* pcur = *pphead;      // pcur 指向第一个节点
	*pphead = pcur->next;         // 头指针指向第二个节点（如果只有一个，就是 NULL）
	free(pcur);                   // 释放原来的第一个节点
	pcur = NULL;
	
}

SLTNode* SLTFind(SLTNode* phead, SLTTypeDate x)
{
	//查找不需要断言
	
	SLTNode* pcur = phead;
	while (pcur)
	{
		if (pcur->data == x)
		{
			return pcur;
		}
		pcur = pcur->next;
	}
	return NULL;

}

void SLTInsert(SLTNode** pphead, SLTNode* pos, SLTTypeDate x)
{
	assert(pphead);
	assert(*pphead);
	assert(pos);
	if (*pphead == pos)
	{
		SLTPushBack(pphead, x);
	}
	else
	{
		SLTNode* pcur = *pphead;
		SLTNode* newnode = SLTBuyNode(x);
		//找pos前一个位置
		while (pcur->next != pos)
		{
			pcur = pcur->next;
		}

		newnode->next = pcur->next;
		pcur->next = newnode;
	}
	
	
}

void SLTInsertAfter(SLTNode** pphead, SLTNode* pos, SLTTypeDate x)
{
	assert(pphead);
	assert(*pphead);
	assert(pos);
	SLTNode* newnode = SLTBuyNode(x);
	newnode->next = pos->next;
	pos->next = newnode;
}

void SLTErase(SLTNode** pphead, SLTNode* pos)
{
	assert(pphead);
	assert(*pphead);
	assert(pos);
	//单链表，头删
	if (*pphead == pos)
	{
		SLTNode* next = (*pphead)->next;
		free(pos);
		pos = NULL;
		*pphead = next;
	}
	else
	{
		SLTNode* pcur = *pphead;
		while (pcur->next != pos)
		{
			pcur = pcur->next;

		}
		pcur->next = pos->next;
		free(pos);
		pos = NULL;

	}
	
}

void SLTDestroy(SLTNode** pphead)
{
	assert(pphead);
	assert(*pphead);
	SLTNode* pcur = *pphead;
	while (pcur)
	{
		SLTNode* next = pcur->next;
		free(pcur);
		pcur = next;
	}
	*pphead = NULL;
}



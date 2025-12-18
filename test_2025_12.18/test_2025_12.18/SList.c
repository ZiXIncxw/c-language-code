#define _CRT_SECURE_NO_WARNINGS 1
#include "SList.h"
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
SLTNode* SLTBuyNode(SLTDataType x)
{
	SLTNode* newnode = (SLTNode*)malloc(sizeof(SLTNode));
	if (newnode == NULL)
	{
		perror("malloc  fail");
		exit(1);
	}
	newnode->data = x;
	newnode->next = NULL;
}

void SLTPushBack(SLTNode** phead, SLTDataType x)
{
	assert(phead);
	SLTNode* newnode = SLTBuyNode(x);
	if (*phead == NULL)
	{
		*phead = newnode;
	}
	else
	{
		SLTNode* ptail = *phead;
		while (ptail->next)
		{
			ptail = ptail->next;
		}
		ptail->next = newnode;
	}

}

void SLTPushFront(SLTNode** phead, SLTDataType x)
{
	assert(phead);
	SLTNode* newnode = SLTBuyNode(x);
	newnode->next = *phead;
	*phead = newnode;
}

void STLPopBack(SLTNode** phead)
{
	assert(phead && *phead);
	//链表中只有一个节点
	if ((*phead)->next == NULL)
	{
		free((*phead));
		*phead = NULL;
	}
	else
	{
		SLTNode* prev = *phead;
		SLTNode* ptail = *phead;
		while (ptail->next)
		{
			prev = ptail;
			ptail = ptail->next;
		}
		free(ptail);
		prev->next = NULL;
		ptail = NULL;

	}

}

void SLTPopFront(SLTNode** phead)
{
	assert(phead && *phead);
	SLTNode* next = (*phead)->next;
	free(*phead);
	*phead = next;

}

SLTNode* SLTFind(SLTNode* phead, SLTDataType x)
{
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

void SLTInsert(SLTNode** phead, SLTNode* pos, SLTDataType x)
{
	assert(phead && *phead);
	assert(pos);
	if (*phead == pos)
	{
		SLTPushFront(phead,x);
	}
	else
	{
		SLTNode* newnode = SLTBuyNode(x);
		SLTNode* prev = *phead;
		while (prev->next != pos)
		{
			prev = prev->next;
		}
		newnode->next = pos;
		prev->next = newnode;
	}
}

void SLTInsertAfter(SLTNode* pos, SLTDataType x)
{
	assert(pos);
	SLTNode* newnode = SLTBuyNode(x);
	newnode->next = pos->next;
	pos->next = newnode;
}

void SLTErase(SLTNode** phead, SLTNode* pos)
{
	assert(phead && *phead);
	assert(pos);
	if (pos == *phead)
	{
		//头删
		SLTNode* next = (*phead)->next;
		free(pos);
		(*phead) = next;
	}
	else
	{
		SLTNode* pcur = *phead;
		while (pcur->next != pos)
		{
			pcur = pcur->next;
		}
		pcur->next = pos->next;
		free(pos);
		pos = NULL;
	}
}

void SLTEraseAfter(SLTNode* pos)
{
	assert(pos&&pos->next);
	SLTNode* del = pos->next;
	pos->next = del->next;
	free(del);
	del = NULL;
}

void SListDesTroy(SLTNode** phead)
{
	assert(phead && *phead);
	SLTNode* pcur = *phead;
	while (pcur)
	{
		SLTNode* next = pcur->next;
		free(pcur);
		pcur = next;

	}
	*phead = NULL;
}
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

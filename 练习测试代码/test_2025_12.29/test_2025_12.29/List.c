#define _CRT_SECURE_NO_WARNINGS 1

#include "List.h"


LTNode* LTBuyNode(LTDataType x)
{
	LTNode* node =(LTNode*)malloc(sizeof(LTNode));
	if (node == NULL)
	{
		perror("malloc,fail");
		exit(1);
	}
	node->data = x;
	node->next = node->prev = node;
	return node;
}
void LTInit(LTNode** phead)
{
	*phead = LTBuyNode(-1);
}

void LTPrint(LTNode* phead)
{
	LTNode* pcur = phead->next;
	while (pcur != phead)
	{
		printf("%d->", pcur->data);
		pcur = pcur->next;
	}
	printf("\n");
}

void LTPushBack(LTNode* phead, LTDataType x)
{
	assert(phead);
	LTNode* newnode = LTBuyNode(x);

	newnode->next = phead;
	newnode->prev = phead->prev;

	phead->prev->next = newnode;
	phead->prev = newnode;

}

void LTPushFront(LTNode* phead, LTDataType x)
{
	assert(phead);
	LTNode* newnode = LTBuyNode(x);
	newnode->next = phead->next;
	newnode->prev = phead;

	phead->next->prev = newnode;
	phead->next = newnode;


}

void LTPopBack(LTNode* phead)
{
	assert(phead && phead->next!=phead);
	LTNode* del = phead->prev;

	del->prev->next = phead;
	phead->prev = del->prev;

	free(del);
	del = NULL;
}

void LTPopFront(LTNode* phead)
{
	assert(phead && phead->next != phead);
	LTNode* del = phead->next;

	del->next->prev = phead;
	phead->next = del->next;


	free(del);
	del = NULL;
}
LTNode* LTFind(LTNode* phead, LTDataType x)
{
	LTNode* pcur = phead->next;
	while (pcur != phead)
	{
		if (pcur->data == x)
		{
			return pcur;
		}
		pcur = pcur->next;
	}
	return NULL;
}


void LTInsert(LTNode* pos, LTDataType x)
{
	assert(pos);
	LTNode* newnode = LTBuyNode(x);

	newnode->prev = pos;
	newnode->next = pos->next;
	pos->next->prev = newnode;
	pos->next = newnode;

}

void LTErase(LTNode* pos)
{
	assert(pos);
	//pos  pos->next  pos->prev
	pos->next->prev = pos->prev;
	pos->prev->next = pos->next;

	free(pos);
	pos = NULL;

}

void LTDesTroy(LTNode* phead)
{
	assert(phead);
	LTNode* pcur = phead->next;
	while (pcur != phead)
	{
		LTNode* Pcur_next = pcur->next;
		free(pcur);
		pcur = Pcur_next;
	}
	free(phead);
	phead = NULL;
}
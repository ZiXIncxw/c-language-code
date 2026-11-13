#define _CRT_SECURE_NO_WARNINGS 1

#include "Queue.h"

void QueueInit(Queue* pq)
{
	assert(pq);
	pq->head = pq->tail = NULL;
	pq->size = 0;
}

void QueueDestroy(Queue* pq)
{
	assert(pq);
	QNode* curr = pq->head;
	while (curr)
	{
		QNode* next = curr->next;
		free(curr);
		curr = next;
	}
	pq->head = pq->tail = NULL;
	pq->size = 0;
}

void QueuePush(Queue* pq, QDataType data)
{
	assert(pq);
	QNode* newhead = (QNode*)malloc(sizeof(QNode));
	if (newhead == NULL)
	{
		perror("malloc fail");
		return;
	}
	newhead->next = NULL;
	newhead->val = data;
	//нч╫з╣Ц
	if (pq->tail == NULL)
	{
		pq->head = pq->tail = newhead;
	}
	else
	{
		pq->tail->next = newhead;
		pq->tail = newhead;
	}
	pq->size++;
}

void QueuePop(Queue* pq)
{
	assert(pq);
	assert(pq->size != 0);
	QNode* next = pq->head->next;
	free(pq->head);
	pq->head = next;
	if (pq->head == NULL)
	{
		pq->tail = NULL;
	}
	pq->size--;
}

QDataType QueueFront(Queue* pq)
{
	assert(pq);
	assert(pq->size != 0);
	return pq->head->val;
}

QDataType QueueBack(Queue* pq)
{
	assert(pq);
	assert(pq->size != 0);
	return pq->tail->val;
}

int QueueSize(Queue* pq)
{
	assert(pq);
	return pq->size;
}

bool QueueEmpty(Queue* pq)
{
	assert(pq);
	return pq->size == 0;
}
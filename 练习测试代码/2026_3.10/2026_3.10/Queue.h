#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <stdbool.h>

typedef int	QDataType;
typedef struct QueueNode
{
	struct QueueNode* next;
	QDataType val;
}QNode;

typedef struct Queue
{
	QNode* head;
	QNode* tail;
	int size;
}Queue;
//初始化
void QueueInit(Queue* pq);
//销毁
void QueueDestroy(Queue* pq);
//插入
void QueuePush(Queue* qp, QDataType data);
//删除
void QueuePop(Queue* pq);
//获取队头元素
QDataType QueueFront(Queue* pq);
//获取队尾元素
QDataType QueueBack(Queue* pq);
//获取元素个数
int QueueSize(Queue* pq);
//判空
bool QueueEmpty(Queue* pq);







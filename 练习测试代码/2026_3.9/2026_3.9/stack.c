#define _CRT_SECURE_NO_WARNINGS 1

#include "stack.h"

void STInit(Stack* st)
{
	assert(st);
	st->a = NULL;
	st->capacity = st->top = 0;
}

void STDestroy(Stack* st)
{
	assert(st);
	free(st->a);
	st->a = NULL;
	st->capacity = st->top = 0;
}

void STPush(Stack* st, STdatatype data)
{
	assert(st);
	if (st->top == st->capacity)//À©ÈÝ
	{
		int newcapacity = (st->capacity == 0) ? 4 : st->capacity * 2;
		STdatatype* tmp = realloc(st->a, newcapacity * sizeof(STdatatype));
		if (tmp == NULL)
		{
			perror("realloc fail");  // Êä³ö´íÎóÔ­Òò
			return;
		}
		st->a = tmp;
		st->capacity = newcapacity;
	}
	st->a[st->top] = data;
	st->top++;
}

void STPop(Stack* st)
{
	assert(st);
	assert(st->top > 0);
	st->top--;
}

STdatatype STTop(Stack* st)
{
	assert(st);
	assert(st->top > 0);
	return st->a[st->top - 1];
}

bool STEmpty(Stack* st)
{
	assert(st);
	return st->top == 0;
}

int STSize(Stack* st)
{
	assert(st);
	return st->top;
}
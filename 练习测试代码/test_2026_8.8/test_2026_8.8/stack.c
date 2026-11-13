#define _CRT_SECURE_NO_WARNINGS 1

#include "stack.h"

void STInit(ST* ps)
{
	assert(ps);
	ps->arr = NULL;
	ps->capacity = ps->top = 0;
}

void STDestroy(ST* ps)
{
	assert(ps);
	free(ps->arr);
	ps->arr = NULL;
	ps->capacity = ps->top = 0;

}

void STPush(ST* ps,STDataType x)
{
	assert(ps);
	if (ps->capacity == ps->top)//À©ÈÝ
	{
		int newcapacity = (ps->capacity == 0)?4:ps->capacity * 2;
		STDataType* tmp = (STDataType*)realloc(ps->arr,newcapacity*sizeof(STDataType));
		if (tmp == NULL)
		{
			perror("realloc fail!");
			return;
		}
		ps->arr = tmp;
		ps->capacity = newcapacity;
		
	}

	ps->arr[ps->top++] = x;

}

void STPop(ST* ps)
{
	assert(ps);
	assert(ps->top > 0);
	ps->top--;
}

STDataType ST_Return_Top(ST* ps)
{
	assert(ps);
	assert(ps->top > 0);
	return ps->arr[ps->top - 1];
}

int STSize(ST* ps)
{
	assert(ps);
	return ps->top;
}

bool STEmpty(ST* ps)
{
	assert(ps);
	return ps->top == 0;
}


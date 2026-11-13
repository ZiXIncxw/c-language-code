#define _CRT_SECURE_NO_WARNINGS 1
#include "SeqList.h"


void SLPrint(SL ps)
{
	for (int i = 0; i < ps.size; i++)
	{
		printf("%d ", ps.arr[i]);
	}
	
}
void SLInit(SL* ps)
{
	ps->arr = NULL;
	ps->size = ps->capacity = 0;
}

void SLDestroy(SL* ps)
{
	if (ps->arr != NULL)
	{
		free(ps->arr);
	}
	ps->arr = NULL;
	ps->size = ps->capacity = 0;
}
void SLCheck(SL* ps)
{
	if (ps->size == ps->capacity)
	{
		int Newcapacity = ps->capacity == 0 ? 4 : 2 * ps->capacity;
		SLDataType* tmp = (SLDataType*)realloc(ps->arr, Newcapacity * sizeof(SLDataType));
		if (tmp == NULL)
		{
			perror("realloc");
			exit(1);
		}
		ps->arr = tmp;
		ps->capacity = Newcapacity;
	}
}
void SLPushBack(SL* ps, SLDataType x)//Î²²å
{
	assert(ps);

	SLCheck(ps);
	ps->arr[ps->size++] = x;

}

void SLPushFront(SL* ps, SLDataType x)//Í·²å
{
	assert(ps);
	SLCheck(ps);
	for (int i = ps->size; i > 0; i--)
	{
		ps->arr[i] = ps->arr[i - 1];//arr[1]=arr[0];
	}
	ps->arr[0] = x;
	ps->size++;
}


void SLPopBack(SL* ps)//Î²É¾
{
	assert(ps->size);
	assert(ps->arr);
	--ps->size;

}

void SLPopFront(SL* ps)//Í·É¾
{
	assert(ps->size);
	assert(ps->arr);
	for (int i = 0; i < ps->size - 1; i++)
	{
		ps->arr[i] = ps->arr[i + 1];
	}
	ps->size--;
}

void SLBackAdd(SL* ps, int pos, SLDataType x)
{
	assert(ps);
	assert(pos >= 0 && pos <= ps->size);
	SLCheck(ps);
	for (int i = ps->size; i > pos; i--)
	{
		ps->arr[i] = ps->arr[i - 1];
	}
	ps->arr[pos] = x;
	ps->size++;
}

void SLDel(SL* ps, int pos)
{
	assert(ps);
	assert(pos >= 0 && pos <= ps->size);
	SLCheck(ps);
	for (int i = pos; i < ps->size-1; i++)
	{
		ps->arr[i] = ps->arr[i + 1];
	}
	ps->size--;

}




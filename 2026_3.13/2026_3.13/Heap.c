#define _CRT_SECURE_NO_WARNINGS 1

#include "Heap.h"

void Swap(HPDataType* p1, HPDataType* p2)
{
	HPDataType tmp = *p2;
	*p2 = *p1;
	*p1 = tmp;
}

HPDataType HPTop(HP* php)
{
	assert(php);
	assert(php->size > 0);
	return php->arr[0];
}

void AdjustUp(HPDataType* arr, int child)
{
	int parent = (child - 1) / 2;
	while (child > 0)
	{
		if (arr[child] < arr[parent])
		{
			Swap(&arr[child], &arr[parent]);
			child = parent;
			parent = (child - 1) / 2;
		}
		else
		{
			break;
		}
	}
}

void AdjustDown(HPDataType* arr, int nums, int parent)
{
	int child = (parent * 2) + 1;
	while (child < nums)
	{
		if (child + 1 < nums && arr[child + 1] < arr[child])
		{
			child++;
		}
		//找到要交换的孩子
		if (arr[child] < arr[parent])
		{
			Swap(&arr[child], &arr[parent]);
			parent = child;
			child = (parent * 2) + 1;
		}
		else
		{
			break;
		}
	}

}

void HPInit(HP* php)
{
	assert(php);
	php->arr = NULL;
	php->capacity = php->size = 0;
}

void HPDestroy(HP* php)
{
	assert(php);
	free(php->arr);
	php->arr = NULL;
	php->capacity = php->size = 0;
}

void HPPush(HP* php, HPDataType data)
{
	assert(php);
	if (php->capacity == php->size)
	{
		int newcapacity = php->capacity == 0 ? 4 : (php->capacity) * 2;
		HPDataType* tmp = (HPDataType*)realloc(php->arr, newcapacity * sizeof(HPDataType));
		if (tmp == NULL)
		{
			perror("realloc fail");
			return;
		}
		//扩容成功
		php->arr = tmp;
		php->capacity = newcapacity;
	}
	php->arr[php->size] = data;
	php->size++;
	AdjustUp(php->arr, php->size-1);
}

void HPPop(HP* php)
{
	assert(php);
	assert(php->size > 0);
	Swap(&php->arr[0], &php->arr[php->size - 1]);
	php->size--;
	AdjustDown(php->arr, php->size, 0);
}

bool HPEmpty(HP* php)
{
	assert(php);
	return php->size == 0;
}
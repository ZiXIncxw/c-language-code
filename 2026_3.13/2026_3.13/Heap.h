#pragma once

#include <stdio.h>
#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>

typedef int HPDataType;

typedef struct Heap
{
	HPDataType* arr;
	int size;
	int capacity;
}HP;

void Swap(HPDataType* p1, HPDataType* p2);

void AdjustUp(HPDataType* arr,int child);

void AdjustDown(HPDataType* arr,int nums,int parent);

void HPInit(HP* php);

void HPDestroy(HP* php);

void HPPush(HP* php, HPDataType data);

void HPPop(HP* php);

HPDataType HPTop(HP* php);

bool HPEmpty(HP* php);







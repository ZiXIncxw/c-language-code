#pragma once

#include <stdio.h>
#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
typedef int STDataType;

typedef struct Stack
{
	STDataType* arr;
	int top;
	int capacity;
}ST;

void STInit(ST* ps);

void STDestroy(ST* ps);

void STPush(ST* ps,STDataType x);

void STPop(ST* ps);

STDataType ST_Return_Top(ST* ps);

int STSize(ST* ps);

bool STEmpty(ST* ps);







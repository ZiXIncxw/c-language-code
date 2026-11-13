#pragma once
#include <iostream>
#include <assert.h>
using namespace std;

typedef int STDataType;
typedef struct Stack
{
    STDataType* a;
    int top;
    int capacity;
}ST;
void STInit(ST* ps, int n = 4);

#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
typedef int STdatatype;

struct Stack
{
	STdatatype* a;
	int top;
	int capacity;
};
typedef struct Stack Stack;
//初始化
void STInit(Stack* st);
//销毁
void STDestroy(Stack* st);
//入栈
void STPush(Stack* st, STdatatype data);
//出栈
void STPop(Stack* st);
//取栈顶数据
STdatatype STTop(Stack* st);
//判空
bool STEmpty(Stack* st);
//获取元素个数
int STSize(Stack* st);




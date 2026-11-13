
#include"SeqList1.h"

void SLTest01()
{
	SL sl;
	SLInit(&sl);

	SLPushBack(&sl, 1);
	SLPushBack(&sl, 2);
	SLPushBack(&sl, 3);
	SLPushBack(&sl, 4);
}

int main()
{
	SLTest01();
	return 0;
}


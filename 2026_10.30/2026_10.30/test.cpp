#define _CRT_SECURE_NO_WARNINGS 1
#include "Vector.h"

int main()
{
	Confidence::vector<int> v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);

	for (int i = 0; i < 4; i++)
	{
		printf("%d ", v[i]);
	}

	return 0;
}












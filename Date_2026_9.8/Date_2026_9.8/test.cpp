#define _CRT_SECURE_NO_WARNINGS 1

#include "Date.h"

int main()
{
	Date d1(2026, 9, 8);
	Date d2 = d1;
	d2.Print();

	d2 += 100;
	d2.Print();
	Date d4 = d1 + 100;
	d4.Print();
	d4 -= 100;
	d4.Print();

	return 0;
}
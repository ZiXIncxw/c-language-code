#define _CRT_SECURE_NO_WARNINGS 1
#include "Date.h"

int main()
{
	Date d1;
	d1.Print();
	Date d2(2026, 4, 11);
	d2.Print();

	/*d1 = d2;
	d1.Print();
	Date d3 = d2;
	d3.Print();*/
	Date d3 = d1 + 100;
	d3.Print();
	d2 += 1000;
	d2.Print();
	int d4 = d1 - d2;
	cout << d4;
	return 0;
}





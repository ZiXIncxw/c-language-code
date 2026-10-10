#define _CRT_SECURE_NO_WARNINGS 1

#include "string.h"

int main()
{
	Confidence::string s1 = "hello world";
	s1.erase(2, 3);
	cout << s1.c_str() << endl;
	return 0;
}
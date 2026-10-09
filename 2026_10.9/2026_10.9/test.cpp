#define _CRT_SECURE_NO_WARNINGS 1

#include "string.h"


namespace Confidence
{
	

}

int main()
{
	Confidence::string s1 = "hello world";
	s1.insert(3, 'a');
	cout << s1.c_str() << endl;
	s1.insert(0, "xxx");
	cout << s1.c_str() << endl;
	return 0;
}











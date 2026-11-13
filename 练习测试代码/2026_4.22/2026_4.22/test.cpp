#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
#include <string>

using namespace std;

void Test_string1()
{
	string s1;
	string s2("hello world");
	string s3 = s2;
	cout << s1 << s2 << s3 << endl;

	s2[0] = 'C';
	cout << s1 << s2 << s3 << endl;

	for (int i = 0; i < s2.size(); i++)
	{
		cout << s2[i] << " ";
	}
	cout << endl;
	//string::iterator it = s2.begin();
	auto it = s2.begin();
	while (it != s2.end())
	{
		cout << *it << " ";
		it++;
	}

	cout << endl;

	for (auto ch : s2)
	{
		cout <<ch << " ";
	}

}

void Test_string2()
{
	string s1;
	string s2("hello world");

	//string::reverse_iterator rit = s2.rbegin();
	auto rit = s2.rbegin();
	while (rit != s2.rend())
	{
		cout << *rit << " ";
		rit++;
	}


}

int main()
{
	//Test_string1();
	Test_string2();

	return 0;
}
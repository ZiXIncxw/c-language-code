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
	//auto it = s2.begin();
	string::iterator it = s2.begin();

	while (it != s2.end())
	{
		cout << *it << " ";
		it++;
	}

	cout << endl;


	//string s2("hello world");
	for (auto ch : s2)
	{
		cout << ch << " ";
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
		*rit += 1;
		cout << *rit << " ";
		rit++;
	}

	cout << endl;


	string::const_reverse_iterator crit = s2.rbegin();
	while (crit != s2.rend())
	{
		//*crit += 1;
		cout << *crit << " ";
		crit++;
	}
}




void TestPushBack()
{
	// reverse 反转  逆置
	// reserve 保留、预留
	string s;
	// 提前开空间，避免扩容，提高效率
	//s.reserve(100);
	size_t sz = s.capacity();
	cout << "capacity changed: " << sz << '\n';

	cout << "making s grow:\n";
	for (int i = 0; i < 100; ++i)
	{
		s.push_back('c');
		if (sz != s.capacity())
		{
			sz = s.capacity();
			cout << "capacity changed: " << sz << '\n';
		}
	}
}

void Test_string3()
{
	string s2("hello worldxxxxxxxxxxxxx");
	cout << s2.size() << endl;
	cout << s2.capacity() << endl << endl;

	s2.reserve(20);
	cout << s2.size() << endl;
	cout << s2.capacity() << endl << endl;

	s2.reserve(28);
	cout << s2.size() << endl;
	cout << s2.capacity() << endl << endl;

	s2.reserve(40);
	cout << s2.size() << endl;
	cout << s2.capacity() << endl << endl;

	s2.clear();
	cout << s2.size() << endl;
	cout << s2.capacity() << endl << endl;

	cout << typeid(string::iterator).name() << endl;
	cout << typeid(string::reverse_iterator).name() << endl;

}

int main()
{
	//Test_string1();
	//Test_string2();
	Test_string3();
	//TestPushBack();
	return 0;
}
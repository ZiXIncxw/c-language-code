#define _CRT_SECURE_NO_WARNINGS 1
#include "string.h"

void TestModern()
{
	Confidence::string s1("hello world");

	// ① 深拷贝：地址必须不同
	Confidence::string s2(s1);
	printf("s1=%p  s2=%p\n", s1.c_str(), s2.c_str());
	cout << "s2 = " << s2 << endl;          // 现在 << 也能用了

	// ② 自赋值：不能崩、内容不变（★ 重点，旧写法的 if 判断已经删了）
	s1 = s1;
	cout << "s1 = " << s1 << endl;

	// ③ 链式赋值
	Confidence::string s3, s4;
	s3 = s4 = s1;
	cout << "s3=" << s3 << "  s4=" << s4 << endl;

	// ④ 字面量赋值（走隐式转换 → tmp）
	s3 = "abc";
	cout << "s3 = " << s3 << endl;

	// ⑤ 传参、返回各走一遍
	Confidence::string s5 = s1;
	s5 = s2;
	cout << "s5 = " << s5 << endl;
}

int main()
{
	//Confidence::string in;

	//cout << "输入1: ";
	//cin >> in;
	//cout << "[" << in << "] size=" << in.size() << endl;

	//cout << "输入2: ";
	//cin >> in;                                   // 连着读第二个词，验证链式
	//cout << "[" << in << "] size=" << in.size() << endl;

	//cin >> in;
	//cout << in;

	TestModern();
	return 0;
}

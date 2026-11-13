#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>

using namespace std;

namespace Confidence
{
	int num = 10;
}

//void Func(int a =10)
//{
//	cout << a << endl;
//
//}
//
//// 全缺省
//
//void Func1(int a = 10, int b = 20, int c = 30)
//{
//	cout << "a = " << a << endl;
//	cout << "b = " << b << endl;
//	cout << "c = " << c << endl << endl;
//}
//// 半缺省
//
//void Func2(int a, int b = 10, int c = 20)
//{
//	cout << "a = " << a << endl;
//	cout << "b = " << b << endl;
//	cout << "c = " << c << endl << endl;
//}
//
//int main()
//{
//	/*int a;
//	double b;
//	char c;
//	cin >> a;
//	cin >> b >> c;*/
//
//	/*cout << "cxwnb" << endl;
//	cout << Confidence:: num << endl;*/
//	/*cout << a << " " << b << c << endl;*/
//	Func(20);
//	Func1();
//	Func2(10);
//
//	return 0;
//}


// 1、参数类型不同

int Add(int left, int right)
{
	cout << "int Add(int left, int right)" << endl;
	return left + right;
}
double Add(double left, double right)
{
	cout << "double Add(double left, double right)" << endl;
	return left + right;
}
// 2、参数个数不同

void f()
{
	cout << "f()" << endl;
}
void f(int a)
{
	cout << "f(int a)" << endl;
}
// 3、参数类型顺序不同

void f(int a, char b)
{
	cout << "f(int a,char b)" << endl;
}
void f(char b, int a)
{
	cout << "f(char b, int a)" << endl;
}

// 返回值不同不能作为重载条件，因为调?时也?法区分

//void fxx()
//{}
//
//int fxx()
//{
//        return 0;
//}
// 下?两个函数构成重载

// f()但是调?时，会报错，存在歧义，编译器不知道调?谁

void f1()
{
	cout << "f()" << endl;
}
void f1(int a = 10)
{
	cout << "f(int a)" << endl;
}

int main()
{
	Add(10, 20);
	Add(10.1, 20.2);
	f();
	f(10);
	f(10, 'a');
	f('a', 10);
	return 0;
}

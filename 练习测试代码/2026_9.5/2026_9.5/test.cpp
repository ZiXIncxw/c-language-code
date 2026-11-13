#define _CRT_SECURE_NO_WARNINGS 1
#include "test.h"

//void Init(int n)
//{
//	cout << n;
//}
//
//int main()
//{
//	Init();
//
//	return 0;
//}


#include<iostream>
using namespace std;

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
    cout << "f(int a, char b)" << endl;
}

void f(char b, int a)
{
    cout << "f(char b, int a)" << endl;
}

//void f()
//{
//
//}
//
//int f()
//{
//    return 0;
//}

//int f(int n = 10)
//{
//    return 0;
//}
//
//double f()
//{
//    return 0;
//}

//#include<iostream>
//using namespace std;
//
////计算一下A/B/C实例化的对象是多大？
//class A
//{
//public:
//    void Print()
//    {
//        cout << _ch << endl;
//    }
//private:
//    char _ch;
//    int _i;
//};
//
//class B
//{
//public:
//    void Print()
//    {
//    }
//};
//
//class C
//{
//};
//
//int main()
//{
//    A a;
//    B b;
//    C c;
//    cout << sizeof(a) << endl;
//    cout << sizeof(b) << endl;
//    cout << sizeof(c) << endl;
//
//    return 0;
//}

//#include<iostream>
//using namespace std;
//
//class A {
//private:
//    int _i;
//public:
//    void PrintThis() {
//        // 1. 直接打印 this 指针的值（地址）
//        cout << "this 指针的值（地址）: " << this << endl;
//
//        // 2. 打印当前对象自身的成员地址，验证它们在同一块内存中
//        cout << "成员 _i 的地址: " << &_i << endl;
//
//        // 3. 如果想把 this 当作数值看（比如转为十进制），可以强转
//        cout << "this 的十六进制: " << this << "，十进制: " << (long long)this << endl;
//    }
//};
//
//int main() {
//    A a1;
//    A a2;
//
//    cout << "对象 a1 本身的地址: " << &a1 << endl;
//    a1.PrintThis();
//
//    cout << "--------------------" << endl;
//
//    cout << "对象 a2 本身的地址: " << &a2 << endl;
//    a2.PrintThis();
//
//    return 0;
//}

//int main()
//{
//    /*Add(10, 20);
//    Add(10.1, 20.2);
//    f();
//    f(10);
//    f(10, 'a');
//    f('a', 10);*/
//
//    int a = 10;
//    int& b = a;
//    b = 20;
//    cout << &a <<endl<< &b << endl;
//
//
//    return 0;
//}

#include<iostream>
using namespace std;
class Date
{
public:
    //1.无参构造函数
    /*Date()
    {
        _year = 1;
        _month = 1;
        _day = 1;
    }*/

    //2.带参构造函数
    /*Date(int year, int month, int day)
    {
        _year = year;
        _month = month;
        _day = day;
    }*/

    //3.全缺省构造函数
   /* Date(int year = 1, int month = 1, int day = 1)
    {
        _year = year;
        _month = month;
        _day = day;
    }*/

    void Print()
    {
        cout << _year << "/" << _month << "/" << _day << endl;
    }
private:
    int _year;
    int _month;
    int _day;
};

//int main()
//{
//    // 如果留下三个构造中的第二个带参构造，第一个和第三个注释掉
//    // 编译报错：error C2512：“Date”：没有合适的默认构造函数可用
//    Date d1; // 调用默认构造函数
//    //Date d2(2025, 1, 1); // 调用带参的构造函数
//
//    // 注意：如果通过无参构造函数创建对象时，对象后面不用跟括号，否则编译器无法
//    // 区分这里是函数声明还是实例化对象
//    // warning C4930：“Date d3(void)”：未调用原型函数（是否是有意用变量定义的？）
//    Date d3();
//
//    d1.Print();
//    //d2.Print();
//
//    return 0;
//}

int main()
{
    cout << 10.0 / 2.0 << endl;
    return 0;
}


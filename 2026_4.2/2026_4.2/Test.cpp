#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
using namespace std;
class Date
{
public:
	Date(int year = 1, int month = 1, int day = 1)
	{
		_year = year;
		_month = month;
		_day = day;
	}

	//  error C2652: “Date”: 非法的复制构造函数: 第一个参数不应是“Date”
	// Date d2(d1)
	//Date(const Date& d)
	//{
	//	_year = d._year;
	//	_month = d._month;
	//	_day = d._day;
	//}

	void Print()
	{
		cout << _year << "-" << _month << "-" << _day << endl;
	}
private:
	int _year;
	int _month;
	int _day;
};

//void Func1(const Date& d)
void Func1(Date d)
{
	cout << &d << endl;
	d.Print();
}

//int main()
//{
//	Date d1(2024, 7, 12);
//	d1.Print();
//
//	// C++的规定，传值传参要调用拷贝构造
//	Func1(d1);
//
//	//调用拷贝构造要调用传值传参，而c++规定传值传参要调用拷贝构造，由此形成了无限递归
//	//而且需要注意的是最好加const，因为如果你不加const，那么你想要用d1拷贝d2，那么假如你在拷贝函数出现bug的话，d1的值就会被改变
//	//本来是想要让d1拷贝d2的，结果d1的值被改变了，那还得了，对不对
//	//所以我们如果不想要改变实参的时候，把const死死加上就可以了。
//
//	Date d2(d1);
//	d2.Print();
//
//	return 0;
//}
//
typedef int STDataType;
class Stack
{
public:
	Stack(int n = 4)
	{
		_a = (STDataType*)malloc(sizeof(STDataType) * n);
		if (nullptr == _a)
		{
			perror("malloc申请空间失败");
			return;
		}
		_capacity = n;
		_top = 0;
	}

	// st2(st1)
	//Stack(const Stack& st)
	//{
	//	cout << "Stack(const Stack& st)" << endl;
	//	// 需要对_a指向资源创建同样大的资源再拷贝值
	//	_a = (STDataType*)malloc(sizeof(STDataType) * st._capacity);
	//	if (nullptr == _a)
	//	{
	//		perror("malloc申请空间失败!!!");
	//		return;
	//	}
	//	memcpy(_a, st._a, sizeof(STDataType) * st._top);
	//	_top = st._top;
	//	_capacity = st._capacity;
	//}

	void Push(STDataType x)
	{
		if (_top == _capacity)
		{
			int newcapacity = _capacity * 2;
			STDataType* tmp = (STDataType*)realloc(_a, newcapacity *
				sizeof(STDataType));
			if (tmp == NULL)
			{
				perror("realloc fail");
				return;
			}
			_a = tmp;
			_capacity = newcapacity;
		}
		_a[_top++] = x;

	}
	~Stack()
	{
		cout << "~Stack()" << endl;
		free(_a);
		_a = nullptr;
		_top = _capacity = 0;
	}
private:
	STDataType* _a;
	size_t _capacity;
	size_t _top;
};

void Func(Stack st)
{

}

int main()
{
	Stack st1;
	st1.Push(1);
	st1.Push(2);

	Func(st1);

	// Stack不显示实现拷贝构造，用自动生成的拷贝构造完成浅拷贝
	// 会导致st1和st2里面的_a指针指向同一块资源，析构时会析构两次，程序崩溃
	//Stack st2(st1);

	return 0;
}

//void func1(const Stack& st)
//{
//
//}
//
//// 两个Stack实现队列
//class MyQueue
//{
//public:
//private:
//	Stack pushst;
//	Stack popst;
//};

//int main()
//{
//	Stack st1;
//	st1.Push(1);
//	st1.Push(2);
//
//	func1(st1);
//
//	// Stack不显示实现拷贝构造，用自动生成的拷贝构造完成浅拷贝
//	// 会导致st1和st2里面的_a指针指向同一块资源，析构时会析构两次，程序崩溃
//	Stack st2(st1);
//	Stack st3 = st1;
//
//	MyQueue mq1;
//	// MyQueue自动生成的拷贝构造，会自动调用Stack拷贝构造完成pushst/popst
//	// 的拷贝，只要Stack拷贝构造自己实现了深拷贝，他就没问题
//	MyQueue mq2(mq1);
//
//	return 0;
//}

//Stack& func2(Stack& st)
//{
//	st.Push(1);
//	st.Push(1);
//	st.Push(1);
//
//	return st;
//}
//
//int main()
//{
//	//Stack ret = func2();
//	Stack st1;
//	func2(st1);
//
//	return 0;
//}

/////////////////////////////////////////////////////////////////////////////
//class A
//{
//public:
//	void func()
//	{
//		cout << "A::func()" << endl;
//	}
//};
//
//typedef void(A::*PF)(); //成员函数指针类型
//
//int main()
//{
//	// void(A::*pf)() = nullptr;
//	PF pf = nullptr;
//	// C++规定成员函数要加&才能取到函数指针
//
//	pf = &A::func;
//	A aa;
//	(aa.*pf)();
//}


//#include<iostream>
//using namespace std;
//
//class Date
//{
//public:
//	Date(int year = 1, int month = 1, int day = 1)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//
//	// d3 = d1
//	/*Date& operator=(const Date& d)
//	{
//		_year = d._year;
//		_month = d._month;
//		_day = d._day;
//
//		return *this;
//	}*/
//
//	// 拷贝构造
//	Date(const Date& d)
//	{
//		_year = d._year;
//		_month = d._month;
//		_day = d._day;
//	}
//
//	// 构造
//	Date(const Date* d)
//	{
//		_year = d->_year;
//		_month = d->_month;
//		_day = d->_day;
//	}
//
//	void Print()
//	{
//		cout << _year << "-" << _month << "-" << _day << endl;
//	}
//
//	bool operator==(const Date& d)
//	{
//		return _year == d._year
//			&& _month == d._month
//			&& _day == d._day;
//	}
//
//	//d1 + 100;
//	Date operator+(int day);
//
//	//d1 - 100;
//	Date operator-(int day);
//
//	// d1 - d2;
//	int operator-(const Date& d);
//
//private:
//	int _year;
//	int _month;
//	int _day;
//};

//bool operator==(const Date& d1, const Date& d2)
//{
//	return d1._year == d2._year
//		&& d1._month == d2._month
//		&& d1._day == d2._day;
//}

//int main()
//{
//	Date d1(2024, 7, 5);
//	Date d2(2024, 7, 6);
//
//	// 运算符重载函数可以显示调用
//	//operator==(d1, d2);
//	// 编译器会转换成 operator==(d1, d2);
//	//d1 == d2;
//
//	// 运算符重载函数可以显示调用
//	d1.operator==(d2);
//
//	// 编译器会转换成 d1.operator==(d2);
//	d1 == d2;
//
//	d1 + 100;
//	d1 - 100;
//	d1 - d2;
//
//	return 0;
//}

//int main()
//{
//	// 11：45继续
//	Date d1(2024, 7, 5);
//	Date d2(2024, 7, 6);
//
//	// 赋值重载拷贝
//	d1 = d2;
//
//	// 拷贝构造
//	Date d3(d2);
//	Date d4 = d2;
//
//	d4 = d3 = d1;
//
//	int i, j, k;
//	i = j = k = 1;
//
//	return 0;
//}

//#include"Date.h"
//
//int main()
//{
//	Date d1(2024, 7, 12);
//	Date d2 = d1 + 100;
//	//Date d3(d1 + 100);
//	d1.Print();
//	d2.Print();
//
//	//d1 += 100;
//	//d1.Print();
//
//	d1 += 30000;
//	d1.Print();
//
//	return 0;
//}





//#include<iostream>
//using namespace std;
//
//class Date
//{
//public:
//    Date(int year = 1, int month = 1, int day = 1)
//    {
//        _year = year;
//        _month = month;
//        _day = day;
//    }
//
//    //编译报错：error C2652:“Date”:非法的复制构造函数：第一个参数不应是“Date”
//    //Date(Date d)
//    Date(const Date& d)
//    {
//        _year = d._year;
//        _month = d._month;
//        _day = d._day;
//    }
//
//    Date(Date* d)
//    {
//        _year = d->_year;
//        _month = d->_month;
//        _day = d->_day;
//    }
//
//    void Print()
//    {
//        cout << _year << "-" << _month << "-" << _day << endl;
//    }
//private:
//    int _year;
//    int _month;
//    int _day;
//};
//
//void Func1(Date d)
//{
//    cout << &d << endl;
//    d.Print();
//}
//
////Date Func2()
//Date& Func2()
//{
//    Date tmp(2024, 7, 5);
//    tmp.Print();
//    return tmp;
//}
//
//int main()
//{
//    Date d1(2024, 7, 5);
//    // C++规定自定义类型对象进行拷贝行为必须调用拷贝构造，所以这里传值传参要调用拷贝构造
//    //所以这里的d1传值传参给d要调用拷贝构造完成拷贝，传引用传参可以较少这里的拷贝
//    Func1(d1);
//
//    cout << &d1 << endl;
//
//    // 这里可以完成拷贝，但是不是拷贝构造，只是一个普通的构造
//    Date d2(&d1);
//    d1.Print();
//    d2.Print();
//
//    // 这样写才是拷贝构造，通过同类型的对象初始化构造，而不是指针
//    Date d3(d1);
//    d2.Print();
//
//    // 也可以这样写，这里也是拷贝构造
//    Date d4 = d1;
//    d2.Print();
//
//    // Func2返回了一个局部对象tmp的引用作为返回值
//    // Func2函数结束，tmp对象就销毁了，相当于了一个野引用
//    Date ret = Func2();
//    ret.Print();
//
//    return 0;
//}
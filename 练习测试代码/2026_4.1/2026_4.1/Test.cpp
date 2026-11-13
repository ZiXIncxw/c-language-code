#define _CRT_SECURE_NO_WARNINGS 1

//#include<iostream>
//#include<assert.h>  
//using namespace std;
//
//class Stack
//{
//public:
//    //成员函数
//    void Init(int n = 4)
//    {
//        array = (int*)malloc(sizeof(int) * n);
//        if (nullptr == array)
//        {
//            perror("malloc申请空间失败");
//            return;
//        }
//        capacity = n;
//        top = 0;
//    }
//
//    void Push(int x)
//    {
//        //...扩容
//        array[top++] = x;
//    }
//
//    int Top()
//    {
//        assert(top > 0);
//        return array[top - 1];
//    }
//
//    void Destroy()
//    {
//        free(array);
//        array = nullptr;
//        top = capacity = 0;
//    }
//
//private:
//    //成员变量
//    int* array;
//    size_t capacity;
//    size_t top;
//};//分号不能省略
//
//int main()
//{
//    Stack st;
//    st.Init();
//    st.Push(1);
//    st.Push(2);
//
//    cout << st.Top() << endl;
//
//    st.Destroy();
//
//    return 0;
//}


//#include<iostream>
//using namespace std;
//
//class Stack
//{
//public:
//    //成员函数
//    void Init(int n = 4);
//private:
//    // 成员变量
//    int* array;
//    size_t capacity;
//    size_t top;
//};
//
//// 声明和定义分离，需要指定类域
//void Stack::Init(int n)
//{
//    array = (int*)malloc(sizeof(int) * n);
//    if (nullptr == array)
//    {
//        perror("malloc申请空间失败");
//        return;
//    }
//    capacity = n;
//    top = 0;
//}
//
//int main()
//{
//    Stack st;
//    st.Init();
//    return 0;
//}

//#include<iostream>
//using namespace std;
//
//class Date
//{
//public:
//    void Init(int year, int month, int day)
//    {
//        _year = year;
//        _month = month;
//        _day = day;
//    }
//
//    void Print()
//    {
//        cout << _year << "/" << _month << "/" << _day << endl;
//    }
//
//private:
//    // 这里只是声明，没有开空间
//    int _year;
//    int _month;
//    int _day;
//};
//
//int main()
//{
//    // Date类实例化出对象d1和d2
//    Date d1;
//    Date d2;
//
//    d1.Init(2024, 3, 31);
//    d1.Print();
//
//    d2.Init(2024, 7, 5);
//    d2.Print();
//
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

//#include <iostream>
//
//using namespace std;
//
//class Date
//{
//	public:
//		/*Date()
//		{
//			_year = 1;
//			_month = 1;
//			_day = 1;
//		}
//		Date(int year,int month,int day)
//		{
//			_year = year;
//			_month = month;
//			_day = day;
//		}
//		Date(int year = 1, int month = 1,int day = 1)
//		{
//			_year = year;
//			_month = month;
//			_day = day;
//		}*/
//		void Print()
//		{
//			cout << _year << "/" << _month << "/" << _day << endl;
//		}
//private:
//	int _year;
//	int _month;
//	int _day;
//	
//};
//
//int main()
//{
//	Date d1;
//	d1.Print();
//	/*Date Func();
//	Func.Print();*/
//
//	return 0;
//}



// 两个Stack实现队列
//class MyQueue
//{
//public:
//    //编译器默认生成MyQueue的构造函数调用了Stack的构造，完成了两个成员的初始化
//private:
//    Stack pushst;
//    Stack popst;
//};

//int main()
//{
//    MyQueue mq;
//    return 0;
//}



//class MyQueue
//{
//public:
//    // 编译器默认生成MyQueue的析构函数调用了Stack的析构，释放的Stack内部的资源
//    // 显示写析构，也会自动调用Stack的析构
//    ~MyQueue()
//    {
//        cout << "MyQueue()" << endl;
//    }
//private:
//    Stack pushst;
//    Stack popst;
//};

#include<iostream>
using namespace std;

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
    void Print()
    {
        cout << _a << endl;
    }
    /*~Stack()
    {
        cout << "~Stack()" << endl;
        free(_a);
        _a = nullptr;
        _top = _capacity = 0;
    }*/
    //...
private:
    STDataType* _a;
    size_t _capacity;
    size_t _top;
    int* ptr;
};

int main()
{
    Stack st1;
    //Stack st2;
    Stack st;

    st.Print();
    //MyQueue mq;
    return 0;
}
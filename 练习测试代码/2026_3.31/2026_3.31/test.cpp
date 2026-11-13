#define _CRT_SECURE_NO_WARNINGS 1

//#include <stdio.h>
//
//int main()
//{
//	printf("hello world");
//	return 0;
//}


//#include <iostream>
//
//int rand = 10;
//int main()
//{
//	//printf("%d", rand);
//	//std::cout << rand;
//	return 0;
//
//}


//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//	cout << "hello world" << endl;
//	return 0;
//}

#include <stdio.h>
#include <stdlib.h>

// 1. 正常的命名空间定义
//namespace Confidence
//{
//    // 命名空间中可以定义变量/函数/类型
//    int rand = 10;
//
//    int Add(int left, int right)
//    {
//        return left + right;
//    }
//
//    struct Node
//    {
//        struct Node* next;
//        int val;
//    };
//}
//2. 命名空间可以嵌套
//namespace Confidence
//{
//    // 小明
//    namespace XiaoMing
//    {
//        int rand = 1;
//
//        int Add(int left, int right)
//        {
//            return left + right;
//        }
//    }
//
//    //小美
//    namespace XiaoMei
//    {
//        int rand = 2;
//
//        int Add(int left, int right)
//        {
//            return (left + right) * 10;
//        }
//    }
//}
//
//int main()
//{
//    printf("%d\n", Confidence::XiaoMing::rand);
//    printf("%d\n", Confidence::XiaoMei::rand);
//
//    printf("%d\n", Confidence::XiaoMing::Add(1, 2));
//    printf("%d\n", Confidence::XiaoMei::Add(1, 2));
//
//    return 0;
//}

//int main()
//{
//    // 这里默认是访问的是全局的rand函数指针
//    printf("%p\n", rand);
//    // 这里指定Confidence命名空间中的rand
//    printf("%d\n", Confidence::rand);
//
//    return 0;
//}

//#include<stdio.h>
//
//namespace Confidence
//{
//    int a = 0;
//    int b = 1;
//}
//
//int main()
//{
//    //编译报错：error C2065：“a”：未声明的标识符
//    printf("%d\n", a);
//    return 0;
//}
//
////指定命名空间访问
//int main()
//{
//    printf("%d\n", Confidence::a);
//    return 0;
//}
//
////using将命名空间中某个成员展开
//using Confidence::b;
//int main()
//{
//    printf("%d\n", Confidence::a);
//    printf("%d\n", b);
//    return 0;
//}
//
//// 展开命名空间中全部成员
//using namespace Confidence
//int main()
//{
//    printf("%d\n", a);
//    printf("%d\n", b);
//    return 0;
//}

//#include <iostream>
//using namespace std;
//
//void Func(int a = 0)
//{
//    cout << a << endl;
//}
//
//int main()
//{
//    Func();   // 没有传参时，使用参数的默认值
//    Func(10); // 传参时，使用指定的实参
//    return 0;
//}

//#include <iostream>
//using namespace std;
//
//// 全缺省
//void Func1(int a = 10, int b = 20, int c = 30)
//{
//    cout << "a = " << a << endl;
//    cout << "b = " << b << endl;
//    cout << "c = " << c << endl << endl;
//}
//
//// 半缺省
//void Func2(int a, int b = 10, int c = 20)
//{
//    cout << "a = " << a << endl;
//    cout << "b = " << b << endl;
//    cout << "c = " << c << endl << endl;
//}
//
//int main()
//{
//    Func1();
//    Func1(1);
//    Func1(1, 2);
//    Func1(1, 2, 3);
//
//    Func2(100);
//    Func2(100, 200);
//    Func2(100, 200, 300);
//
//    return 0;
//}


//#include"stack.h"
//// 缺省参数不能声明和定义同时给
//void STInit(ST* ps, int n)
//{
//    assert(ps && n > 0);
//    ps->a = (STDataType*)malloc(n * sizeof(STDataType));
//    ps->top = 0;
//    ps->capacity = n;
//}
//
//// test.cpp
//#include"Stack.h"
//int main()
//{
//    ST s1;
//    STInit(&s1);
//
//    // 确定知道要插入1000个数据，初始化时一把开好，避免扩容
//    ST s2;
//    STInit(&s2, 1000);
//
//    return 0;
//}

#include<iostream>
using namespace std;

// 1、参数类型不同
//int Add(int left, int right)
//{
//    cout << "int Add(int left, int right)" << endl;
//    return left + right;
//}
//
//double Add(double left, double right)
//{
//    cout << "double Add(double left, double right)" << endl;
//    return left + right;
//}
//
//// 2、参数个数不同
//void f()
//{
//    cout << "f()" << endl;
//}
//
//void f(int a)
//{
//    cout << "f(int a)" << endl;
//}
//
//// 3、参数类型顺序不同
//void f(int a, char b)
//{
//    cout << "f(int a, char b)" << endl;
//}
//
//void f(char b, int a)
//{
//    cout << "f(char b, int a)" << endl;
//}
//
//// 返回值不同不能作为重载条件，因为调用时也无法区分
////void fxx()
////{
//// 
////}
////int fxx()
////{
////    return 0;
////}
//
//// 下面两个函数构成重载
//// f()但是调用时，会报错，存在歧义，编译器不知道调用谁
//void f1()
//{
//    cout << "f1()" << endl;
//}
//
//void f1(int a = 10)
//{
//    cout << "f1(int a)" << endl;
//}
//
//int main()
//{
//    Add(10, 20);
//    Add(10.1, 20.2);
//    f();
//    f(10);
//    f(10, 'a');
//    f('a', 10);
//    f1();
//    return 0;
//}

//#include<iostream>
//using namespace std;
//
//int main()
//{
//    int a = 0;
//    // 引用：b和c是a的别名
//    int& b = a;
//    int& c = a;
//    // 也可以给别名b取别名，d相当于还是a的别名
//    int& d = b;
//
//    ++d;
//
//    // 这里取地址我们看到是一样的
//    cout << &a << endl;
//    cout << &b << endl;
//    cout << &c << endl;
//    cout << &d << endl;
//
//    return 0;
//}

//#include<iostream>
//using namespace std;
//
//int main()
//{
//    int a = 10;
//
//    //int& ra;
//    //编译报错：“ra”：必须初始化引用
//
//    int& b = a;
//
//    int c = 20;
//
//    b = c;
//    //这里并非让b引用c，因为C++引用不能改变指向，
//    //这里是一个赋值
//    cout << &a << endl;
//    cout << &b << endl;
//    cout << &c << endl;
//
//    return 0;
//}

//#include<iostream>
//using namespace std;
//
//void Swap(int& p1, int& p2)
//{
//	int tmp = p1;
//	p1 = p2;
//	p2 = tmp;
//}
//
//int main()
//{
//	int a = 1;
//	int b = 0;
//	cout << a << " " << b << endl;
//	Swap(a, b);
//	cout << a << " " << b << endl;
//
//	return 0;
//}

//#include<iostream>
//using namespace std;
//
//int main()
//{
//    const int a = 10;
//    //int& ra = a;
//    /*编译报错: error C2440: “初始化”: 无法从“const int”转换为“int &”
//    这里的引用是对a访问权限的放大*/
//
//   // 这样才可以
//    const int& ra = a;
//    // 编译报错: error C3892: “ra”: 不能给常量赋值
//    //ra++;
//    // 这里的引用是对b访问权限的缩小
//    int b = 20;
//    const int& rb = b;
//    // 编译报错: error C3892: “rb”: 不能给常量赋值
//    //rb++;
//    return 0;
//}
//
//#include<iostream>
//using namespace std;
//
//int main()
//{
//    int a = 10;
//
//    const int& ra = 30;
//
//    // 编译报错: “初始化”: 无法从“int”转换为“int &”
//    // int& rb = a * 3;
//    const int& rb = a * 3;
//
//    double d = 12.34;
//    // 编译报错: “初始化”: 无法从“double”转换为“int &”
//    // int& rd = d;
//    const int& rd = d;
//
//    return 0;
//}

#include<iostream>
using namespace std;

void f(int x)
{
    cout << "f(int x)" << endl;
}

void f(int* ptr)
{
    cout << "f(int* ptr)" << endl;
}

int main()
{
    f(0);
    // 本想通过f(NULL)调用指针版本的f(int*)函数，但是由于NULL被定义成0，调用了f(int x)，因此与程序的初衷相悖。
    f(NULL);
    f((int*)NULL);

    // 编译报错：error C2665：“f”：2个重载中没有一个可以转换所有参数类型
    // f((void*)NULL);

    f(nullptr);

    return 0;
}
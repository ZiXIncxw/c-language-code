#define _CRT_SECURE_NO_WARNINGS 1

#include "string.h"

int main()
{
    Confidence::string s1;
    Confidence::string s2("hello world");
    cout << "s1=[" << s1.c_str() << "] s2=[" << s2.c_str() << "]" << endl;

    // ---- 深拷贝的照妖镜：两个地址必须不同 ----
    Confidence::string s3(s2);
    cout << "s2 addr=" << (void*)s2.c_str()
        << "  s3 addr=" << (void*)s3.c_str() << endl;   // 期望：两个地址不一样

    // ---- 赋值 ----
    Confidence::string s4;
    s4 = s2;
    cout << "s4=[" << s4.c_str() << "]" << endl;

    // ---- 自赋值：绝对不能崩 ----
    s4 = s4;
    cout << "after self-assign s4=[" << s4.c_str() << "]" << endl;

    // ---- 链式赋值：验证返回的是引用 ----
    Confidence::string s5, s6;
    s5 = s6 = s2;
    cout << "s5=[" << s5.c_str() << "] s6=[" << s6.c_str() << "]" << endl;

    // ---- operator[] ----
    for (size_t i = 0; i < s2.size(); i++) { s2[i] += 2; }
    cout << s2.c_str() << endl;

    // ---- 迭代器 / 范围 for ----
    for (auto e : s2) { cout << e << " "; }
    cout << endl;

    Confidence::string::iterator it = s3.begin();
    while (it != s3.end()) { cout << *it << " "; ++it; }
    cout << endl;

    return 0;   // 跑到这里、退出码 0、全程不弹崩溃框 = 通过
}

//int main()
//{
//	Confidence::string s1 = "hello world";
//	Confidence::string s2(s1);
//	Confidence::string s3 = s1;
//	cout << s1.c_str() << endl;
//	cout << s2.c_str() << endl;
//	cout << s3.c_str() << endl;
//	Confidence::string::iterator it = s1.begin();
//	/*while (it != s1.end())
//	{
//		cout << *it << endl;
//		it++;
//	}*/
//
//	for (auto ch : s1)
//	{
//		cout << ch;
//	}
//	return 0;
//}

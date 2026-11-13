#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;
#include "vector.h"

//int main()
//{
//    Confidence::vector<int> v;
//
//    // 先造 10 个 1
//    for (int i = 0; i < 10; i++)
//        v.push_back(1);
//
//    cout << "初始 : size=" << v.size() << " cap=" << v.capacity() << " -> ";
//    for (auto e : v) cout << e << " ";
//    cout << endl;
//
//    v.resize(5, 2);          // ← 你问的那个情况
//    cout << "缩到5: size=" << v.size() << " cap=" << v.capacity() << " -> ";
//    for (auto e : v) cout << e << " ";
//    cout << endl;
//
//    v.resize(15, 2);         // ← 再让它长回去，看 2 出现在哪
//    cout << "长到15: size=" << v.size() << " cap=" << v.capacity() << " -> ";
//    for (auto e : v) cout << e << " ";
//    cout << endl;
//
//    return 0;
//}

int main()
{
	//Confidence::test_vector1();
	//Confidence::test_vector2();
	//Confidence::test_vector3();
	//Confidence::test_vector4();
	Confidence::test_vector5();
	return 0;
}

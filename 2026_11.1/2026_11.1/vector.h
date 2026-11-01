#pragma once
#include <assert.h>
#include <iostream>
#include <vector>

namespace Confidence
{
	template <class T>
	class vector
	{
	public:
		typedef T* iterator;
		typedef const T* const_iterator;

		/*vector()
		{
			_start = _finish = _end_of_storage = nullptr;
		}*/

		vector() = default;

		~vector()
		{
			if (_start != nullptr)
			{
				delete[] _start;
				_start = _finish = _end_of_storage = nullptr;
			}
		}

		iterator begin()
		{
			return _start;
		}
		iterator end()
		{
			return _finish;
		}

		const_iterator begin()const
		{
			return _start;
		}
		const_iterator end()const
		{
			return _finish;
		}

		size_t size()const
		{
			return _finish - _start;
		}

		size_t capacity()const
		{
			return _end_of_storage - _start;
		}

		bool empty()const
		{
			return _start == _finish;
		}

		void reserve(size_t n)
		{
			if (n > capacity())
			{
				size_t old_size = size();
				T* tmp = new T[n];
				for (size_t i = 0; i < old_size; i++)
				{
					tmp[i] = _start[i];
				}
				delete[] _start;
				_start = tmp;
				_finish = _start + old_size;
				_end_of_storage = _start + n;
			}
		}

		void push_back(const T& x = T())
		{
			if (_finish == _end_of_storage)
			{
				reserve(capacity() == 0 ? 4 : 2 * capacity());
			}
			*_finish = x;
			_finish++;
		}

		T& operator[](size_t n)
		{
			assert(n < size());
			return _start[n];
		}

		const T& operator[](size_t n)const
		{
			assert(n < size());
			return _start[n];
		}

		void pop_back()
		{
			assert(size() > 0);
			_finish--;
		}

		void clear()
		{
			_finish = _start;
		}

		// n < size()说明要缩    n>=size(),把后面新增加的空间里放初始化的那个值
		void resize(size_t n,const T& x = T())
		{
			if (n < size())
			{
				_finish = _start + n;
			}
			else
			{
				reserve(n);
				while (_finish < _start + n)
				{
					*_finish = x;
					_finish++;
				}
			}
		}
		//10 1,      10
		iterator insert(iterator pos, const T& x = T())
		{
			assert(pos >= _start);
			assert(pos <= _finish);
			//扩容
			if (_finish == _end_of_storage)
			{
				size_t len = pos - _start;
				reserve(capacity() == 0 ? 4 : 2 * capacity());
				pos = _start + len;
			}
			iterator end = _finish - 1;
			while (end >= pos)
			{
				*(end + 1) = *(end);
				end--;
			}
			*pos = x;
			_finish++;
			
			return pos;
		}

		iterator erase(iterator pos)
		{
			assert(pos >= _start);
			assert(pos < _finish);
			iterator end = pos+1;
			while (end < _finish)
			{
				*(end - 1) = *(end);
				end++;
			}
			_finish--;

			return pos;
		}
		//vector<int> v2 = v1;
		vector(const vector<T>& v)
		{
			reserve(v.size());
			for (const auto& e : v)
			{
				push_back(e);
			}
		}

		//v3 = v1
		//vector<T>& operator=(const vector<T>& v)     // ① 参数加 const
		//{
		//	if (this != &v)                          // ② 先判断"是不是自己"（比地址）
		//	{
		//		reserve(v.size());                   // ③ 保证装得下（够用就不动）
		//		clear();                             // ④ 清空自己原有的元素
		//		for (const auto& e : v)              // ⑤ 逐个复制
		//		{
		//			push_back(e);
		//		}
		//	}
		//	return *this;                            // ⑥ 支持链式赋值 a = b = c
		//}

		void swap(vector<T>& v)
		{
			std::swap(_start, v._start);
			std::swap(_finish, v._finish);
			std::swap(_end_of_storage, v._end_of_storage);
		}

		vector<T>& operator=(vector<T> v)      // 注意：参数没有 &，是"传值"
		{
			swap(v);
			return *this;
		}
		//vector<int> v(10, 1) 10个1
		vector(size_t n, const T& val = T())
		{
			reserve(n);
			for (size_t i = 0; i < n; i++)
			{
				push_back(val);
			}
		}

		vector(int n, const T& val = T())
		{
			reserve(n);
			for (int i = 0; i < n; i++)
			{
				push_back(val);
			}
		}

		// 用 [first, last) 这段区间里的元素来构造
		// 注意：这是"类模板里的成员函数模板"—— 类模板 vector<T> 里面还能再套一个 template
		template<class InputIterator>
		vector(InputIterator first, InputIterator last)
		{
			while (first != last)
			{
				push_back(*first);      // 取出当前元素
				++first;                // 往后走一格
			}
		}

	private:
		iterator _start = nullptr;
		iterator _finish = nullptr;
		iterator _end_of_storage = nullptr;
	};

	// 能打印"任何"容器的（vector、list、std::vector 都行）
	template<class Container>
	void print_container(const Container& v)
	{
		for (const auto& e : v) cout << e << " ";
		cout << endl;
	}

	void test_vector1()
	{
		vector<int> v;

		// 先造 10 个 1
		for (int i = 0; i < 10; i++)
			v.push_back(1);

		cout << "初始 : size=" << v.size() << " cap=" << v.capacity() << " -> ";
		for (auto e : v) cout << e << " ";
		cout << endl;

		v.resize(5, 2);          // ← 你问的那个情况
		cout << "缩到5: size=" << v.size() << " cap=" << v.capacity() << " -> ";
		for (auto e : v) cout << e << " ";
		cout << endl;

		v.resize(15, 2);         // ← 再让它长回去，看 2 出现在哪
		cout << "长到15: size=" << v.size() << " cap=" << v.capacity() << " -> ";
		for (auto e : v) cout << e << " ";
		cout << endl;
	}
	
	void test_vector2()
	{
		// ===== 测 insert =====
		vector<int> v;
		for (int i = 1; i <= 5; i++) v.push_back(i);
		cout << "原始  : "; for (auto e : v) cout << e << " "; cout << endl;

		v.insert(v.begin() + 2, 99);          // 中间插
		cout << "中间插: "; for (auto e : v) cout << e << " "; cout << endl;

		v.insert(v.begin(), 0);               // 头部插
		cout << "头部插: "; for (auto e : v) cout << e << " "; cout << endl;

		v.insert(v.end(), 7);                 // 尾部插
		cout << "尾部插: "; for (auto e : v) cout << e << " "; cout << endl;

		// ===== 测 insert 的扩容路径（重点！）=====
		vector<int> w;
		for (int i = 0; i < 4; i++) w.push_back(i);   // capacity=4，正好满
		cout << "\nw 插前: size=" << w.size() << " cap=" << w.capacity() << endl;
		w.insert(w.begin(), 100);                     // 满了 → 先扩容再挪
		cout << "w 插后: size=" << w.size() << " cap=" << w.capacity() << " -> ";
		for (auto e : w) cout << e << " ";
		cout << endl;

		// ===== 测 erase =====
		vector<int> u;
		for (int i = 1; i <= 6; i++) u.push_back(i);
		cout << "\nu 原始: "; for (auto e : u) cout << e << " "; cout << endl;

		u.erase(u.begin() + 2);               // 删中间
		cout << "删中间: "; for (auto e : u) cout << e << " "; cout << endl;

		u.erase(u.begin());                   // 删头
		cout << "删头部: "; for (auto e : u) cout << e << " "; cout << endl;

		u.erase(u.end() - 1);                 // 删尾
		cout << "删尾部: "; for (auto e : u) cout << e << " "; cout << endl;

		// ===== 测 string（专门验证那个"多读一格"的 bug）=====
		vector<string> vs;
		vs.push_back("aaa");
		vs.push_back("bbb");
		vs.push_back("ccc");
		vs.insert(vs.begin() + 1, "xxx");
		cout << "\nstring 插: "; for (auto& e : vs) cout << e << " "; cout << endl;
		vs.erase(vs.begin() + 2);
		cout << "string 删: "; for (auto& e : vs) cout << e << " "; cout << endl;
	}
	void test_vector3()
	{
		vector<int> v1;
		v1.push_back(1);
		v1.push_back(2);
		v1.push_back(3);
		v1.push_back(4);
		vector<int> v2 = v1;
		cout << "v1 = ";
		for (auto& e : v1)
		{
			cout << e ;
		}
		cout << endl<<"v2 = ";
		for (auto& e : v2)
		{
			cout << e;
		}
		v1.push_back(5);
		cout <<endl<< "v1 = ";
		for (auto& e : v1)
		{
			cout << e;
		}
		v2 = v1;
		cout <<endl<< "v2 = ";
		for (auto& e : v2)
		{
			cout << e;
		}
	}
	void test_vector4()
	{
		vector<int> v1;
		v1.push_back(1);
		v1.push_back(2);
		v1.push_back(3);
		v1.push_back(4);

		cout << "v1 = "; for (auto e : v1) cout << e << " "; cout << endl;

		// ① 拷贝构造
		vector<int> v2 = v1;
		cout << "v2 = "; for (auto e : v2) cout << e << " "; cout << endl;

		// ② 改 v2，看 v1 会不会被带着改（深拷贝的证明）
		v2[0] = 999;
		cout << "\n改 v2[0]=999 之后：" << endl;
		cout << "v1 = "; for (auto e : v1) cout << e << " "; cout << endl;
		cout << "v2 = "; for (auto e : v2) cout << e << " "; cout << endl;

		// ③ 赋值
		vector<int> v3;
		v3.push_back(10);
		v3.push_back(20);
		v3.push_back(30);
		v3.push_back(40);
		v3.push_back(50);      // v3 比 v1 长，用来验证"原来的数据有没有清干净"
		cout << "\n赋值前 v3 = "; for (auto e : v3) cout << e << " "; cout << endl;

		v1 = v3;
		cout << "v1 = v3 之后：" << endl;
		cout << "v1 = "; for (auto e : v1) cout << e << " "; cout << endl;
		cout << "v3 = "; for (auto e : v3) cout << e << " "; cout << endl;

		// ④ 自赋值（最容易崩的地方）
		v1 = v1;
		cout << "\nv1 = v1 之后：" << endl;
		cout << "v1 = "; for (auto e : v1) cout << e << " "; cout << endl;

		// ⑤ 用 string 再跑一遍（能暴露浅拷贝的内存问题）
		vector<string> s1;
		s1.push_back("hello");
		s1.push_back("world");
		vector<string> s2 = s1;
		s2[0] = "HELLO";
		cout << "\ns1 = "; for (auto& e : s1) cout << e << " "; cout << endl;
		cout << "s2 = "; for (auto& e : s2) cout << e << " "; cout << endl;
	}
	void test_vector5()
	{
		cout << "=== 9-① n 个 val 构造 ===" << endl;
		vector<int> v1(5, 7);
		cout << "v(5,7)   : "; print_container(v1);

		vector<int> v2(5);              // 默认值 T() = 0
		cout << "v(5)     : "; print_container(v2);

		vector<string> v3(3, "hi");
		cout << "v(3,\"hi\") : "; print_container(v3);

		cout << "\n=== 9-② 迭代器区间构造 ===" << endl;
		vector<int> src;
		for (int i = 1; i <= 5; i++) src.push_back(i);
		cout << "src      : "; print_container(src);

		vector<int> v4(src.begin() + 1, src.begin() + 4);   // [1,4) → 2 3 4
		cout << "src[1,4) : "; print_container(v4);

		int arr[] = { 100, 200, 300 };
		vector<int> v5(arr, arr + 3);                       // 从数组构造
		cout << "从数组   : "; print_container(v5);

		string s = "abc";
		vector<char> v6(s.begin(), s.end());                // 从 string 构造
		cout << "从string : "; print_container(v6);

		cout << "\n=== 9-③ 那个坑 ===" << endl;
		vector<int> v7(10, 1);          // ← 没加 int 版本时，这一行编译不过
		cout << "v(10,1)  : "; print_container(v7);
	}
}
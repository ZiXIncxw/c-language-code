#pragma once
#include <iostream>
#include <vector>
#include <assert.h>

namespace Confidence
{
	template <class T>
	class vector
	{
	public:

		typedef T* iterator;
		typedef const T* const_iterator;

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

		void clear()const
		{
			_finish = _start;
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

		void push_back(const T& x)
		{
			if (_finish == _end_of_storage)
			{
				reserve(capacity() == 0 ? 4 : 2 * capacity());
			}
			*_finish = x;
			_finish++:
		}

		//n<size(),缩容
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
					push_back(x);
					_finish++:
				}
			}
		}

		vector() = default;

		~vector()
		{
			if (_start != nullptr)
			{
				delete[] _start;
				_start = _finish = _end_of_storage = nullptr;
			}
		}
		//拷贝构造
		vector(const vector<T>& val)
		{
			reserve(val.size());
			for (auto& e : val)
			{
				push_back(e);
			}
		}

		//构造
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

		// 类模板的成员函数，还可以继续是函数模版
		template <class InputIterator>
		vector(InputIterator first, InputIterator last)
		{
			while (first != last)
			{
				push_back(*first);
				++first;
			}
		}

		void swap(vector<T>& v)
		{
			std::swap(_start, v._start);
			std::swap(_finish, v._finish);
			std::swap(_end_of_storage, v._end_of_storage);
		}

		// v1 = v3
		//vector& operator=(vector v)
		vector<T>& operator=(vector<T> v)
		{
			swap(v);

			return *this;
		}

	private:
		iterator _start = nullptr;
		iterator _finish = nullptr;
		iterator _end_of_storage = nullptr;
	};
	template <class Container>
	void print_container(const Container& x)
	{
		for (const auto& e : x)
		{
			cout << e << " ";
		}
	}
}
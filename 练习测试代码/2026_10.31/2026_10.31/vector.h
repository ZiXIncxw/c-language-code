#pragma once

#include <iostream>
#include <assert.h>
#include <vector>
#include <stdbool.h>

namespace Confidence
{
	template<class T>
	class vector
	{
	public:

		typedef T* iterator;
		typedef const T* const_iterator;

		iterator begin()
		{
			return _Start;
		}

		const_iterator begin()const
		{
			return _Start;
		}

		iterator end()
		{
			return _Finish;
		}

		const_iterator end()const
		{
			return _Finish;
		}

		size_t size()const
		{
			return _Finish - _Start;
		}

		size_t capacity()const
		{
			return _End_of_storage - _Start;
		}

		bool empty()const
		{
			return _Finish == _End_of_storage;
		}

		void reserve(size_t n)
		{
			if (n > capacity())
			{
				size_t old_size = size();
				T* tmp = new T[n];
				for (size_t i = 0; i < old_size; i++)
				{
					tmp[i] = _Start[i];
				}
				delete[] _Start;
				_Start = tmp;
				_Finish = _Start + old_size;
				_End_of_storage = _Start + n;
			}
			std::cout << "reserve success!" << std::endl;
		}

		void push_back(const T& x)
		{
			if (_Finish == _End_of_storage)
			{
				reserve(capacity() == 0 ? 4 : 2 * capacity());
			}
			*_Finish = x;
			_Finish++;
		}

		/*void print_vector()
		{
		}*/

		vector()
		{
			_Start = _Finish = _End_of_storage = nullptr;
		}
		//vector<int> v2 = v1;
		vector(const vector<T>& v)
		{
			reserve(v.size());
			for (const auto& e:v)
			{
				push_back(e);
			}
		}

	void print_vector(const vector<int>& v)
	{
		vector<int>::const_iterator it = v.begin();
		while (it != v.end())
		{
			cout << *it << " ";
			++it;
		}
		cout << endl;

		for (auto e : v)
		{
			cout << e << " ";
		}
		cout << endl;
	}

	private:
		iterator _Start;
		iterator _Finish;
		iterator _End_of_storage;
	};

	void Test_vector1()
	{
		vector<int> v1;
		v1.push_back(1);
		v1.push_back(2);
		v1.push_back(3);
		v1.push_back(4);

	}

}













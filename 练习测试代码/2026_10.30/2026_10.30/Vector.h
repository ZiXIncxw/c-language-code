#pragma once

#include <assert.h>
#include <vector>

namespace Confidence
{
	template<class T>
	class vector
	{
	public:
		typedef T* iterator;
		typedef const T* const_iterator;

		vector()
		{
			_start = _finish = _end_of_storage = nullptr;
		}

		iterator begin()
		{
			return _start;
		}

		const_iterator begin()const
		{
			return _start;
		}

		iterator end()
		{
			return _finish;
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
			return _finish - _start == 0;
		}

		T& operator[](size_t pos)
		{
			assert(pos < size());
			return _start[pos];
		}

		const T& operator[](size_t pos)const
		{
			assert(pos < size());
			return _start[pos];
		}

		void clear()
		{
			_finish = _start;
		}

		void pop_back()
		{
			assert(!empty());
			_finish--;
		}

		void reserve(size_t n)
		{
			if (n > capacity())
			{
				size_t old_size = size();
				T* tmp = new T[n];
				for (int i = 0; i < old_size; i++)
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
				reserve(capacity() == 0 ? 4: 2 * capacity());
			}
			*_finish = x;
			_finish++;
		}

		~vector()
		{
			assert(_start);
			delete[] _start;
			_start = _finish = _end_of_storage = nullptr;
		}
		//vector<int> v2 = v1;
		vector(const vector<T>& v)
		{
			reserve(v.size());
			for (auto& e : v)
			{
				push_back(e);
			}
		}

	private:
		iterator _start;
		iterator _finish;
		iterator _end_of_storage;

	};
}




#pragma once
#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <assert.h>
#include <cstring>

using namespace std;

namespace Confidence
{
	class string
	{
	public:
		string(const char* str = "")
		{
			_size = strlen(str);
			_capacity = _size;
			_str = new char[_capacity + 1];
			strcpy(_str, str);
		}
		
		//string s2(s1);
		string(const string& s)
		{
			_str = new char[s._capacity + 1];
			_size = s._size;
			_capacity = s._capacity;
			strcpy(_str, s._str);
		}

		//string s2 = s1;
		string& operator=(const string& s)
		{
			if (this != &s)
			{
				delete[] _str;
				_str = new char[s._capacity + 1];
				_size = s._size;
				_capacity = s._capacity;
				strcpy(_str, s._str);
			}
			return *this;
		}

		~string()
		{
			delete[] _str;
			_str = nullptr;
			_size = 0;
			_capacity = 0;
		}

		const char* c_str() const
		{
			return _str;
		}

		size_t size() const
		{
			return _size;
		}

		size_t capacity() const
		{
			return _capacity;
		}

		void clear()//Çå¿ÕÊý¾Ý
		{
			_str[0] = '\0';
			_size = 0;
		}

		char& operator[] (size_t pos)
		{
			assert(pos < _size);
			return _str[pos];
		}

		const char& operator[](size_t pos) const
		{
			assert(pos < _size);
			return _str[pos];
		}
		
		typedef char* iterator;
		typedef const char* const_iterator;

		iterator begin()
		{
			return _str;
		}
		iterator end()
		{
			return _str+_size;
		}
		const_iterator begin() const
		{
			return _str;
		}
		const_iterator end() const
		{
			return _str + _size;
		}

	private:
		char* _str;
		size_t _size;
		size_t _capacity;
	};



}











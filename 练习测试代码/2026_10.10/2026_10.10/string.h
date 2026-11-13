#pragma once

#include <iostream>
#include <assert.h>
#include <cstring>

using namespace std;

namespace Confidence
{
	class string
	{
	public:

		/*string()
			:_str(nullptr)
			, _size(0)
			, _capacity(0)
		{
		}
		string()
			:_str(new char[1] {'\0'})
			, _size(0)
			, _capacity(0)
		{

		}*/

		//string s("hello world");
		string(const char* str = "")
		{
			_size = strlen(str);
			_capacity = _size;
			_str = new char[_capacity + 1];
			strcpy(_str, str);
		}

		//string s2(s1);
		string(const string& str)
		{
			_size = str._size;
			_capacity = str._capacity;
			_str = new char[_capacity + 1];
			strcpy(_str, str._str);
		}
		//s2 = s1
		string& operator=(const string& str)
		{
			if (this != &str)
			{
				delete[] _str;
				_size = str._size;
				_capacity = str._capacity;
				_str = new char[_capacity + 1];
				strcpy(_str, str._str);
			}
			return *this;
		}

		~string()
		{
			delete[] _str;
			_str = nullptr;
			_size = _capacity = 0;
		}

		size_t size()const
		{
			return _size;
		}
		size_t capacity()const
		{
			return _capacity;
		}
		void clear()
		{
			_str[0] = '\0';
			_size = 0;
		}
		const char* c_str() const
		{
			return _str;
		}
		char& operator[](size_t pos)
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
			return _str + _size;
		}
		const_iterator begin()const
		{
			return _str;
		}
		const_iterator end()const
		{
			return _str + _size;
		}

		void reserve(size_t n);
		void push_back(char ch);
		void append(const char* s);
		string& operator+=(char s);
		string& operator+=(const char* s);
		void insert(size_t pos, char ch);
		void insert(size_t pos, const char* s);
		void erase(size_t pos, size_t len = npos);

		size_t find(char ch, size_t pos = 0);
		size_t find(const char* str, size_t pos = 0);

		string substr(size_t pos = 0, size_t len = npos);

	private:
		char* _str;
		size_t _size;
		size_t _capacity;
		static const size_t npos;
	};

	bool operator<(const string& s1, const string& s2);
	bool operator<=(const string& s1, const string& s2);
	bool operator>(const string& s1, const string& s2);
	bool operator>=(const string& s1, const string& s2);
	bool operator==(const string& s1, const string& s2);
	bool operator!=(const string& s1, const string& s2);

	ostream& operator<<(ostream& out, const string& s);
	istream& operator>>(istream& in, string& s);

}

#define _CRT_SECURE_NO_WARNINGS 1

#include "string.h"

namespace Confidence
{
	//reserve(100)
	void string::reserve(size_t n)
	{
		if (n < _capacity)
		{
			return;
		}
		char* tmp = new char[n + 1];
		strcpy(tmp, _str);
		delete[] _str;
		_str = tmp;
		_capacity = n;
	}
	void string::push_back(char ch)
	{
		if (_size == _capacity)
		{
			reserve(_capacity == 0 ? 4 : 2 * _capacity);
		}
		_str[_size++] = ch;
		_str[_size] = '\0';
	}
	void string::append(const char* s)
	{
		size_t len = strlen(s);

		if (_size + len > _capacity)
		{
			reserve(_size + len > 2 * _capacity ? _size + len : 2*_capacity);
		}
		strcpy(_str + _size, s);
		_size += len;
	}
	string& string::operator+=(char ch)
	{
		push_back(ch);
		return *this;
	}
	string& string::operator+=(const char* str)
	{
		append(str);
		return *this;
	}

	void string::insert(size_t pos, char ch)
	{
		assert(pos <= _size);
		if (_size == _capacity)
		{
			reserve(_capacity == 0 ? 4 : 2 * _capacity);
		}
		size_t end = _size + 1;
		while (end > pos)
		{
			_str[end] = _str[end - 1];
			end--;
		}
		_str[pos] = ch;
		_size++;
	}
	//

	void string::insert(size_t pos, const char* str)
	{
		size_t len = strlen(str);

		if (_size + len > _capacity)
		{
			reserve(_size + len > 2 * _capacity ? _size + len : 2 * _capacity);
		}
		size_t end = _size + len;
		while (end > pos + len - 1)
		{
			_str[end] = _str[end - len];
			end--;
		}
		for (int i = 0; i < len; i++)
		{
			_str[pos + i] = str[i];
		}
		_size += len;
	}

	const size_t string::npos = -1;

	void erase(size_t pos, size_t len = string::npos)
	{

	}



}






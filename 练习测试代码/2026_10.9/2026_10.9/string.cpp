#define _CRT_SECURE_NO_WARNINGS 1

#include "string.h"

namespace Confidence
{
	void string::reserve(size_t n)
	{
		if (n > _capacity)
		{
			char* tmp = new char[n + 1];
			strcpy(tmp, _str);
			delete[] _str;
			_str = tmp;
			_capacity = n;
		}
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
			reserve(_size + len > 2 * _capacity ? _size + len : 2 * _capacity);
		}
		strcpy(_str + _size, s);
		_size += len;
	}

	string& string::operator+=(const char* s)
	{
		append(s);
		return *this;
	}

	//void string::insert(size_t pos, char ch)
	//{
	//	if (_size == _capacity)
	//	{
	//		reserve(_capacity == 0 ? 4 : 2 * _capacity);
	//	}
	//	//end为'\0'的下一个元素，因为'\0'也要往后移
	//	size_t end = _size + 1;
	//	while (end > pos)
	//	{
	//		_str[end] = _str[end-1];
	//		end--;
	//	}
	//	_str[pos] = ch;
	//	_size++;
	//}

	

	//void string::insert(size_t pos, const char* s)
	//{
	//	size_t len = strlen(s);
	//	if (_size + len > _capacity)
	//	{
	//		reserve(_size + len > 2 * _capacity ? _size + len : 2 * _capacity);
	//	}
	//	size_t end = _size + len;
	//	while (end > pos + len - 1)
	//	{
	//		_str[end] = _str[end-len];
	//		end--;
	//	}
	//	//傻逼
	//	/*_str[pos] = *s;
	//	_size += len;*/

	//	for (int i = 0; i < len; i++)
	//	{
	//		_str[pos + i] = s[i];
	//	}
	//	_size += len;
	//}

	//计数版
	/*void string::insert(size_t pos, const char* s)
	{
		size_t len = strlen(s);
		if (_size + len > _capacity)
		{
			reserve(_size + len > 2 * _capacity ? _size + len : 2 * _capacity);
		}
		size_t rsize = _size;
		size_t count = _size - pos + 1;
		for (int i = 0; i < count; i++)
		{
			_str[rsize + len] = _str[rsize];
			rsize--;
		}
		_size += len;
	}*/

	void string::insert(size_t pos, char ch)
	{
		if (_size == _capacity)
		{
			reserve(_capacity == 0 ? 4 : 2 * _capacity);
		}
		//end为'\0'的下一个元素，因为'\0'也要往后移
		size_t count = _size - pos + 1;
		for (size_t i = 0; i < count; i++)
		{
			_str[_size + 1 - i] = _str[_size - i];
		}
		_str[pos] = ch;
		_size++;
	}

	void string::insert(size_t pos, const char* s)
	{
		size_t len = strlen(s);
		if (_size + len > _capacity)
		{
			reserve(_size + len > 2 * _capacity ? _size + len : 2 * _capacity);
		}
		size_t count = _size - pos + 1;
		for (size_t i = 0; i < count; i++)
		{
			_str[_size + len - i] = _str[_size - i];
		}
		for (size_t i = 0; i < len; i++)
		{
			_str[pos + i] = s[i];
		}
		_size += len;
	}

}








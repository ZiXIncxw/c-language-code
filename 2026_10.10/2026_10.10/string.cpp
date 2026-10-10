#define _CRT_SECURE_NO_WARNINGS 1

#include "string.h"

namespace Confidence
{
	const size_t string::npos = -1;
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

	string& string::operator+=(char s)
	{
		push_back(s);
		return *this;
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
	void string::erase(size_t pos, size_t len)
	{
		assert(pos < _size);
		
		if (len >= _size - pos)
		{
			_str[pos] = '\0';
			_size = pos;
			return;
		}//下面为按需删除
		size_t count = _size - pos - len + 1;
		for (int i = 0; i < count; i++)
		{
			_str[pos + i] = _str[pos + len + i];
		}
		_size -= len;
		
	}
	size_t string::find(char ch, size_t pos)
	{
		assert(pos < _size);
		for (size_t i = pos; i < _size; i++)
		{
			if (_str[i] == ch)
			{
				return i;
			}
		}
		return npos;
	}
	size_t string::find(const char* str, size_t pos)
	{
		assert(pos < _size);
		const char* ptr = strstr(_str + pos, _str);
		if (ptr == nullptr)
		{
			return npos;
		}
		return ptr - _str;
	}
	string string::substr(size_t pos, size_t len)
	{
		assert(pos < _size);

		// len大于剩余字符长度，更新一下len
		if (len > _size - pos)
		{
			len = _size - pos;
		}

		string sub;
		sub.reserve(len);
		for (size_t i = 0; i < len; i++)
		{
			sub += _str[pos + i];
		}
		return sub;
	}

	bool operator<(const string& s1, const string& s2)
	{
		return strcmp(s1.c_str(), s2.c_str()) < 0;
	}
	bool operator==(const string& s1, const string& s2)
	{
		return strcmp(s1.c_str(), s2.c_str()) == 0;
	}
	bool operator<=(const string& s1, const string& s2)
	{
		return (s1 < s2 || s1 == s2);
	}
	bool operator>(const string& s1, const string& s2)
	{
		return !(s1 <= s2);
	}
	bool operator>=(const string& s1, const string& s2)
	{
		return !(s1 < s2);
	}
	bool operator!=(const string& s1, const string& s2)
	{
		return !(s1 == s2);
	}

	ostream& operator<<(ostream& out, const string& s)
	{
		for (auto ch : s)
		{
			out << ch;
		}
		return out;
	}
	istream& operator>>(istream& in, string& s)
	{
		s.clear();

		
		return in;
	}
}
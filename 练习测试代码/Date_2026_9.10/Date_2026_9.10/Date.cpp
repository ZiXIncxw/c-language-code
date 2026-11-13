#define _CRT_SECURE_NO_WARNINGS 1

#include "Date.h"

Date::Date(int year, int month, int day)
{
	_year = year;
	_month = month;
	_day = day;
}

void Date::Print()
{
	cout << _year << " " << _month << " " << _day << endl;
}

Date& Date::operator+=(int day)
{
	if (day < 0)
	{
		return *this -= (-day);
	}
	_day += day;
	while (_day > GetMonthDay(_year, _month))
	{
		_day -= GetMonthDay(_year, _month);
		++_month;
		if (_month == 13)
		{
			_month = 1;
			_year++;
		}
	}
	return *this;
}

Date Date::operator+(int day)
{
	Date tmp = *this;
	tmp += day;
	return tmp;
}

Date& Date::operator-=(int day)
{
	if (day < 0)
	{
		return *this += (-day);
	}
	_day -= day;
	while (_day < 0)
	{
		--_month;
		if (_month == 0)
		{
			--_year;
			_month = 12;
		}
		_day += GetMonthDay(_year, _month);
	}
	return *this;
}
Date Date::operator-(int day)
{
	Date tmp = *this;
	tmp -= day;
	return tmp;
}

bool Date::operator==(const Date& d)
{
	return _year == d._year && _month == d._month && _day == d._day;
}

bool Date::operator!=(const Date& d)
{
	return !(*this == d);
}

bool Date::operator<(const Date& d)
{
	if (_year < d._year)
	{
		return true;
	}
	else if (_year == d._year)
	{
		if (_month < d._month)
		{
			return true;
		}
		else if (_month == d._month)
		{
			return _day < d._day;
		}
	}
	return false;
}

bool Date::operator>=(const Date& d)
{

	return !(*this < d);

}

bool Date::operator>(const Date& d)
{

	return !((*this < d) || (*this == d));
}

bool Date::operator<=(const Date& d)
{
	return !(*this > d);
}

Date Date::operator++(int)
{
	Date tmp = *this;
	*this += 1;
	return tmp;
}

Date& Date::operator++()
{
	*this += 1;
	return *this;
}

int Date::operator-(const Date& d)
{
	Date max = *this;
	Date min = d;
	int flag = 1;
	if (*this < d)
	{
		min = *this;
		max = d;
		flag = -1;
	}

	int cout1 = 0;
	while (max != min)
	{
		min++;
		cout1++;
	}
	return flag * cout1;
}

ostream& operator<<(ostream& out, Date& d)
{
	out << d._year << " " << d._month << " " << d._day << endl;
	return out;
}

istream& operator>>(istream& in, Date& d)
{
	cout << "请输入年月日： "<<endl;
	in >> d._year >> d._month >> d._day;
	return in;
}





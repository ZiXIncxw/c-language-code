#pragma once
#include <iostream>
using namespace std;

class Date
{
public:
	Date(int _year = 2026, int _month = 4, int _day = 10);
	void Print();

	int GetMonthDay(int year, int month)
	{
		static int monthDayArray[13] = { -1, 31, 28, 31, 30, 31, 30,
31, 31, 30, 31, 30, 31 };

		if (month == 2 && ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)))
		{
			return 29;
		}

		return monthDayArray[month];
	}

	bool operator<(const Date& d);
	bool operator<=(const Date& d);
	bool operator>(const Date& d);
	bool operator>=(const Date& d);
	bool operator==(const Date& d);
	bool operator!=(const Date& d);

	Date operator+(int day);
	Date& operator+=(int day);

	Date operator-(int day);
	Date& operator-=(int day);
	Date operator++(int);
	Date& operator++();
	int operator-(const Date& d);

private:
	int _year;
	int _month;
	int _day;

};
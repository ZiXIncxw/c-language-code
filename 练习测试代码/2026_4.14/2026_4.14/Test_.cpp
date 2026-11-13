#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

class Time
{
public:
	Time(int hour)
		:_hour(hour)
	{
		cout << "Time()" << endl;
	}
private:
	int _hour;
};


//class Date
//{
//public:
//	Date(int& xx, int year, int month, int day,int num,Time time)
//		:_year(year)
//		, _month(month)
//		, _day(day)
//		, _x(xx)
//		, _nums(1)
//		, _time(1)
//	{ }
//
//	void Print() const
//	{
//		cout << _year << "-" << _month << "-" << _day << endl;
//	}
//
//private:
//	int _year = 1;
//	int _month = 1;
//	int _day = 1;
//
//	int& _x;
//	const int _nums;
//	Time _time;
//};

class Date
{
public:
	Date(int& xx, int year, int month, int day)
		/*_year(year)
		, _month(month)
		, _day(day)*/
		: _x(xx)
		, _nums(1)
		, _time(1)
	{ }

	void Print() const
	{
		cout << _year << "-" << _month << "-" << _day << endl;
	}

private:
	int _year = 1;
	int _month = 1;
	int _day;

	int& _x;
	const int _nums;
	Time _time;
};


int main()
{
	int x = 1;

	Date d1(x,2026, 4, 14);
	d1.Print();

	return 0;
}

class Sum
{
public:
	Sum()
	{
		_ret += _i;
		_i++;
	}
	static int GetRet()
	{
		return _ret;
	}
private:
	static int _i;
	static int _ret;
};
int Sum::_i = 1;
int Sum::_ret = 0;

class Solution {
public:
	int Sum_Solution(int n) {
		Sum arr[n];
		return Sum::GetRet();
	}
};
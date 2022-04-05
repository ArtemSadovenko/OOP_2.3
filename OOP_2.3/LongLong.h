#pragma once
#pragma pack(1)
#include <iostream>
#include <sstream>
#include <string>

using namespace std;

class LongLong
{
private:
	long int high;
	long int low;
public:
	LongLong init(long int high_0, long int low_0);

	void read();
	void display() const;

	string ToString() const;

	void set_high(long a);
	void set_low(long  a);

	long get_high();
	long get_low();

	void convert(LongLong one, int* a);
	void unconvert(LongLong one, int* a);

	friend bool is_equal(LongLong first, LongLong second);
	friend bool is_n_equal(LongLong first, LongLong second);
	friend bool is_bigger(LongLong first, LongLong second);
	
	LongLong();
	LongLong(long a, long b);
	LongLong(LongLong& a);

	friend ostream& operator << (ostream& out, LongLong& a);
	friend istream& operator >> (istream& in, LongLong& a);

	operator string() const;

	LongLong& operator ++();
	LongLong& operator --();
	LongLong operator ++(int);
	LongLong operator --(int);
};


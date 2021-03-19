#pragma once
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

class Line {
	double first, second;
public:
	Line();
	Line(double, double);
	Line(const Line&);
	void SetFirst(double);
	void SetSecond(double);
	double GetFirst() const;
	double GetSecond() const;
	Line& operator = (const Line&);
	operator string() const;
	friend istream& operator >> (istream&, Line&);
	friend ostream& operator << (ostream&, const Line&);
	double operator()(double);
	
	Line& operator ++();     
	Line& operator --();     

	Line operator ++(int);   
	Line operator --(int);   
};

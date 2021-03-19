#include "Line.h"

Line::Line() {
	first = 0;
	second = 0;
}

Line::Line(double first = 0, double second = 0) {
	this->first = first;
	this->second = second;
}

Line::Line(const Line& c) {
	first = c.first;
	second = c.second;
}

void Line::SetFirst(double first) {
	this->first = first;
}

void Line::SetSecond(double second) {
	this->second = second;
}

double Line::GetFirst() const { return first; }
double Line::GetSecond() const { return second; }

Line& Line::operator = (const Line& c) {
	first = c.first;
	second = c.second;
	return *this;
}

istream& operator >> (istream& in, Line& c) {
	cout << "Enter a line: " << endl;
	cout << "A = "; in >> c.first;
	cout << "B = "; in >> c.second;
	return in;
}

ostream& operator << (ostream& out, const Line& c) {
	out << string(c);
	return out;
}

Line::operator string() const {
	stringstream ss;
	ss << "Line: y = " << first << " * x + " << second << endl;
	return ss.str();
}

double Line::operator() (double x) {
	return  first * x + second;
}

Line& Line::operator ++() {     
	++first;
	++second;
	return *this;
}

Line& Line::operator --() {     
	--first;
	--second;
	return *this;
}

Line Line::operator ++(int) {  
	Line a(*this);
	first++;
	second++;
	return a;
}

Line Line::operator --(int) {   
	Line a(*this);
	first--;
	second--;
	return a;
}
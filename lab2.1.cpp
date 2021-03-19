#include <iostream>
#include "Line.h"

using namespace std;

int main() {
    Line a;
    cin >> a;
    cout << a;
    cout << "Increment (prefix form) " << endl;
    ++a; cout << a;
    cout << "Decrement (prefix form) " << endl;
    --a; cout << a;
    cout << "Increment (postfix form) " << endl;
    a++; cout << a;
    cout << "Decrement (postfix form) " << endl;
    a--; cout << a;
    double x;
    cout << "Enter x: " << endl; cin >> x;
    cout << "Line(x) = " << a(x) << endl;

    Line b(a);
    cout << "Constructor1: " << b << endl;
    Line c(-2,3);
    cout << "Constructor2: " << c << endl;
    return 0;
}
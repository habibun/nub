#include<iostream>
using namespace std;

template <class T1, class T2>

void myfunc (T1 x, T2 y) {
    cout << x << “\t” << y << endl;
}

void main() {
    myfunc (10, "C++");
    myfunc (98.6, 19);
}
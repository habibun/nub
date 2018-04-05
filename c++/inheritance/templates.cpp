// TODO----

#include<iostream>
using namespace std;

template <class T>
void swap(T p, T q) {
    T temp;
    temp = p;
    p = q;
    q = temp;
    cout<<p<<"\t"<<q;
}

int main() {
    int i=10,
    j=20;
    float x=10.1,
    y=23.3;
    char a='x', b='z';
    swap (i, j); /* swaps integers */
    swap (x, y); /* swaps floats */
    swap (a, b); /* swaps chars */

    return 0;
}

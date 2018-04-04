#include<iostream>
using namespace std;

class base {
    public:
        base() {
            cout << "Constructing base\n";
        }

        ~base() {
            cout << "Destructing base\n";
        }
};

class base1 {
    public:
        base1() {
            cout << "Constructing base1\n";
        }

        ~base1() {
            cout << "Destructing base1\n";
        }
};

class derived: public base, public base1 {
    public:
        derived() {
            cout << "Constructing derived\n";
        }
        ~derived() {
            cout << "Destructing derived\n";
        }
};

int main() {
    derived ob;
}

#include<iostream>
using namespace std;

class Integer {
    public:
    int val;
        Integer(int val = 0) {
            this->val = val;
        }
        void setVal(int val) {
            this->val = val;
        }
};

//this: A pointer to the current instance and refers to a field when a method argument has the same name.
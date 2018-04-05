#include<iostream>
using namespace std;

class B {
    public:
        void show() {
            cout<<"in base show"<<endl;
        }
};


class D:public B {
    public:
        void show() {
            cout<<"in derived show"<<endl;
        }
};

int main() {
    B b, *bp;
    D d;
    bp = &b;
    bp->show();

    bp = &d;
    bp->show();

    return 0;
}

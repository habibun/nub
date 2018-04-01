#include<iostream>
using namespace std;

class Test {
private:
    int hen;
    int duck;
public:
    Test(int a, int b)
    {
        hen = a;
        duck = b;
    }

    Test operator + (Test t)
    {
        t.hen = t.hen + hen;
        t.duck = t.duck + duck;

        return t;
    }

    void show()
    {
        cout<<"Total number of hens : "<<hen<<endl;
        cout<<"Total number of ducks : "<<duck;
    }
};


int main()
{
    Test t(5,6), u(7, 8);
    t = t+u;
    t.show();
}

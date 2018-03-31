#include<iostream>
using namespace std;

class Test {
public:
    Test(int num)
    {
        cout<<"Fired constructor "<<num;
    }
};


int main()
{
    Test t(7);
}

//TODO-----------
#include<iostream>
using namespace std;

class Car {
    public:
        virtual void name()=0;
};

class BMW:public Car
{
    public:
        void name()
        {
        cout<<"BMW"<<endl;
        }
};

class Porche:public Car
{
    public:
        void name()
        {
            cout<<"Porche"<<endl;
        }
};

int main()
{
    Car c,*cr;
    BMW b;
    Porche p;
    cr=&c;
    cr=&b;
    cr->name();
    cr=&p;
    cr->name();

    return 0;
}

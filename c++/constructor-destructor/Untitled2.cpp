#include<iostream>
using namespace std;

class Add {
    private:
    int x, y, z;

public:
    Add() //Default Constructor
    {
        cout<<"First constructor"<<endl;
    }
    Add(int, int);  //Parameterized Constructor
    Add(Add &); //Copy Constructor
    ~Add();

    void calculate();
    void display();
};

void Add::display()
{
    cout<<z;
}

void Add::calculate()
{
    z = x + y;
}

Add::Add(int a, int b)
{
    x = a;
    y = b;
    cout<<"parameterized constructor"<<endl;
}

Add::Add(Add &p)
{
    x = p.x;
    y = p.y;

    cout<<"copy constructor"<<endl;
}

Add::~Add()
{
    cout<<endl<<"Object is destroyed"<<endl;
}


int main()
{
    Add a(5, 6);
    Add b(a);
    b.calculate();
    b.display();
    cout<<endl<<"End copy constructor"<<endl;
    a.calculate();
    a.display();

    return 0;
}

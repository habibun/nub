#include<iostream>
using namespace std;

class Add {
    private:
    int x, y, z;

public:
    Add(int, int);
    ~Add();

    void calculate();
    void display();
};

void Add::calculate()
{
    z = x + y;
}

void Add::display()
{
    cout<<z;
}

Add::Add(int a, int b)
{
    x = a;
    y = b;
}

Add::~Add()
{
    cout<<endl<<"Object is destroyed."<<endl;
}


int main()
{
    Add a(5, 6);
    a.calculate();
    a.display();

    return 0;
}

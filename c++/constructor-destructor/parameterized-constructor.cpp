#include<iostream>
using namespace std;

class Add
{
    private:
        int x,y,z;

    public:
        Add(int, int);  //Parameterized Constructor
        void calculate();
        void display();
};

Add::Add(int a, int b)  //Parameterized Constructor
{
     x = a;
     y = a;
}

void Add::calculate()
{
    z = x + y;
}

void Add::display()
{
    cout<<z;
}

int main()
{
    //Add a(8, 8);    //Implicitly
    Add a= Add(8, 8);    //Explicitly
//    a.getData();
    a.calculate();
    a.display();

    return 0;
}

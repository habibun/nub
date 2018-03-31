#include<iostream>
using namespace std;

class Add
{
    private:
        int x,y,z;

    public:
        Add();  //Default Constructor

        void getData()
        {
            cout<<"Enter two numbers: ";
            cin>>x>>y;
        }

        void calculate();
        void display();
};

Add::Add()
    {
        x = 5;
        y = 6;
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
    Add a;
//    a.getData();
    a.calculate();
    a.display();

    return 0;
}

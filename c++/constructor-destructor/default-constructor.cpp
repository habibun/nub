#include<iostream>
using namespace std;

class Add
{
    private:
        int x,y,z;

    public:
        Add()
        {
            x = 5;
            y = 6;
        }

        void getData()
        {
            cout<<"Enter two numbers: ";
            cin>>x>>y;
        }

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

int main()
{
    Add a;
//    a.getData();
    a.calculate();
    a.display();

    return 0;
}

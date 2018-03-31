#include<iostream>
using namespace std;

class Add
{
    private:
        int x,y,z;

    public:
        Add(int a, int b)
        {
            x = a;
            y = a;
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
    Add a(8, 8);
//    a.getData();
    a.calculate();
    a.display();

    return 0;
}

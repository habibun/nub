#include<iostream>
using namespace std;

class Add
{
    private:
        int x,y,z;

    public:
        Add();   //Default Constructor

        Add(int, int);  //Parameterized Constructor

        Add(Add &); //Copy Constructor

        void calculate();
        void display();
};

Add::Add()
{
    cout<<"Called Default Constructor"<<endl;
}


Add::Add(int a, int b)  //Parameterized Constructor
    {
        x = a;
        y = b;

        cout<<"Called Parameterized Constructor"<<endl;
    }

Add::Add(Add &p)    //Copy Constructor
{
    x = p.x;
    y = p.y;

    cout<<"Value of x and y for new object: "<<x<<" and "<<y<<endl;
    cout<<"Called Copy Constructor"<<endl;
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
    Add a(8, 10);

    Add b(a);
    b.calculate();
    b.display();

    return 0;
}

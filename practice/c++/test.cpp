#include<iostream>
using namespace std;

class A
{
    private:
        int x, y;
    public:
        void set(int a, int b)
        {
            x = a;
            y = b;
        }

        void show()
        {
            cout<<x<<endl;
            cout<<y<<endl;
        }
};

class B : public A
{
    private:
        int z;
    public:
        B(int a)
        {
            z = a;
        }

        void showZ()
        {
            cout<<z<<endl;
        }
};



int main()
{
    B b(5);
    b.set(6,7);
    b.show();
    b.showZ();
}

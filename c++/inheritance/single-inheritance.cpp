#include<iostream>
using namespace std;

class A {
    int i, j;
    public:
        void set(int a, int b)
        {
            i = a;
            j = b;
        }

        void show()
        {
            cout<<i<<"\t"<<j<<endl;
        }
};

class B: public A {
    private:
        int k;
    public:

        B(int x )
        {
            k = x;
        }

        void showk()
        {
            cout<<k<<endl;

        }
};

int main()
{
    B b(3);
    b.set(1,2);
    b.show();
    b.showk();

    return 0;
}

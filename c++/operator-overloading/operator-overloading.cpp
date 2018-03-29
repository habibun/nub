#include<iostream>
using namespace std;

class Farm
{
    private:
        int hen;
        int duck;
    public:
        Farm()
        {
        }

        Farm(int h,int d)
        {
            hen=h;
            duck=d;
        }

        void show()
        {
            cout<<"Total number of hens : "<<hen<<endl;
            cout<<"Total number of ducks : "<<duck;
        }

        Farm operator+(Farm f) //Operator Overloading
        {
            f.hen=f.hen+hen;
            f.duck=f.duck+duck;

            return f;
        }
};

int main()
{
    Farm f1(5,6),f2(3,3);
    f1=f1+f2;
    f1.show();

    return 0;
}

#include<iostream>
using namespace std;

class TwoValues {
    int a, b;
    public:
        TwoValues(int x, int y){
            a = x;
            b = y;
        }
        friend class Min;
};

class Min {
    public:
        int min(TwoValues t);
};

int Min::min(TwoValues t)
{
    return t.a < t.b ? t.a : t.b;

};

int main() {
    TwoValues tv(8, 5);
    Min m;
    cout<<m.min(tv);

    return 0;
}

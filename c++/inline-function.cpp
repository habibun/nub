#include<iostream>
using namespace std;

inline float area (int a) {
    return(3.14*a*a);
}

int main() {
    int r;
    cout<<" Enter the Value of r: ";
    cin>>r;
    cout<<"Area is: " << area(r);

    return 0;
}



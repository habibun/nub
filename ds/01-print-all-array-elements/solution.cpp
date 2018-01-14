#include<iostream>
using namespace std;

#define MAX 5

int main()
{
    int arr[MAX] = {7, 2, 3, 9, 5};
    int i;

    for(i = 0;  i < MAX ; i++){
        cout<<"arr"<<"["<<i<<"] = "<<arr[i]<<endl;
    }

    return 0;
}

#include<iostream>
using namespace std;
#define ARR_SIZE 5

int main()
{
    int arr[ARR_SIZE] = {7,2,3,9,5};
    int item = 9;   //item to be searched
    int i;
    int found = 0;  //flag variable

    for(i = 0; i < ARR_SIZE; i++){
        if(item == arr[i]){
            found++;
            break;
        }
    }

    if(found > 0){
        cout<<"Found "<<item<<" at position "<<i;
    }else{
        cout <<"Not found\n";
    }

    return 0;
}

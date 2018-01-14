#include<iostream>
using namespace std;
#define MAX 6


int main()
{
    int arr[MAX] = {7,2,3,9,5};
    int item = 100;   //item to be inserted
    int arrSize = 5;    //no of elements
    int insertLocation = 4; //location of insertion
    int i;

    cout<<"Before Insertion: "<<endl;
    for(i = 0; i < arrSize; i++){
        cout<<"arr["<<i<<"] = "<<arr[i]<<endl;
    }

    for(i = arrSize - 1; i >=insertLocation ; i--){
        arr[i+1] = arr[i];
    }

    //insert the item
    arr[insertLocation] = item;

    cout<<"After Insertion: "<<endl;
    for(i = 0; i < MAX; i++){
        cout<<"arr["<<i<<"] = "<<arr[i]<<endl;
    }

    return 0;
}

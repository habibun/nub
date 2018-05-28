#include<iostream>
using namespace std;

void insertionSort(int [], int);

int main()
{
    int arr[100], i, n;
    cout<<"Enter number of elements: "<<endl;
    cin>>n;

    cout<<"Enter array elements: "<<endl;
    for(i =0; i < n; i++){
        cin>>arr[i];
    }

    cout<<"Array elements before sorting: "<<endl;
    for(i =0; i < n; i++){
        cout<<arr[i]<<' ';
    }

    cout<<endl;

    insertionSort(arr, n);

    cout<<"Array elements after sorting: "<<endl;
    for(i =0; i < n; i++){
        cout<<arr[i]<<' ';
    }

    cout<<endl;

    return 0;
}

void insertionSort(int arr[], int n){
    int i, key, j;
    for(i = 1; i < n; i++){
        key = arr[i];
        j = i-1;

        while((j >= 0) and (arr[j] > key)){
            arr[j+1] = arr[j];
            j = j-1;
        }

        arr[j+1] = key;
    }
}
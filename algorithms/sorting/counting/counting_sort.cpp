#include<iostream>
#include<stdio.h>
using namespace std;

int countingSort(int [], int, int);

int main()
{
    int n, i, k = 0, A[6];
    cout<<("\t\t\t\t COUNTING SORT \n\n");

    printf("Enter the length of input: ");
    cin>>n;

    cout<<"Enter the array elements: ";
    for(i = 1; i <=n; i++){
        cin>>A[i];

        if(A[i] > k){
            k = A[i];
        }
    }

    countingSort(A, k, n);

    return 0;
}


int countingSort(int A[], int k, int n)
{
    int i, j;

    int B[6], C[500];
    for (i=0; i <= k; i++){
        C[i] = 0;
    }

    for (j=1; j <= n; j++){
        C[A[j]] = C[A[j]] + 1;
    }

    for (i=1; i <= k; i++){
        C[i] = C[i] + C[i-1];
    }

    for (j=n; j >= 1; j--){
        B[C[A[j]]] = A[j];
        C[A[j]] = C[A[j]] -1;
    }

    printf("\nThe Sorted array is : ");
    for(i=1; i <=n; i++){
        cout<<B[i]<<' ';
    }
}

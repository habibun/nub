#include<iostream>
#include<stdio.h>
using namespace std;
int counting_sort(int A[], int k, int n);

int main()
{
    int n, i, k = 0, A[6];
    printf("\t\tCOUNTING SORT \n\n");
    printf("Enter the number of input: ");
    scanf("%d", &n);
    printf("\n\n Enter the elements to be sorted: \n");
    for(i = 1; i <=n; i++){
        scanf("%d", &A[i]);
        if(A[i] > k){
            k = A[i];
        }
    }
    counting_sort(A, k,n);

    return 0;
}


int counting_sort(int A[], int k, int n)
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

    printf("\nThe Sorted array is :\n");
    for(i=1; i <=n; i++){
        printf("\t%d", B[i]);
    }
}

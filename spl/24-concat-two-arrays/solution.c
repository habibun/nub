#include<stdio.h>;

int main()
{
    int i, j, k, l, n, n1, n2, arr1[n1], arr2[n2], t = 0;

    printf("Enter first array size \n:");
    scanf("%d", &n1);

    for(i=0; i<n1; i++){
        scanf("%d", &arr1[i]);
    }

    printf("Enter second array size \n:");
    scanf("%d", &n2);

    for(i=0; i<n2; i++){
        scanf("%d", &arr2[i]);
    }
    n = n1+n2;

 int arr[n];

    for(i =0; i < n1; i++){
        arr[i] = arr1[i];
        t++;
    }

    for(i =0; i < n2; i++, t++){
        arr[t] = arr2[i];
    }


    for(i =0; i < n; i++){
        printf("%d", arr[i]);
    }


    return 0;
}

#include<stdio.h>

int main()
{
    int i, j, k, n, arr[n];

    printf("enter the array size \n");
    scanf("%d", &n);

    for(i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    for(k=0; k< n; k++){
        for(j=0 + 1; j<n; j++){
            if(arr[j] == arr[k]){
                printf("Duplicate array found.");

                return 0;
            }
        }
    }

    printf("No duplicate element found.");

    return 0;
}

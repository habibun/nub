#include <stdio.h>
int main()
{
    int i, n, ara[n], min = 9999999;

    printf("Enter the array size: ");
    scanf("%d", &n);

    printf("Enter the array elements: ");
    for(i = 0; i < n; i++){
        scanf("%d", &ara[i]);
    }

    for(i = 0; i < n; i++){
        if(ara[i] < min){
            min = ara[i];
        }
    }

    printf("minimum element is: %d", min);

    return 0;
}

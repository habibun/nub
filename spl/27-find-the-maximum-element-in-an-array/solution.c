#include <stdio.h>
int main()
{
    int i, n, ara[n], max = -9999999;
    printf("Enter the array size: ");
    scanf("%d", &n);

    printf("Enter the array elements: ");
    for(i = 0; i < n; i++){
        scanf("%d", &ara[i]);
    }

    for(i = 0; i < n; i++){
        if(ara[i] > max){
            max = ara[i];
        }
    }

    printf("maximum element is: %d", max);

    return 0;
}

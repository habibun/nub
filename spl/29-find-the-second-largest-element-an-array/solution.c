#include <stdio.h>;

int main()
{
    int i, n, max = -9999999, max2 = -9999999;

    printf("Enter the array size: ");
    scanf("%d", &n);
    int ara[n];

    printf("Enter the array elements: ");
    for(i = 0; i < n; i++){
        scanf("%d", &ara[i]);
    }

    for(i = 0; i<n; i++){
        if(ara[i] > max){
            max = ara[i];
        }
    }

    for(i = 0; i < n; i++){
        if(ara[i] > max2 && ara[i] < max)
        {
            max2 = ara[i];
        }
    }

    printf("Second largest element is: %d", max2);

    return 0;
}

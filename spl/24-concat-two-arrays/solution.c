#include <stdio.h>
int main()
{
    int n1, n2, i, j, sum = 0;
    printf("Enter first array size: ");
    scanf("%d", &n1);
    int ara1[n1];

    printf("Enter second array size: ");
    scanf("%d", &n2);
    int ara2[n2];

    printf("Enter first array values: ");
    for(i = 0; i < n1; i++){
        scanf("%d", &ara1[i]);
    }

    printf("Enter second array values: ");
    for(i = 0; i < n2; i++){
        scanf("%d", &ara2[i]);
    }

    int n = n1 + n2;
    int ara[n];

    for(i = 0, j = 0; i < n1; i++, j++){
        ara[j] = ara1[i];
    }

    for(i = 0, j = n1; i < n2; i++, j++){
        ara[j] = ara2[i];
    }

    printf("printing concat array elements: ");
    for(i = 0; i < n; i++){
        printf("%d ", ara[i]);
    }

    return 0;
}

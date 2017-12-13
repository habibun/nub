#include <stdio.h>
int main()
{
    int n, i, ara[n];

    printf("Enter array size: ");
    scanf("%d", &n);

    printf("Enter array values: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &ara[i]);
    }

    printf("Printing array elements in reverse order: ");
    for(i = n-1; i >= 0; i--)
    {
        printf("%d ", ara[i]);
    }

    return 0;
}

#include <stdio.h>;

int main()
{
    int n, i, ara[n], sum = 0;
    printf("Enter array size: ");
    scanf("%d", &n);

    printf("Enter array values: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &ara[i]);
    }

    for(i = 0; i < n; i++)
    {
        sum += ara[i];
    }

    printf("sum is: %d", sum);

    return 0;
}

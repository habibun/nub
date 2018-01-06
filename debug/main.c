#include <stdio.h>

int power(int x, int y)
{
    int i, value = 1;
    for(i=1; i <= y; i++)
    {
        value *=x;
    }


    return value;
}

int main()
{
    int x, y, result;
    printf("Enter a base: ");
    scanf("%d", &x);

    printf("Enter a power: ");
    scanf("%d", &y);

    result = power(x, y);
    printf("%d", result);
    return 0;
}

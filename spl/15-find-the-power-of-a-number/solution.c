#include <stdio.h>

int power(int x, int y)
{
    int i, value = 1;
    for(i = 1; i <= y; i++)
    {
        value *= x;
    }
    return value;
}
int main()
{
    int a, b, result;
    printf("Enter base number: ");
    scanf("%d", &a);
    printf("Enter power number: ");
    scanf("%d", &b);
    result = power(a, b);
    printf("%d to the power %d is: %d", a, b, result);
    return 0;
}

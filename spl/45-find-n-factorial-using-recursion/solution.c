#include <stdio.h>

int factorial(int number)
{
    if(number == 1)
    {
        return 1;
    }

    return number*factorial(number-1);
}

int main()
{
    int n, result;
    printf("Enter number: ");
    scanf("%d", &n);
    result = factorial(n);
    printf("result: %d", result);

    return 0;
}

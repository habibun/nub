#include <stdio.h>
int fibonacci(int number)
{
    if(number == 0 || number == 1)
    {
        return number;
    }
    return fibonacci(number-1) + fibonacci(number-2);
}
int main()
{
    int n, result;
    printf("Enter number: ");
    scanf("%d", &n);
    result = fibonacci(n);
    printf("result: %d", result);
    return 0;
}

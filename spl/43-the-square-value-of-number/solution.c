#include <stdio.h>

int square(int number)
{
    int value = number*number;
    return value;
}

int main()
{
    int n, result;
    printf("Enter a number: ");
    scanf("%d", &n);
    result = square(n);
    printf("Square value is: %d", result);
    return 0;
}

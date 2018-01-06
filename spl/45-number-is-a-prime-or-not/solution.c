#include <stdio.h>
int isPrime(int number)
{
    int i;
    for(i = 2; i <= number/2; i++)
    {
        if(number % i == 0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int n, result;
    printf("Enter a number: ");
    scanf("%d", &n);
    result = isPrime(n);
    if(result == 1)
    {
        printf("Prime number.");
    }
    else
    {
        printf("Not prime number.");
    }
    return 0;
}

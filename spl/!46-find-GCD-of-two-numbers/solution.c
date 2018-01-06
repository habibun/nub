#include <stdio.h>
int gcd(int m, int n)
{
// gcd calculation in Euclidian method
    while (n > 0)
    {
        int r = m % n;
        m = n;
        n = r;
    }
    return m;
}
int main()
{
    int a, b, result;
    printf("Enter a number: ");
    scanf("%d", &a);
    printf("Enter another number: ");
    scanf("%d", &b);
    result = gcd(a, b);
    printf("gcd is: %d", result);
    return 0;
}

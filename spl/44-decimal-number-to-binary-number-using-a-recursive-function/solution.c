#include <stdio.h>

void decimalToBinary(int number)
{
    if(number == 0)
    {
        return;
    }
    decimalToBinary(number/2);
    printf("%d", number%2);
}

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    decimalToBinary(n);
    return 0;
}

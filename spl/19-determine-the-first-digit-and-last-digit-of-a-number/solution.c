#include <stdio.h>

int main()
{
    int num, firstDigit, lastDigit, test;
    double digits = 10.1;

    /* Input a number from user */
    printf("Enter any number: ");
    scanf("%d", &num);

    /* Find first digit */
    firstDigit = num;
    while(firstDigit >= 10){
        firstDigit = firstDigit / 10;
    }

    /* Find last digit */
    lastDigit = num % 10;

    printf("First digit = %d\n", firstDigit);
    printf("Last digit = %d\n", lastDigit);

    return 0;
}

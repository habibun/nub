/**
 * C program to find square root of a number
 */

#include <stdio.h>
#include <math.h>

int main()
{
    double num, root;

    /* Input a number from user */
    printf("Enter any number to find cube root: ");
    scanf("%lf", &num);

    /* Calculate square root of num */
    root = cbrt(num);

    /* Print the resultant value */
    printf("Cube root of %.2lf = %.2lf", num, root);

    return 0;
}

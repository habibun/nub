#include<stdio.h>

void changeValue(int *x);

int main()
{
    int x=5;

    printf("Before function call: %d \n", x);
    changeValue(&x);
    printf("After function call: %d \n", x);

    return 0;
}

void changeValue(int *x)
{
    *x = 10;
    printf("In function: %d \n", *x);
}

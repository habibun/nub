#include <stdio.h>
int main()
{
    int num;

    printf("Enter any number: ");
    scanf("%d", &num);

    if(num & 1)
    {
        printf("the number is odd %d", num);
    }
    else
    {
        printf("the number is even %d", num);
    }

    return 0;
}

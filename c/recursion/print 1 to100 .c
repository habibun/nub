#include <stdio.h>
int Numbers(int a, int b);


void  main()
{
    int a, b;

    printf("Enter lower limit: ");
    scanf("%d", &a);
    printf("Enter upper limit: ");
    scanf("%d", &b);

    printf("All numbers from %d to %d are: ",a,b);
    Numbers(a,b);

    return 0;
}
int Numbers(a,b)
{
    if(a > b)
        return;

    printf("%d ,", a);
    Numbers(a + 1, b);
}

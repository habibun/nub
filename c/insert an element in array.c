#include <stdio.h>

int main()
{
    int num[100],i,n, position,value;

    printf("Enter number of elements you want to add\n");
    scanf("%d",&n);
    printf("Enter %d elements\n",n);

    for (i=0; i<n; i++)
        scanf("%d", &num[i]);

    printf("Please enter the location where you want to insert an new element\n");
    scanf("%d", &position);

    printf("Please enter the value\n");
    scanf("%d", &value);

    for (i=n-1; i>=position-1; i--)
        num[i+1] = num[i];

    num[position-1] = value;

    printf("Resultant array is\n");
    for (i=0; i<=n; i++)
        printf("%d\n", num[i]);

    return 0;
}

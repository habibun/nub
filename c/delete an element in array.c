#include <stdio.h>

int main()
{
    int num[100],i,n, position;

    printf("Enter number of elements\n");
    scanf("%d",&n);

    printf("Enter %d elements\n", n);

    for (i=0; i<n ; i++ )
    scanf("%d",&num[i]);

    printf("Enter the location where you want to delete element\n");
    scanf("%d",&position);

    if ( position >= n+1 )
    printf("Deletion not possible.\n");

    else
    {
        for (i = position - 1 ; i<n-1 ; i++ )
        num[i] = num[i+1];

        printf("Resultant array is\n");

        for( i=0 ; i<n-1; i++)
        printf("%d\n", num[i]);
    }
    return 0;
}

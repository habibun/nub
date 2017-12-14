#include <stdio.h>
int main()
{
    int i, j, n;
    printf("Enter the array size: ");
    scanf("%d", &n);
    int ara[n];

    printf("Enter the array elements: ");
    for(i = 0; i < n; i++){
        scanf("%d", &ara[i]);
    }

    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(ara[j] <ara[i]){
                int temp = ara[i];
                ara[i] = ara[j];
                ara[j] = temp;
            }
        }
    }

    printf("Printing sorted array: ");
    for(i = 0; i < n; i++)
    {
        printf("%d ", ara[i]);
    }

    return 0;
}

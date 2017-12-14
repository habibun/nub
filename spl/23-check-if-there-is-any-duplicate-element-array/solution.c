#include <stdio.h>
int main()
{
    int n, i, j, ara[n];
    printf("Enter array size: ");
    scanf("%d", &n);

    printf("Enter array values: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &ara[i]);
    }

    for(i = 0; i < n; i++){
        for(j = i+1; j < n; j++){
            if(ara[i] == ara[j]){
                printf("Duplicate element found.");
                return 0;
            }
        }
    }

    printf("No duplicate element found.");

    return 0;
}

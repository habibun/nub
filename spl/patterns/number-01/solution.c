#include <stdio.h>

int main()
{
    int i, j, k, n = 4;

    for(i = 1; i <= n; i++){
        for(j = 1; j <= i; j++){
            printf("%d", j);
        }

        printf("\n");
    }

    for(i = 1; i <= n; i++){
        for(j = 1; j <= n - i; j++){
            printf("%d", j);
        }

        printf("\n");
    }
}

#include <stdio.h>

int main()
{
    int i,j,k,l, n = 4, counter = 1;

    for(i = 1; i <= n; i++){
        for(j = 1; j <= n - i; j++){
            printf(" ");
        }

        for(k = 1; k <= i; k++){
            printf("%d", counter);
            counter++;
        }

        printf("\n");
    }

    return 0;
}

#include <stdio.h>

int main(){
    int i, j, k, n = 4;

    for(i = 1; i <= n; i++){
        printf("%d", i);
        for(j = 1; j <= n-1; j++){
            printf(" ");
        }

        for(k = 1; k <= i; k++){
            printf("*");
        }
        printf("\n");
    }
}

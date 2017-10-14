#include <stdio.h>

int main()
{
    int i, j, n, k = 1;

    printf("input number: ");
    scanf("%d", &n);


    for(i = 2; i <= n - 1; i++){
        if(i % 2 == 0){
            printf("%d is not a prime number", i);
        }else {
            printf("%d is a prime number", i);
        }

        printf("\n");
    }
}

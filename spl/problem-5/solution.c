#include <stdio.h>

int main()
{
    int i, n, isPrime = 1;

    printf("input number: ");
    scanf("%d", &n);


    for(i = 2; i <= n - 1; i++){
        if(n % i == 0){
            printf("%d is not a prime number", i);
            isPrime = 0;
            break;
        }
    }

    if(isPrime!= 0) {
        printf("%d is a prime number", i);
    }
}

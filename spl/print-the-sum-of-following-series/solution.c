#include<stdio.h>;

int main()
{
    int i, n, sum = 0;

    printf("Enter the n i.e. max values of series: ");
    scanf("%d",&n);

    for(i=1; i<=n; i *= 3){
        sum += i;
        printf("%d \n", i);
    }

    printf("Sum of the series: %d", sum);
    return 0;
}

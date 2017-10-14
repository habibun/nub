#include <stdio.h>

int main()
{
    int marks[100];
    int i, j, n, total = 0;

    scanf("%d", &n);

    for(i = 1; i <= n; i++){
        scanf("%d", &marks[i-1]);
    }

    for(j = 1; j <= n; j++){
        total = total + marks[j - 1];
    }

    float average = total / n;
    printf("%f", average);
}

#include <stdio.h>

int main()
{
    int i, arr[5], sum = 0;
    double avg;

    printf("Insert an array: \n");

    for(i=0; i < 5; i++){
        scanf("%d", &arr[i]);
    }

    for(i=0; i< 5; i++){
        sum = sum + arr[i];
    }

    avg = sum / 5;

    printf("Average of an array is : %lf \n", avg);
}

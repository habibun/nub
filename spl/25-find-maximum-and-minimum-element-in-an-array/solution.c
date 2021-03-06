#include <stdio.h>

int main()
{
    int arr[100];
    int i, max, min, size;

    /* Input size of the array */
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    /* Input array elements */
    printf("Enter elements in the array: ");
    for(i=0; i<size; i++){
        scanf("%d", &arr[i]);
    }

    /* Assume first element as maximum and minimum */
    max = arr[0];
    min = arr[0];

    /* Find maximum maximum and minimum in all array  elements */
    for(i=0; i<size; i++){
        /* If current element of array is greater than max */
        if(arr[i] > max){
            max = arr[i];
        }

        /* If current element of array is greater than max */
        if(arr[i] < min){
            min = arr[i];
        }
    }

    printf("Maximum element = %d\n", max);
    printf("Minimum element = %d", min);
}

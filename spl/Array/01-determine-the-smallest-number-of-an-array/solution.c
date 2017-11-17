#include <stdio.h>

int main()
{
	int i, arr[5];

	printf("Insert an array: \n");

	for(i=0; i < 5; i++){
		scanf("%d", &arr[i]);
	}

	int smallest = 999999;

	for(i=0; i < 5; i++){
		if( arr[i] < smallest){
			smallest = arr[i];
		}
	}

	printf("The smallest number of array is : %d \n", smallest);
}

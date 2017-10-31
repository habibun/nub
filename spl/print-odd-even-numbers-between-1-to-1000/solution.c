#include<stdio.h>

int main()
{
	int i;

	for(i = 1; i <= 1000; i++){
		if(i%2 == 0){
			printf("%d is a even number.\n", i);
		}else{
			printf("%d is a odd number. \n", i);
		}
	}
}

#include<stdio.h>

int main()
{
    int num;
    printf("Enter a number: \n");
    scanf("%d", &num);

    if(num == 0){
	printf ("The entered number is zero \n"); 
    }else{
	printf ("The entered number is not zero \n");
    }
}

#include<stdio.h>
int main()
{
    int a;
    printf("Enter an integer : ");
    scanf("%d",&a);

    if(a%2==0)
        printf("Even\n");
    else
        printf("odd");


    return 0;
}

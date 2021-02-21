//write a nested for loop and print whatever you want.
#include<stdio.h>

int main()
{
    int i,j;

    for(i=1;i<=5;i++)
    {
        for(j=1;j<=10;j++)
        {
            printf("%d\t",j);
        }
        printf("\n");
    }
}

#include<stdio.h>
int main()
{
    int a[100],size,i;
    printf("Enter number of elements in array = ");
    scanf("%d",&size);

    printf("\nEnter %d the elements  : ",size);

    for(i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nresultant array is = ");
    for(i=size-1;i>=0;i--)
    {
        printf(" %d",a[i]);
    }

    printf("\ncoding is a fun !");


     return 0;



}

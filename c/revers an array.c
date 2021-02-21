#include<stdio.h>
int main()

{
    int a[100],size ,i;
    printf("Enter the size of the array ");
    scanf("%d",&size);
    printf("enter the elements ");

    for (i=0;i<size;i++)
    {
      scanf("%d",&a[i]);
    }
    for(i=size-1;i>=0;i--)
    {
        printf("%d ",a[i]);
    }


}

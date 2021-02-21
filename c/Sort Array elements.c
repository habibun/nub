#include<stdio.h>
int main()
{
    int a[100],i,j,n,temp;

    printf("enter the value of n : ");
    scanf("%d",&n);

    printf("Enter the %d elemenets : \n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }

    printf("Ascending order: ");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}

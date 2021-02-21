#include<stdio.h>
int main()
{
    int a[100],sum=0,i,n;

    printf("how many number : ");
    scanf("%d",&n);


    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=0; i<n; i++)
    {
        sum = sum + a[i];
    }
    printf("the sum is : %d\n",sum);
    printf("the average is : %.2f\n",(float)sum/n);

}

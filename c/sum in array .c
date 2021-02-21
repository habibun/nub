#include<stdio.h>
int main()
{
    int num[100],sum =0,n,i;

    printf("Enter the number of integers you want to add : ");
    scanf("%d",&n);
    printf("Enter %d integer  :",n);

    for(i=0; i<n; i++)
    {
        scanf("%d",&num[i]);
        sum = sum + num[i];
    }
    printf("\nSum =%d",sum);

    printf("\n\n\t\t coding is fun!\n\n");


    return 0;

}

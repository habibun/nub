#include<stdio.h>
int main()
{
    int a,r,temp,sum=0;
    printf("enter any number : ");
    scanf("%d",&a);

    temp = a;

    while(temp!=0)
    {
        r = temp % 10;
        sum = sum + r;
        temp = temp / 10;
    }
    printf("sum of digits : %d",sum);
}

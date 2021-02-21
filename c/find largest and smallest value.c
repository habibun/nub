#include<stdio.h>
int main()
{
    int num[100],n,i;

    printf("Enter the size of the array : ");
    scanf("%d",&n);
    printf("Enter the %d elements of the array :",n);

    for(i=0; i<n; i++)
    {
        scanf("%d",&num[i]);
    }
    int lar = num[0];

    for(i=1; i<n; i++)
    {
        if(lar < num[i]);
        lar = num[i];
    }
    printf("\n\nthe largest element is : %d",lar);


     int sma = num[0];

    for(i=1; i>n; i++)
    {
        if(sma > num[i]);
        sma = num[i];
    }
    printf("\n\nThe smallest elements is : %d",sma);
    printf("\n\n\t\t\tcoding is fun!\n\n");

}

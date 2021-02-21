#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter frist number : ");
    scanf("%d",&a);


    printf("Enter second number : ");
    scanf("%d",&b);


    if(a>b)
       printf("large= %d",a);
    else if(a<b)
        printf("large= %d",b);

    else
        printf("numbers are equal");



    return 0;



}

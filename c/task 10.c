// input two number and print the Largest
#include<stdio.h>

int main()
{
    int a,b;
    printf("Please enter two number : ");
    scanf("%d %d",&a,&b);


    if(a > b)
    {
        printf("largest number = %d\n",a);

    }
    else if (b>a)
    {
        printf("largest number =%d\n",b);
    }
    else
    {
        printf("both are equal");
    }

    getch();
}

#include<stdio.h>
int func1(int);
int func2(int);
int func3(int);
void main()
{
 int a,b,c,sum;

 int ae = func1(a);
 int be = func2(b);
 int ce = func3(c);

 sum = (ae+be+ce);

 printf("the result is = %d",sum);

}

int func1(a)
{
    printf("enter frist number : ");
    scanf("%d",&a);
    return (a);
}
int func2(b)
{
    printf("enter second number : ");
    scanf("%d",&b);
    return (b);
}
int func3(c)
{
    printf("enter third number : ");
    scanf("%d",&c);
    return (c);
}




#include<stdio.h>
char func1();
char func2();
char func3();
char func4[8];
void main()
{
    char a,b,c,result;

    char ae = func1(a);
    char be = func2(b);
    char ce = func3(c);

    char s1[5]={ae,be,ce};

    printf("\nthe result is = %s",s1);

}

char func1(a)
{
    printf("enter frist letter : ");
    scanf("%s",&a);
    return (a);
}
char func2(b)
{
    printf("enter second letter : ");
    scanf("%s",&b);
    return (b);
}
char func3(c)
{
    printf("enter third letter : ");
    scanf("%s",&c);
    return (c);
}






#include<stdio.h>
#include<string.h>
void main()
{
    int d1,m1,y1,d2,m2,y2;
    char name[20];
    clrscr();
    printf("       THIS IS A PROGRAM TO FIND THE PRESENT AGE OF A PERSON     \n...............................................................\n");
    printf("Enter the name of the person:");
    gets(name);
    printf("Enter date of birth of %s :",name);
    printf("\nday:");
    scanf("%d",&d1);
    printf("month:");
    scanf("%d",&m1);
    printf("year:");
    scanf("%d",&y1);
    printf("\nEnter the present date :");
    printf("\nday:");
    scanf("%d",&d2);
    printf("month:");
    scanf("%d",&m2);
    printf("year:");
    scanf("%d",&y2);
    printf("The age of %s on %d/%d/%d is",name,d2,m2,y2);
    findage(d1,m1,y1,d2,m2,y2);
    getch();
}
int findage(int d1,int m1,int y1,int d2,int m2,int y2)
{
    int y,d,m,age;
    y=y2-y1;
    m=m2-m1;
    d=d2-d1;
    if((m2<m1)||((m1==m2)&&(d2<d1)))
    {
    y=y-1;
    }
    m=(12-m1)+m2;
    if (d2<d1)
    {
    d=d*-1;
    }
    printf(" %d years,%d months and %d days",y,m,d);
    return 0;
}

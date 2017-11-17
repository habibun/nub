# include<stdio.h>

# include<conio.h>


void main()
{
int bd,bm,by,cd,cm,cy,ad,am,ay;
clrscr();
printf("\n\t enter the current date :");
scanf("%d%d%d",&cd,&cm,&cy);
printf("\n\t enter the date of birth : ");
scanf("%d%d%d",&bd,&bm,&by);
if(cd<bd)
{
cm=cm-1;
cd=cd+30;
}
if(cm<bm)
{
cy=cy-1;
cm=cm+12;
}
ad=cd-bd;
am=cm-bm;
ay=cy-by;
printf("\n\t Your age is :%d,%d,%d",ay,am,ad);
getch();
}

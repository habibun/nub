//print the Multiplication Table of any Number
#include<stdio.h>
int main ()
{
   while(1){
   int a,i;
   printf("Enter any number : ");
   scanf("%d",&a);
   for(i=1;i<=10;i++)
   {
       printf("%d x %d = %d\n",a,i,a*i);
   }

   }
}

int main()
{
   int x,y,*p,*q,sum;

   printf("Enter two integers\n");
   scanf("%d%d", &x, &y);

   p = &x;
   q = &y;

   sum = *p + *q;

   printf("Sum of those numbers = %d\n", sum);

   getch();
}


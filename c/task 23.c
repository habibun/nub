#include<stdio.h>
int main()
{
  int Num, i, Sum = 0;

  printf("Please Enter any Integer Value : ");
  scanf("%d", &Num);

  for(i = 1; i <= Num; i++)
  {
     Sum = Sum + i;
  }

  printf("Sum of Natural Numbers = %d", Sum);
  return 0;
}

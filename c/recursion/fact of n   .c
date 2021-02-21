#include <stdio.h>
int fact(int n)
{
  if (n==1)
        return 1;
  else
    return  n*fact(n-1);

}
int main()
{
    int n;
    printf("enter any number : ");
    scanf("%d",&n);
    printf("factorila of the number %d   = %d",n,fact(n));
}

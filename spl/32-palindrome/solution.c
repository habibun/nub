#include <stdio.h>
#include <string.h>

char *strrev(char *str)
{
      char *p1, *p2;

      if (! str || ! *str)
            return str;
      for (p1 = str, p2 = str + strlen(str) - 1; p2 > p1; ++p1, --p2)
      {
            *p1 ^= *p2;
            *p2 ^= *p1;
            *p1 ^= *p2;
      }
      return str;
}

int main()
{
   char a[100], b[100];

   printf("Enter a string to check if it is a palindrome\n");
   gets(a);

   strcpy(b,a);
   strrev(b);

   if (strcmp(a,b) == 0)
      printf("Entered string is a palindrome.\n");
   else
      printf("Entered string is not a palindrome.\n");

   return 0;
}

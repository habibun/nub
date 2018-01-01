#include<stdio.h>

int entropy_calc(long byte_count[], int length)
{
      float entropy;
      float count;
      int i;

      /* entropy calculation */
      for (i = 0; i < length; i++)
        {
          if (byte_count[i] != 0)
            {
              count = (float) byte_count[i] / (float) length;
              entropy += -count * log2f(count);
            }
        }
      return entropy;
}

int main()
{

    int s[100], len;

    printf("Please enter the string: \n");
    scanf("%s", &s);

    len = strlen(s);
    printf("%d", entropy_calc(s, len));

}

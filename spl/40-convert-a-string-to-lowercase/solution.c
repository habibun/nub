#include <stdio.h>
int main()
{
    int i;
    char str[100];

    printf("Enter the string: ");
    scanf("%s", str);

    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i] >= 65 && str[i] <= 90)
        {
            str[i] = str[i] + 32;
        }
    }
    printf("Lower case String is: %s", str);

    return 0;
}

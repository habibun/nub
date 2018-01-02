#include <stdio.h>
int main()
{
    int i;
    char str[100];

    printf("Enter the string: ");
    scanf("%s", str);

    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i] >= 97 && str[i] <= 122)
        {
            str[i] = str[i] - 32;
        }
    }
    printf("Upper case String is: %s", str);

    return 0;
}

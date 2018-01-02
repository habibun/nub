#include <stdio.h>
#include <string.h>
int main()
{
    int i, j, length;
    char str[100];

    printf("Enter the string: ");
    scanf("%s", str);

    length = strlen(str);

    for(i = 0, j = length-1; i < length/2; i++, j--)
    {
        int ch = str[i];
        str[i] = str[j];
        str[j] = ch;
    }
    printf("Reverse string is: %s", str);

    return 0;
}

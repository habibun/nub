#include <stdio.h>
int main()
{
    int i, upperCount = 0, lowerCount = 0;
    char str[100];

    printf("Enter the string: ");
    scanf("%s", str);

    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i] >= 65 && str[i] <= 90)
        {
            upperCount++;
        }
        else if(str[i] >= 97 && str[i] <= 122)
        {
            lowerCount++;
        }
    }
    printf("Number of uppercase character: %d\n", upperCount);
    printf("Number of lowercase character: %d\n", lowerCount);

    return 0;
}

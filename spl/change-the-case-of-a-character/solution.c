#include <stdio.h>

void main()
{
    char sentence[100];
    int count, ch, i;

    printf("Enter a sentence \n");
    for (i = 0;(sentence[i] = getchar()) != '\n'; i++)
    {
        ;
    }
    sentence[i] = '\0';
    /*  shows the number of chars accepted in a sentence */
    count = i;
    printf("The given sentence is : %s", sentence);
    printf("\nCase changed sentence is : ");
    for (i = 0; i < count; i++)
    {
        ch = islower(sentence[i])? toupper(sentence[i]) : tolower(sentence[i]);
        putchar(ch);
    }
}

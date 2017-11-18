#include<stdio.h>

int main()
{
    char str[100];
    int i, j, strlength = 0;

    printf("Enter a string to reverse \n");
    scanf("%s", str);

    strlength = strlen(str);

    for(i=0, j=strlength-1; i<strlength/2; i++, j--){
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }

    printf("\nReverse string is :%s", str);
}

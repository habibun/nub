#include<stdio.h>

int main()
{
    int i, length=0;
    char str[100];

    printf("Please enter a string: \n");
    scanf("%s", str);

    for(i=0; str[i] != '\0'; i++){
        length++;
    }


    printf("Length of string is : %d \n", length);

    return 0;
}

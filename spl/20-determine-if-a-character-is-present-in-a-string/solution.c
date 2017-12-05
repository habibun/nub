#include<stdio.h>

int main()
{
    char ch, str[50];
    int i, flag=0;

    printf("Enter the string : \n");\
    scanf("%s",str);

    printf("Enter the character to be searched : \n");
	scanf(" %c",&ch);

    for(i=0; i<str[i] != '\0'; i++){
        if(str[i] == ch){
            printf("Yes");
            flag++;
            break;
        }
    }

    if(flag == 0){
        printf("No");
    }

    return 0;
}

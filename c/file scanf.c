#include<stdio.h>
int main()
{
    FILE *file;
    char name[200];
    file = fopen("test.txt","r");

    if(file == NULL)
    {
        printf("file doesn't exit");

    }
    else
    {
        printf("file is opened\n");
        fscanf(file,"%s",&name);
        printf("%s",name);
        fclose(file);
    }
    getch();
}

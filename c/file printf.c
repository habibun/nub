#include<stdio.h>
int main()
{
    FILE *file;
    char name[500];
    file = fopen("test.txt","w");

    if(file==NULL)
    {
        printf("file doesn't exit");
    }
    else
    {
        printf("file is opened\n");
        printf("write whatever you want : ");
        gets(name);

        fputs(name,file);
        fputs("\n",file);
        printf("File is written successfully\n");
        fclose(file);
    }
    getch();
}

#include<stdio.h>
int main()
{
    FILE *file;
    char name[20] = "Jibon ali";
    int length = strlen(name);
    int i;
    file = fopen("test.txt","a");

    if(file==NULL)
    {
        printf("File doesn't exist");

    }

    else
    {
        printf("File is opened\n");
        for(i=0; i<length; i++)
        {
            fputc(name[i],file);

        }
        printf("File is written successfully");

        fclose(file);
    }
    getch();

}


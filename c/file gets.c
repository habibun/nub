#include<stdio.h>
int main()
{
    FILE *file;
    char ch[60];
    file = fopen("test.txt","r");
    if(file == NULL)
    {
        printf("file doesn't exist : ");

    }
    else
    {
     printf("file is opened\n");

     while(!feof(file))
     {
         fgets(ch,59,file);
         printf("%s\n",ch);

     }
     fclose(file);
    }
}

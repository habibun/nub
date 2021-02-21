#include<stdio.h>
int main()
{
    FILE *file;
    char name[40];
    char uni[50];
    int age;
    file = fopen("test.txt","w");


    if(file==NULL)
    {
        printf("the file doesn't exit");

    }
    else
    {
        printf("file is opened");
        printf("\nenter your name :");
        gets(name);
        printf("\nenter your university name : ");
        gets(uni);
        printf("\nenter your age : ");
        scanf("%d",&age);

        fprintf(file,"name : %s ,university : %s ,age : %d",name,uni,age);
        printf("file is written succesfully");
        fclose(file);
    }
    getch();
}

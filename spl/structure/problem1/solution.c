#include <stdio.h>

struct student
{
    int id;
    int mark;
};

int main()
{
    int i, totalStudent, targetedId, lowestMark = 999999;

    printf("Enter number of students: \n");
    scanf("%d", &totalStudent);

    struct student students[totalStudent];

    for(i=0; i<totalStudent; i++){
        printf("Enter id number of student %d: \n", i+1);
        scanf("%d",&students[i].id);

        printf("Enter mark of student %d: \n", i+1);
        scanf("%d",&students[i].mark);
    }

    for(i=0; i<totalStudent; i++){
        if(students[i].mark < lowestMark){
            lowestMark = students[i].mark;
            targetedId = students[i].id;
        }
    }

    printf("ID number %d got lowest mark. \n", targetedId);

    return targetedId;
}


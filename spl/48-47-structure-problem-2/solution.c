#include <stdio.h>
struct student
{
    int id;
    float marks[5];
};
int main()
{
    int i, j, n;
    printf("Enter total number of students: ");
    scanf("%d", &n);
    struct student allStudent[n];
    for(i = 0; i < n; i++)
    {
        printf("Enter id of student-%d: ", i+1);
        scanf("%d", &allStudent[i].id);
        for(j = 0; j < 5; j++)
        {
            printf("Enter mark of subject-%d: ", j+1);
            scanf("%f", &allStudent[i].marks[j]);
        }
    }
    printf("ID of students who failed in at least 1 subject: ");
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < 5; j++)
        {
            if(allStudent[i].marks[j] < 40)
            {
                printf("%d ", allStudent[i].id);
                break;
            }
        }
    }
    return 0;
}

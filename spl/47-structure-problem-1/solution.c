#include <stdio.h>
struct student
{
    int id;
    float mark;
};
int main()
{
    int i, n;
    float lowest = 999999.0;
    printf("Enter total number of students: ");
    scanf("%d", &n);
    struct student allStudent[n];
    for(i = 0; i < n; i++)
    {
        printf("Enter id of student-%d: ", i+1);
        scanf("%d", &allStudent[i].id);
        printf("Enter mark of student-%d: ", i+1);
        scanf("%f", &allStudent[i].mark);
    }
    for(i = 0; i < n; i++)
    {
        if(allStudent[i].mark < lowest)
        {
            lowest = allStudent[i].mark;
        }
    }
    printf("ID of students who got lowest mark: ");
    for(i = 0; i < n; i++)
    {
        if(allStudent[i].mark == lowest)
        {
            printf("%d ", allStudent[i].id);
        }
    }
}

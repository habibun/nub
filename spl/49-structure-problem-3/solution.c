#include <stdio.h>
#include <string.h>
struct criminal
{
    int id;
    char name[80];
    char crime[50];
};
int main()
{
    int i, n;
    printf("Enter total number of criminals: ");
    scanf("%d", &n);
    struct criminal allCriminal[n];
    for(i = 0; i < n; i++)
    {
        printf("Enter id of criminal-%d: ", i+1);
        scanf("%d", &allCriminal[i].id);
        printf("Enter the name of criminal-%d: ", i+1);
        scanf("%s", allCriminal[i].name);
        printf("Enter the crime type of criminal-%d: ", i+1);
        scanf("%s", allCriminal[i].crime);
    }
    printf("Name of criminals who committed murder: ");
    for(i = 0; i < n; i++)
    {
        if(strcmp(allCriminal[i].crime, "murder") == 0)
        {
            printf("%s ", allCriminal[i].name);
        }
    }
    return 0;
}

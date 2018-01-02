#include <stdio.h>
int main()
{
    int i, j, row, col;

    printf("Enter row: ");
    scanf("%d", &row);

    printf("Enter col: ");
    scanf("%d", &col);

    int ara1[row][col], ara2[row][col], ara[row][col];

    printf("Enter the first array elements: ");for(i = 0; i < row; i++)
    {
        for(j = 0; j < col; j++)
        {
            scanf("%d", &ara1[i][j]);
        }
    }

    printf("Enter the second array elements: ");
    for(i = 0; i < row; i++)
    {
        for(j = 0; j < col; j++)
        {
            scanf("%d", &ara2[i][j]);
        }
    }

    for(i = 0; i < row; i++)
    {
        for(j = 0; j < col; j++)
        {
            ara[i][j] = ara1[i][j] + ara2[i][j];
        }
    }
    printf("Result is: ");

    for(i = 0; i < row; i++)
    {
        for(j = 0; j < col; j++)
        {
            printf("%d ", ara[i][j]);
        }
        printf("\n");
    }
    return 0;
}

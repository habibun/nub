#include<stdio.h>
int main()

{
    int matrix[10][10],rows,cols,i,j,counter =0;

    printf("Enter the number of rows and columns of the matrix :\n");
    scanf("%d %d",&rows,&cols);

    printf("Enter the %d elements of the matrix :\n",rows*cols);
    for(i=0; i<rows; i++)
    {
        for(j=0; j<cols; j++)
        {
            scanf("%d", &matrix[i][j]);
            if(matrix[i][j] == 0)
                counter++;
        }
    }

    printf("\n\nThe entered matrix is:\n");
    for(i=0; i<rows; i++)
    {
        for(j=0; j<cols; j++)
        {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }

    if(counter>(rows*cols)/2)
        printf("\n\nThe entered matrix is a sparse matrix\n");
    else
        printf("\nThe entered matrix is not a sparse matrix\n");


        printf("\t\t\tcode is a fun!");


    return 0;
}

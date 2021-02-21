  #include<stdio.h>
int main()
{

    int i,j,NumbersOfRows,NumbersOfCols;
    int A[10][10],B[10][10],C[10][10],D[10][10];

    printf("Enter the number of rows and cols : ");
    scanf("%d %d", &NumbersOfRows,&NumbersOfCols);

    printf("Enter elements for A matrix.\n");
    for(i=0; i<NumbersOfRows; i++)
    {
        for(j=0; j<NumbersOfCols; j++)
        {
            printf("A[%d][%d] = ",i,j);
            scanf("%d",&A[i][j]);
        }
        printf("\n");

    }

    printf("\n\nEnter elements for B matrix.\n");

    for(i=0; i<NumbersOfRows; i++)
    {
        for(j=0; j<NumbersOfCols; j++)
        {
            printf("B[%d][%d] = ",i,j);
            scanf("%d",&B[i][j]);
        }
        printf("\n");
    }

    printf("A = ");
    for(i=0; i<NumbersOfRows; i++)
    {
        printf("\t");
        for(j=0; j<NumbersOfCols; j++)
        {
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }

    printf("\nB = ");
    for(i=0; i<NumbersOfRows; i++)
    {
        printf("\t");
        for(j=0; j<NumbersOfCols; j++)
        {
            printf("%d ",B[i][j]);
        }
        printf("\n");
    }

    for(i=0; i<NumbersOfRows; i++)
    {
        for(j=0; j<NumbersOfCols; j++)
        {
            C[i][j] = A[i][j] + B[i][j];
        }

    }

    printf("\nA+B = ");
    for(i=0; i<NumbersOfRows; i++)
    {
        printf("\t");
        for(j=0; j<NumbersOfCols; j++)
        {
            printf("%d ",C[i][j]);
        }
        printf("\n");

    }

    for(i=0; i<NumbersOfRows; i++)
    {
        for(j=0; j<NumbersOfCols; j++)
        {
            D[i][j] = A[i][j] - B[i][j];
        }

    }

    printf("\nA-B = ");
    for(i=0; i<NumbersOfRows; i++)
    {
        printf("\t");
        for(j=0; j<NumbersOfCols; j++)
        {
            printf("%d ",D[i][j]);
        }
        printf("\n");

    }
    return 0;

}

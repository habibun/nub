#include<stdio.h>
int main()
{
    int frist[10][10],second[10][10],result[10][10],r1,r2,c1,c2,i,j,k,sum=0;

    printf("Enter rows and colums for frist matrix : ");
    scanf("%d %d",&r1,&c1);

    printf("Enter rows and colums for second matrix : ");
    scanf("%d %d",&r2,&c2);

    while(c1!=r2)
    {
        printf("Error !! colum of first matrix not equal to row of second matrix\n");

        printf("Enter rows and colums for frist matrix : ");
        scanf("%d %d",&r1,&c1);

        printf("Enter rows and colums for second matrix : ");
        scanf("%d %d",&r2,&c2);
    }

    printf("\nEnter element for frist matrix\n");
    for (i=0; i<r1; i++)
    {
        for(j=0; j<c1; j++)
        {
            printf("frist[%d][%d] = ",i,j);
            scanf("%d",&frist[i][j]);
        }

    }

    printf("\nEnter element for frist matrix\n");
    for (i=0; i<r2; i++)
    {
        for(j=0; j<c2; j++)
        {
            printf("second[d][%d] = ",i,j);
            scanf("%d",&second[i][j]);
        }

    }

    for(i=0; i<r1; i++)
    {
        for(j=0; j<c2; j++)
        {
            for(k=0; k<c1; k++)
            {
                sum = sum + frist[i][k] * second [k][j];

            }
            result[i][j] = sum;
            sum =0;
        }
    }


    printf("\n\nfrist matrix\n");
    for (i=0; i<r1; i++)
    {
        printf("\t");
        for(j=0; j<c1; j++)
            printf("%d ",frist[i][j]);
        printf("\n");
    }

    printf("\n\nsecond matrix\n");
    for (i=0; i<r2; i++)
    {
        printf("\t");
        for(j=0; j<c2; j++)
            printf("%d ",second[i][j]);
        printf("\n");
    }

    printf("\n\nresult matrix\n");
    for (i=0; i<r1; i++)
    {
        printf("\t");
        for(j=0; j<c2; j++)
            printf("%d ",result[i][j]);
        printf("\n");
    }


}

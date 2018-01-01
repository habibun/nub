#include<stdio.h>

int main()
{
    int mat1[3][3], mat2[3][3], sum[3][3], i, j, k, l, m, n, o, p;

    // Adding 1st matrix
    printf("\nEnter elements of 1st matrix:\n");
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            scanf("%d", &mat1[i][j]);
        }
    }

    // Adding 2nd matrix
    printf("Enter elements of 2nd matrix:\n");
    for(k=0; k<3; k++){
        for(l=0; l<3; l++){
            scanf("%d", &mat2[k][l]);
        }
    }

    // Adding Two matrices
    for(m=0; m<3; m++){
        for(n=0; n<3; n++){
            sum[m][n] = mat1[m][n]+mat2[m][n];
        }
    }

    // Displaying the result
    printf("\nSum of two matrix is: \n\n");

    for(o=0; o < 3; o++)
    {
        for(p=0; p<3; p++)
        {
            printf("%d   ",sum[o][p]);
        }
    }
}

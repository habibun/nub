#include<stdio.h>

int main()
{
    int mat[3][3], i, j, k, l;

    for(i=0; i<3; i++){
        for(j=0; j<3;j++){
            scanf("%d", &mat[i][j]);
        }
    }

    for(k=0; k<3; k++){
        for(l=0; l<3;l++){
            printf("%d ", mat[k][l]);
        }
        printf("\n");
    }

    return 0;
}

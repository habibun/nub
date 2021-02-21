
#include<stdio.h>
#include<math.h>


int main()
{

    int i, j, n, arr[10][10], sum = 0, sum1 = 0, a = 0, normal;

    printf("Enter the number of rows (columns ) of the matrix: \n");
    scanf("%d",&n);

    printf("\nEnter the %d  elements of the first matrix: \n", n*n);

    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            scanf("%d", &arr[i][j]);
            a = arr[i][j]*arr[i][j];
            sum1 +=a;
        }
    }

    normal = sqrt((double)sum1);

    printf("\n\nThe normal of the given matrix is: %d\n\n", normal);
    for(i=0; i<n; i++)
    {
        sum = sum + arr[i][i];
    }
    printf("The Trace of the given matrix is: %d\n\n", sum);
    return 0;
}

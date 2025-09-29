//Add two matrices.

#include <stdio.h>
int main()
{
    int r, c, i, j;
    printf("Enter number of rows: ");
    scanf("%d", &r);
    printf("Enter number of columns: ");
    scanf("%d", &c);
    int matrix1[r][c], matrix2[r][c], sum[r][c];
    printf("Enter elements of the first matrix: \n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d", &matrix1[i][j]);
        }
    }
    printf("\nFirst Matrix: \n");
    for (i = 0; i < r; i++) 
    {
        for (j = 0; j < c; j++) 
        {
            printf("%d ", matrix1[i][j]);
        }
        printf("\n");
    }
    printf("Enter elements of the second matrix: \n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d", &matrix2[i][j]);
        }
    }
    printf("\nSecond Matrix: \n");
    for (i = 0; i < r; i++) 
    {
        for (j = 0; j < c; j++) 
        {
            printf("%d ", matrix2[i][j]);
        }
        printf("\n");
    }
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            sum[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
    printf("\nMatrix Addition: \n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }
}

//Perform diagonal traversal of a matrix.

#include <stdio.h>
int main() 
{
    int r, c, i, j, k;
    printf("Enter number of rows: ");
    scanf("%d", &r);
    printf("Enter number of columns: ");
    scanf("%d", &c);
    int matrix[r][c];
    printf("Enter elements of the matrix: ");
    for (i = 0; i < r; i++) 
    {
        for (j = 0; j < c; j++) 
        {
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("Matrix: \n");
    for (i = 0; i < r; i++) 
    {
        for (j = 0; j < c; j++) 
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    printf("Diagonal traversal: ");
    for (k = 0; k < r; k++) 
    {
        i = k;
        j = 0;
        while (i >= 0 && j < c) 
        {
            printf("%d ", matrix[i][j]);
            i--;
            j++;
        }
    }
    for (k = 1; k < c; k++) 
    {
        i = r - 1;
        j = k;
        while (i >= 0 && j < c) 
        {
            printf("%d ", matrix[i][j]);
            i--;
            j++;
        }
    }
    printf("\n");
    return 0;
}

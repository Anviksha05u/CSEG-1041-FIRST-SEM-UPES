//Write a program that takes a 4 × 4 matrix and finds the maximum element in each row and each column.

#include <stdio.h>
int main()
{
    int matrix[4][4]; //Declare a 4 × 4 matrix
    int i, j; //Loop counters
    int maxRow, maxCol; //Variables to store maximum values
    //Input elements of the matrix
    printf("Enter elements of the matrix: \n");
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
    //Display the matrix
    printf("\nMatrix: \n");
    for (i = 0; i < 4; i++) 
    {
        for (j = 0; j < 4; j++) 
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    //Find maximum element of each row
    printf("\nMaximum element in each row:\n");
    for (i = 0; i < 4; i++)
    {
        maxRow = matrix[i][0]; //Initialize maxRow with the first element of the row
        for (j = 0; j < 4; j++)
        {
            if (matrix[i][j] > maxRow)
            {
                maxRow = matrix[i][j];
            }
        }
        printf("Row %d: %d\n", i + 1, maxRow);
    }
    //Find maximum element of each column
    printf("\nMaximum element in each column:\n");
    for (j = 0; j < 4; j++)
    {
        maxCol = matrix[0][j]; //Initialize maxCol with the first element of the column
        for (i = 0; i < 4; i++)
        {
            if (matrix[i][j] > maxCol)
            {
                maxCol = matrix[i][j];
            }
        }
        printf("Column %d: %d\n", j + 1, maxCol);
    }
    return 0;
}
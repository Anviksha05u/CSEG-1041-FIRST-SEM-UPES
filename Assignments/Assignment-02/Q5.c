//Write a program to find the transpose of a given 3×3 matrix.

#include <stdio.h>
int main()
{
    int matrix[3][3], transpose[3][3]; //Declare the original and transpose matrices
    int i, j; //Loop counters
    //Input elements for the original matrix
    printf("Enter elements of the original matrix: \n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
    //Display the original matrix
    printf("\nOriginal Matrix: \n");
    for (i = 0; i < 3; i++) 
    {
        for (j = 0; j < 3; j++) 
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    //Calculate the transpose 
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transpose[j][i] = matrix[i][j];
        }
    }
    //Display the transpose matrix
    printf("\nTranspose Matrix: \n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }
    return 0;
}
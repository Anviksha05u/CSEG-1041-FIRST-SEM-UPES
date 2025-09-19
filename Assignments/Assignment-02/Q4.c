/*
Write a program to input two 3×3 matrices. Perform and display:
 (a) Matrix addition
 (b) Matrix subtraction
 (c) Matrix multiplication
*/

#include <stdio.h>
int main()
{
    int matrix1[3][3], matrix2[3][3]; //Declare two 3×3 matrices
    int sum[3][3], diff[3][3], prod[3][3]; //Matrices to store results
    int i, j, k; //Loop counters
    //Input elements for the first matrix
    printf("Enter elements of the first matrix: \n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &matrix1[i][j]);
        }
    }
    //Display the first matrix
    printf("\nFirst Matrix: \n");
    for (i = 0; i < 3; i++) 
    {
        for (j = 0; j < 3; j++) 
        {
            printf("%d ", matrix1[i][j]);
        }
        printf("\n");
    }
    //Input elements for the second matrix
    printf("Enter elements of the second matrix: \n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &matrix2[i][j]);
        }
    }
    //Display the second matrix
    printf("\nSecond Matrix: \n");
    for (i = 0; i < 3; i++) 
    {
        for (j = 0; j < 3; j++) 
        {
            printf("%d ", matrix2[i][j]);
        }
        printf("\n");
    }
    //Matrix addition
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            sum[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
    //Matrix subtraction
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            diff[i][j] = matrix1[i][j] - matrix2[i][j];
        }
    }
    //Matrix multiplication
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            prod[i][j] = 0; //Initialize each element to 0
            for (k = 0; k < 3; k++)
            {
                prod[i][j] += matrix1[i][j] * matrix2[i][j];
            }
        }
    }
    //Display the results
    printf("\nMatrix Addition: \n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }
    printf("\nMatrix Subtraction: \n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", diff[i][j]);
        }
        printf("\n");
    }
    printf("\nMatrix Multiplication: \n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", prod[i][j]);
        }
        printf("\n");
    }
    return 0;
}
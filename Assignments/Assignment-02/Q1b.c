//Write a program to input n integers into an array and Calculate the average of all numbers using loops.

#include <stdio.h>
int main()
{
    int n, i; //Variable declaration for number of elements and loop counter
    int sum = 0; //To store the sum of all numbers
    float average; //To store the average
    //Input the number of elements in the array
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n]; // Declare an array of size n
    //Take input of the elements and store it in the array
    printf("Enter elements: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        sum += arr[i]; // Adding each number to sum
    }
    //Calculate average
    average = (float)sum / n; //Explicit conversion to float for decimal results
    //Display the result
    printf("The average of the numbers is: %.2f", average);
    return 0;
}
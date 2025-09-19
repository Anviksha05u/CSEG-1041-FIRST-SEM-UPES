//Write a program to input n integers into an array and Count how many numbers are even and how many are odd using loops. 

#include <stdio.h>
int main()
{
    int n, i;//Variable declaration for number of elements and loop counter
    int evenCount = 0, oddCount = 0; //To count even and odd numbers
    //Input the number of elements in the array
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n]; // Declare an array of size n
    //Take input of the elements and store it in the array
    printf("Enter elements: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    //Loop to check each number and count even and odd numbers
    for (i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            evenCount++;
        }
        else
        {
            oddCount++;
        }
    }
    //Display the results
    printf("Total even numbers: %d\n", evenCount);
    printf("Total odd numbers: %d\n", oddCount);
}
// Write a program to input n integers into an array and Find the largest and smallest number using loops. 

#include <stdio.h>
int main()
{
    int n, i; //Variable declaration for number of elements and loop counter
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
    int l = arr[0], s = arr[0]; //Initialize largest and smallest number in the array with the first element of the array
    //Loop to find the largest and smallest number in the array
    for (i = 1; i < n; i++)
    {
        if (arr[i] > l)
        {
            l = arr[i];
        }
        if (arr[i] < s)
        {
            s = arr[i];
        }
    }
    //Display the results
    printf("The largest number is: %d\n", l);
    printf("The smallest number is: %d\n", s);
    return 0;
}

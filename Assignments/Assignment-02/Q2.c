// Write a program to input n integers in an array. Ask the user for a number and check if it exists in the array using the ternary operator. Print "Found" or "Not Found".

#include <stdio.h>
int main()
{
    int n,i; //Variable declaration for number of elements and loop counter
    int ns; //Number to be searched
    int found = 0; //Flag variable
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
    //Input the number to be searched
    printf("Enter the number to search: ");
    scanf("%d", &ns);
    //Loop to search for the number in array
    for (i = 0; i < n; i++)
    {
        if (arr[i] == ns)
        {
            found = 1; //Set flag to 1 if the element is found
            break; //exit loop once found
        }
    }
    //Display the results
    printf("%s", (found == 1) ? "Found" : "Not Found");
    return 0;
}
// Write a program to input 10 integers (range 0–9). Store them in an array. Then, using a switch-case, print the frequency of each digit.

#include <stdio.h>
int main()
{
    int arr[10]; //Array to store 10 integers (0-9)
    int freq[10] = {0}; //Frequency array initialized to 0
    int i; //Variable declaration for loop counter
    //Take input of the elements and store it in the array
    printf("Enter elements (0-9): ");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
        if (arr[i] < 0 || arr[i] > 9) 
        {
            printf("Invalid input!\n");
            i--;
        }
    }
    //Count frequency
    for (i = 0; i < 10; i++)
    {
        freq[arr[i]]++;
    }
    //Print frequency using switch-case
    printf("Frequency of each digit:\n");
    for (i = 0; i < 10; i++)
    {
        switch (i)
        {
            case 0: 
            printf("Digit 0 occurs %d times\n", freq[i]);
            break;
            case 1: 
            printf("Digit 1 occurs %d times\n", freq[i]);
            break;
            case 2: 
            printf("Digit 2 occurs %d times\n", freq[i]);
            break;
            case 3: 
            printf("Digit 3 occurs %d times\n", freq[i]);
            break;
            case 4: 
            printf("Digit 4 occurs %d times\n", freq[i]);
            break;
            case 5: 
            printf("Digit 5 occurs %d times\n", freq[i]);
            break;
            case 6: 
            printf("Digit 6 occurs %d times\n", freq[i]);
            break;
            case 7: 
            printf("Digit 7 occurs %d times\n", freq[i]);
            break;
            case 8: 
            printf("Digit 8 occurs %d times\n", freq[i]);
            break;
            case 9: 
            printf("Digit 9 occurs %d times\n", freq[i]);
            break;
            default: 
            printf("Invalid digit!\n");
            break;
        }
    }
}
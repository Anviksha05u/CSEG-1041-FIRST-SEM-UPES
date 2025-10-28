//Write a program to take an integer array arr and an integer k as inputs. The task is to find the maximum element in each subarray of size k moving from left to right. Print the maximum elements for each window separated by spaces as output.

#include <stdio.h>
int main() 
{
    int arr[1000], n, k, i, j;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter elements: ");
    for (i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter an integer: ");
    scanf("%d", &k);
    for (i = 0; i <= n - k; i++) 
    {
        int max = arr[i];
        for (j = i + 1; j < i + k; j++) 
        {
            if (arr[j] > max) 
            {
                max = arr[j];
            }
        }
        printf("%d ", max);
    }
    printf("\n");
    return 0;
}

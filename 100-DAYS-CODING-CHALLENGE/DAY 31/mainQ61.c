//Search for an element in an array using linear search.

#include <stdio.h>
int main() 
{
  int size, i, s, found = 0;
  printf("Enter the number of elements: ");
  scanf("%d", &size);
  int arr[size];
  printf("Enter %d elements: ", size);
  for (i = 0; i < size; i++) 
  {
    scanf("%d", &arr[i]);
  }
  printf("Enter the element to search: ");
  scanf("%d", &s);
  for (i = 0; i < size; i++) 
  {
    if (arr[i] == s) 
    {
      found = 1;
      break;  
    }
  }
  if (found)
  printf("%d found at position %d \n", s, i + 1);
  else
  printf("%d not found in the array.\n", s);
  return 0;
}

